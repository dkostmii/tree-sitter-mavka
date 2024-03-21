/**
 * @file Mavka grammar for tree-sitter
 * @author Dmytro-Andrii Kostelnyi <dmitrokostelny95@gmail.com>
 */

const PREC = {
  add: 1,
  mul: 2,
  comparison: 3,
  test: 4,
  bitwise: 5,
  chain: 6,
};

module.exports = grammar({
  name: 'mavka',

  word: ($) => $.identifier,

  extras: ($) => [$._whitespace, $._newline, $.line_comment, $.comment],

  conflicts: ($) => [
    [$.atom, $.assign_simple, $.super_identifiers_chain],
    [$.atom, $.super_identifiers_chain],
    [$.atom, $.assign_simple],
  ],

  rules: {
    program: ($) => repeat($.program_element),

    program_element: ($) =>
      seq(
        choice(
          $.module,
          $.structure,
          $.mockup,
          $.diia,
          $.if,
          $.each,
          $.while,
          $.try,
          $.expr,
          $.throw,
          $.eval,
          $.wait_assign,
          $.assign,
          $.take,
          $.give,
          $.comp_inst_block_program,
          $.comp_inst_assign,
        ),
        $._newline,
      ),

    module: ($) =>
      seq(
        'модуль',
        optional(field('m_name', $.identifier)),
        $._newline,
        repeat(field('m_body', $.module_body)),
        'кінець',
      ),

    module_body: ($) => prec.right(seq(repeat1($.module_body_element), $._newline)),

    module_body_element: ($) =>
      choice(
        $.module,
        $.structure,
        $.mockup,
        $.diia,
        $.if,
        $.each,
        $.while,
        $.try,
        $.expr,
        $.throw,
        $.eval,
        $.wait_assign,
        $.assign,
        $.give,
      ),

    structure: ($) =>
      seq(
        'структура',
        field('s_name', $.identifier),
        optional(seq('<', field('s_generics', $.generics), '>')),
        optional(
          seq(
            'є',
            field('s_parent', $.super_identifiers_chain),
            optional(seq('<', field('s_parent_generics', $.generics), '>')),
          ),
        ),
        $._newline,
        optional(field('s_elements', $.structure_elements)),
        'кінець',
      ),

    structure_elements: ($) => repeat1(seq(alias($.structure_param, $.structure_element), $._newline)),

    structure_param: ($) =>
      prec.left(
        seq(
          optional('спец'),
          field('sp_name', $.identifier),
          optional(field('sp_type', $.type_value)),
          optional(seq('=', field('sp_value', $.param_value))),
        ),
      ),

    mockup: ($) => choice($.mockup_module, $.mockup_structure, $.mockup_diia, $.mockup_subject),

    mockup_module: ($) =>
      seq(
        'макет',
        'модуль',
        field('mm_name', $.identifier),
        $._newline,
        optional(field('mm_elements', $.mockup_module_body)),
        'кінець',
      ),

    mockup_module_body: ($) => repeat1(seq($.mockup, $._newline)),

    mockup_structure: ($) =>
      seq(
        'макет',
        'структура',
        field('ms_name', $.identifier),
        optional(seq('<', field('ms_generics', $.generics), '>')),
        optional(
          seq(
            'є',
            field('ms_parent', $.super_identifiers_chain),
            optional(seq('<', field('ms_parent_generics', $.generics), '>')),
          ),
        ),
        $._newline,
        optional(field('ms_elements', $.mockup_structure_body)),
        'кінець',
      ),

    mockup_structure_body: ($) => repeat1(seq(alias($.structure_param, $.mockup_structure_body_element), $._newline)),

    mockup_diia: ($) =>
      prec.left(seq(
        'макет',
        optional('тривала'),
        optional('спец'),
        'дія',
        optional(seq(field('md_structure', $.identifier), '.')),
        field('md_name', $.identifier),
        optional(seq('<', field('md_generics', $.generics), '>')),
        '(',
        optional(field('d_params', $.params)),
        ')',
        optional(field('d_type', $.type_value)),
      )),

    mockup_subject: ($) => seq('макет', 'субʼєкт', field('ms_name', $.identifier), field('ms_type', $.type_value)),

    diia: ($) =>
      seq(
        optional('тривала'),
        optional('спец'),
        'дія',
        optional(seq(field('d_structure', $.identifier), '.')),
        field('d_name', $.identifier),
        optional(seq('<', field('d_generics', $.generics), '>')),
        '(',
        optional(field('d_params', $.params)),
        ')',
        optional(field('d_type', $.type_value)),
        $._newline,
        optional(field('d_body', $.body)),
        'кінець',
      ),

    if: ($) =>
      prec(
        8,
        seq(
          'якщо',
          field('i_value', $.expr),
          $._newline,
          optional(field('i_body', $.body)),
          choice(
            seq(optional(seq('інакше', $._newline, field('i_else_body', $.body))), 'кінець'),
            seq('інакше', field('i_else_if', $.if)),
          ),
        ),
      ),

    each: ($) =>
      seq(
        'перебрати',
        choice(field('e_iterator', $.atom), field('e_fromto', $.fromto)),
        'як',
        optional(seq(field('e_key_name', $.identifier), ',')),
        optional(field('e_name', $.identifier)),
        $._newline,
        optional(field('e_body', $.body)),
        'кінець',
      ),

    fromto: ($) => choice($.fromto_simple, $.fromto_complex),

    fromto_simple: ($) =>
      seq(
        field('fs_from', $.fromto_value),
        '..',
        optional(field('fs_to_symbol', $.fromto_to_symbol)),
        field('fs_to', $.fromto_value),
      ),

    fromto_complex: ($) =>
      seq(
        field('fc_from', $.fromto_value),
        '..',
        optional(field('fc_middle_symbol', $.fromto_middle_symbol)),
        field('fc_middle', $.fromto_value),
        '..',
        optional(field('fc_to_symbol', $.fromto_to_symbol)),
        field('fc_to', $.fromto_value),
      ),

    fromto_value: ($) => choice(field('fromto_number', $.number), field('fromto_id', $.identifier), $.fromto_nested),

    fromto_nested: ($) => seq('(', field('fn_value', $.expr), ')'),

    fromto_middle_symbol: ($) => choice('+', '-', '*', '/', '%', '//', '**'),

    fromto_to_symbol: ($) => choice('!=', '==', '>', '<', '>=', '<='),

    while: ($) => seq('поки', field('w_value', $.expr), $._newline, optional(field('w_body', $.body)), 'кінець'),

    try: ($) =>
      seq(
        'спробувати',
        $._newline,
        optional(field('t_body', $.body)),
        'зловити',
        optional(field('tc_name', $.identifier)),
        $._newline,
        optional(field('tc_body', $.body)),
        'кінець',
      ),

    eval: ($) =>
      choice(
        prec(2, seq('js', '"', optional(field('e_value', $.eval_value)), '"')),
        prec(3, seq('js', '"', '"', '"', optional(field('e_value', $.eval_value_multiline)), '"', '"', '"')),
      ),

    eval_value: ($) => /[^"\r\n]+/,
    eval_value_multiline: ($) => repeat1(choice(/[^"\\]+/, $.escaped_quote)),

    take: ($) =>
      seq(
        'взяти',
        optional(field('tm_repo', choice($.identifier, $.take_repo))),
        field('tm_name_chain', $.identifiers_chain),
        optional(choice(field('tm_elements', $.take_elements), seq('як', field('tm_as', $.identifier)))),
      ),

    take_repo: ($) => choice('пак', 'біб'),

    take_elements: ($) => choice(seq('[', '*', ']'), seq('[', repeatWithSep(',', $.take_element), optional(','), ']')),

    take_element: ($) => seq(field('tme_name', $.identifier), optional(seq('як', field('tme_as', $.identifier)))),

    give: ($) => seq('дати', $.give_element, repeat(seq(',', $.give_element))),

    give_element: ($) => seq(field('ge_name', $.identifier), optional(seq('як', field('ge_as', $.identifier)))),

    atom: ($) =>
      prec(
        3,
        choice(
          $.number,
          $.string,
          $.boolean,
          $.empty,
          $.me,
          $.parent,
          $.identifier,
          $.chain,
          $.call,
          $.get_element,
          $.typeless_array,
          $.typeless_dictionary,
          $.positive,
          $.negative,
          $.pre_increment,
          $.post_increment,
          $.pre_decrement,
          $.post_decrement,
          $.not,
          $.bitwise_not,
          $.nested,
        ),
      ),

    value: ($) => choice($.atom, $.arithmetic_mul, $.arithmetic_add, $.bitwise, $.comparison, $.test),

    arithmetic_mul: ($) =>
      prec.left(
        PREC.mul,
        seq(field('a_left', $.value), field('a_operation', $.arithmetic_op_mul), field('a_right', $.value)),
      ),

    arithmetic_add: ($) =>
      prec.left(
        PREC.add,
        seq(field('a_left', $.value), field('a_operation', $.arithmetic_op_add), field('a_right', $.value)),
      ),

    bitwise: ($) =>
      prec.left(
        PREC.bitwise,
        seq(field('b_left', $.value), field('b_operation', $.bitwise_op), field('b_right', $.value)),
      ),

    comparison: ($) =>
      prec.left(
        PREC.comparison,
        seq(field('c_left', $.value), field('c_operation', $.comparison_op), field('c_right', $.value)),
      ),

    test: ($) =>
      prec.left(
        PREC.test,
        seq(
          field('t_left', $.value),
          field('t_operation', choice($.test_op, $.test_op_word)),
          field('t_right', $.value),
        ),
      ),

    chain: ($) => prec.left(PREC.chain, seq(field('c_left', $.atom), '.', field('c_right', $.identifier))),

    call: ($) =>
      prec(
        3,
        seq(
          field('c_value', $.atom),
          optional(seq('<', $.call_generics, '>')),
          '(',
          optional(choice(field('c_args', $.args), field('c_named_args', $.named_args))),
          ')',
        ),
      ),

    get_element: ($) => prec(3, seq(field('ge_left', $.atom), '[', field('ge_element', $.expr), ']')),

    typeless_array: ($) => seq('[', optional(field('a_elements', $.array_elements)), ']'),

    typeless_dictionary: ($) => seq('(', optional(field('d_args', $.dictionary_args)), ')'),

    positive: ($) => seq('+', field('p_value', $.atom)),

    negative: ($) => seq('-', field('n_value', $.atom)),

    pre_decrement: ($) => seq('--', field('pd_value', $.atom)),

    pre_increment: ($) => seq('++', field('pi_value', $.atom)),

    post_decrement: ($) => prec(5, seq(field('pd_value', $.atom), '--')),

    post_increment: ($) => prec(5, seq(field('pi_value', $.atom), '++')),

    not: ($) => seq('!', field('n_value', $.atom)),

    bitwise_not: ($) => seq('~', field('bn_value', $.atom)),

    nested: ($) => seq('(', field('n_value', $.expr), ')'),

    // TODO: Implement mrm rules
    expr: ($) => choice($.value, $.as, $.ternary, $.wait, $.function, $.anonymous_diia),

    as: ($) => seq(field('a_left', $.atom), 'як', field('a_right', $.type_value_item)),

    ternary: ($) => seq(field('t_value', $.value), '?', field('t_positive', $.expr), ':', field('t_negative', $.expr)),

    wait: ($) => seq('чекати', field('w_value', $.value)),

    function: ($) =>
      prec(
        1,
        seq(
          optional('тривала'),
          '(',
          optional(field('f_params', $.params)),
          ')',
          optional(field('f_type', $.type_value)),
          ':',
          field('f_body', $.expr),
        ),
      ),

    anonymous_diia: ($) =>
      seq(
        optional('тривала'),
        'дія',
        optional(seq('<', field('d_generics', $.generics), '>')),
        '(',
        optional(field('d_params', $.params)),
        ')',
        optional(field('d_type', $.type_value)),
        $._newline,
        optional(seq(field('d_body', $.body))),
        'кінець',
      ),

    throw: ($) => seq('впасти', field('t_value', $.expr)),

    assign: ($) => choice($.assign_simple, $.assign_by_identifier, $.assign_by_element),

    assign_simple: ($) =>
      prec(
        3,
        seq(
          optional('субʼєкт'),
          field('as_identifier', $.identifier),
          optional(field('as_type', $.type_value)),
          field('as_symbol', $.assign_symbol),
          field('abi_value', $.expr),
        ),
      ),

    assign_by_identifier: ($) =>
      seq(
        field('abi_left', $.super_identifiers_chain),
        '.',
        field('abi_identifier', $.identifier),
        field('abi_symbol', $.assign_symbol),
        field('abi_value', $.expr),
      ),

    assign_by_element: ($) =>
      seq(
        field('abe_left', $.super_identifiers_chain),
        '[',
        field('abe_index', $.expr),
        ']',
        field('abe_symbol', $.assign_symbol),
        field('abe_value', $.expr),
      ),

    assign_symbol: ($) =>
      choice(
        'це',
        seq(optional(choice(':', $.arithmetic_op_add, $.arithmetic_op_mul, $.bitwise_op, $.test_op, '??')), '='),
      ),

    wait_assign: ($) => seq('чекати', field('wa_assign', $.assign)),

    args: ($) => seq($.arg, repeat(seq(',', $.arg))),
    arg: ($) => field('a_value', $.expr),
    named_args: ($) => seq($.named_arg, repeat(seq(',', $.named_arg))),
    named_arg: ($) => seq(field('na_name', $.identifier), '=', field('na_value', $.expr)),

    generics: ($) => repeatWithSep(',', $.identifier),
    call_generics: ($) => repeatWithSep(',', $.type_value),

    array_elements: ($) => seq($.array_element, repeat(seq(',', $.array_element))),
    array_element: ($) => field('ae_value', $.expr),

    dictionary_args: ($) => seq($.dictionary_arg, repeat(seq(',', $.dictionary_arg))),

    dictionary_arg: ($) =>
      seq(
        choice(field('da_name_id', $.identifier), field('da_name_string', $.string_line)),
        '=',
        field('da_value', $.expr),
      ),

    identifiers_chain: ($) =>
      choice(
        field('ic_identifier', $.identifier),
        seq(field('ic_left', $.identifiers_chain), '.', field('ic_right', $.identifier)),
      ),

    super_identifiers_chain: ($) =>
      prec(3, choice(
        field('sic_identifier', choice($.identifier, $.me, $.parent)),
        seq(field('sic_left', $.super_identifiers_chain), '.', field('sic_right', $.identifier)),
        seq(field('sic_left', $.super_identifiers_chain), '[', field('sic_index', $.expr), ']'),
      )),

    type_value: ($) => prec.right(repeatWithSep(choice('|', 'або'), $.type_value_item)),

    type_value_item: ($) => choice($.type_value_item_simple, $.type_value_item_array),

    type_value_item_simple: ($) =>
      seq(
        choice(field('tvi_value', $.identifiers_chain), field('tvi_builtin_value', $.type_value_item_builtin)),
        optional(seq('<', field('tvi_generics', $.type_value_item_generics), '>')),
      ),

    type_value_item_builtin: ($) =>
      choice(
        'щось',
        'ніщо',
        'пусто',
        'логічне',
        'число',
        'текст',
        'список',
        'словник',
        'обʼєкт',
        'Дія',
        'Структура',
        'Атом',
      ),

    type_value_item_generics: ($) => seq($.type_value, repeat(seq(',', $.type_value))),

    type_value_item_array: ($) => prec(7, seq('[', ']', $.type_value_item)),

    params: ($) => choice(seq(repeatWithSep(',', $.param), optional(seq(',', $.param_variadic))), $.param_variadic),

    param: ($) =>
      seq(
        field('p_name', $.identifier),
        optional(field('p_type', $.type_value)),
        optional(seq('=', field('p_value', $.param_value))),
      ),

    param_variadic: ($) =>
      seq('...', field('p_variadic_name', $.identifier), optional(field('p_variadic_type', $.type_value))),

    param_value: ($) =>
      choice(
        $.number,
        $.string,
        $.boolean,
        $.empty,
        alias($.identifier, $.param_value_identifier),
        $.param_value_empty_dictionary,
        $.param_value_empty_list,
      ),

    param_value_empty_dictionary: ($) => prec(1, seq('(', ')')),
    param_value_empty_list: ($) => prec(1, seq('[', ']')),

    body: ($) => repeat1(seq(choice($.body_element, $.return_body_line), $._newline)),

    // TODO: Find a way to implement MRM (mrm_diia, mrm_element etc.)
    body_element: ($) => choice($.if, $.each, $.while, $.try, $.expr, $.throw, $.wait_assign, $.assign),

    return_body_line: ($) => seq('вернути', field('rbl_value', $.expr)),

    arithmetic_op_mul: ($) => choice('*', '/', '%', '//', '**'),
    arithmetic_op_add: ($) => choice('+', '-'),
    bitwise_op: ($) => choice('^', '|', '&', '<<', '>>'),
    test_op: ($) => choice('||', '&&'),
    test_op_word: ($) => choice('і', 'або'),
    comparison_op: ($) =>
      choice(
        '==',
        '!=',
        '>',
        '<',
        '>=',
        '<=',
        'є',
        seq('не', 'є'),
        'рівно',
        seq('не', 'рівно'),
        'більше',
        seq('не', 'більше'),
        'менше',
        seq('не', 'менше'),
        'містить',
        seq('не', 'містить'),
      ),

    comp_inst_block_program: ($) =>
      seq(
        $.comp_inst_start,
        field('cibp_name', $.identifier),
        field('cibp_value', $.string_line),
        optional(field('cibp_program', $.comp_inst_program)),
        $.comp_inst_end,
      ),

    comp_inst_program: ($) => repeat1(alias($.program_element, $.comp_inst_program_element)),

    comp_inst_assign: ($) =>
      seq($.comp_inst_assign_symbol, field('cia_name', $.identifier), field('cia_value', $.string_line)),

    integer: ($) => /\d+/,
    float: ($) => /\d+.\d+/,
    hex: ($) => /0[шШxX][0-9АаБбВвГгҐґДдA-Fa-f]+/,
    bin: ($) => /0[дДbB][0-1]+/,
    number: ($) => choice($.integer, $.float, $.hex, $.bin),

    boolean: ($) => choice($.true, $.false),
    true: ($) => 'так',
    false: ($) => 'ні',
    empty: ($) => 'пусто',

    me: ($) => 'я',
    parent: ($) => 'предок',

    string: ($) => choice($.string_line, $.string_multiline),
    string_line: ($) => seq('"', repeat(choice($.string_line_part, $.string_interpolation)), '"'),
    string_line_part: ($) => /[^"\n\r%]+/,
    string_multiline: ($) =>
      prec(
        2,
        seq(
          '"',
          '"',
          '"',
          repeat(choice($.string_multiline_part, $.string_interpolation, $.escaped_quote)),
          '"',
          '"',
          '"',
        ),
      ),
    string_multiline_part: ($) => /[^"%\\]+/,
    escaped_quote: ($) => seq('\\', token.immediate('"')),

    string_interpolation: ($) => seq($.string_interpolation_start, $.expr, $.string_interpolation_end),
    string_interpolation_start: ($) => prec(1, seq('%', '(')),
    string_interpolation_end: ($) => ')',

    comp_inst_start: ($) => ';+',
    comp_inst_end: ($) => ';-',
    comp_inst_assign_symbol: ($) => ';=',

    comment: ($) => choice(seq(';*', /[^;*]*/, '*;'), seq(';;;', /[^;]*/, ';;;')),
    line_comment: ($) => seq(';;', /[^\r\n]*/),

    identifier: ($) => /[a-zA-Zа-яА-ЯіІїЇєЄґҐ_][a-zA-Zа-яА-ЯіІїЇєЄґҐ_0-9ʼ]*/,

    _whitespace: ($) => token(/[ \t]+/),
    _newline: ($) => token(seq(optional('\r'), '\n')),
  },
});

/**
 * Creates a sequence of {@link rule}, followed by
 * optional {@link sep} {@link rule}.
 * @param {*} sep Separator before second and so on {rule}.
 * @param {*} rule Rule to match one or more times.
 * @return {*} Resulting sequence.
 */
function repeatWithSep(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}
