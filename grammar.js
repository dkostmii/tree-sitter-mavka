module.exports = grammar({
    name: 'mavka',

    word: $ => $.identifier,

    extras: $ => [
      /\s/,
      $.line_comment,
      $.block_comment
    ],

    rules: {
      module: $ => repeat($.block),

      _expression: $ => choice(
        $._parenthesized_expression,
        $.symbol,
        $.primitive,
        $.array,
        $.dictionary,
        $.function_call,
        $.array_subsripting,
        $.binary_expression,
        $.unary_expression,
        $.function_expression
      ),

      _parenthesized_expression: $ => prec(9, seq(
        '(',
        $._expression,
        ')'
      )),

      binary_expression: $ => choice(
       prec.right(8, seq($._expression, '**', $._expression)),
       prec.left(7, seq($._expression, '*', $._expression)),
       prec.left(7, seq($._expression, '/', $._expression)),
       prec.left(7, seq($._expression, '%', $._expression)),
       prec.left(7, seq($._expression, '//', $._expression)),
       prec.left(6, seq($._expression, '+', $._expression)),
       prec.left(6, seq($._expression, '-', $._expression)),
       prec.left(5, seq($._expression, '<<', $._expression)),
       prec.left(5, seq($._expression, '>>', $._expression)),
       prec.left(4, seq($._expression, choice('>', 'більше'), $._expression)),
       prec.left(4, seq($._expression, choice('<', 'менше'), $._expression)),
       prec.left(4, seq($._expression, choice(seq('<', '='), 'не більше'), $._expression)),
       prec.left(4, seq($._expression, choice(seq('>', '='), 'не менше'), $._expression)),
       prec.left(4, seq($._expression, 'містить', $._expression)),
       prec.left(4, seq($._expression, 'не містить', $._expression)),
       prec.left(4, seq($._expression, 'є', $.type)),
       prec.left(4, seq($._expression, 'не є', $.type)),
       prec.left(3, seq($._expression, choice('==', 'рівно'), $._expression)),
       prec.left(3, seq($._expression, choice(seq('!', '='), 'не рівно'), $._expression)),
       prec.left(2, seq($._expression, '&', $._expression)),
       prec.left(2, seq($._expression, '|', $._expression)),
       prec.left(2, seq($._expression, '^', $._expression)),
       prec.left(1, seq($._expression, 'або', $._expression)),
       prec.left(1, seq($._expression, 'і', $._expression))
      ),

      unary_expression: $ => prec(20, choice(
        seq('-', $._expression),
        seq('!', $._expression),
      )),

      function_expression: $ => seq(
        $.parameter_list,
        ':',
        $._expression
      ),

      _definition: $ => choice(
        $.diia_definition,
        $.structure_definition,
        $.module_definition
      ),

      module_definition: $ => prec(10, seq(
        'модуль',
        $.identifier,
        optional($.block),
        'кінець'
      )),

      structure_definition: $ => seq(
        'структура',
        $.identifier,
        optional(seq('є', $.type)),
        repeat($.structure_field),
        'кінець'
      ),

      structure_field: $ => prec.left(2, seq(
        $.identifier,
        optional(choice($.type, $.type_expression)),
        optional(seq('=', $._expression))
      )),

      diia_definition: $ => seq(
        'дія',
        optional(
          choice(
            $.identifier,
            seq($.identifier, '.', $.identifier)
          )
        ),
        $.parameter_list,
        optional(
          choice($.type, $.type_expression)
        ),
        $.block,
        'кінець'
      ),

      _statement: $ => choice(
        $._expression,
        $.return_statement,
        $.assign_statement,
        $.if_statement,
        $.give_statement,
        $.take_statement,
        $.while_statement,
        $.for_statement,
        $.fall_statement,
        $.wait_statement
      ),

      wait_statement: $ => seq(
        'чекати',
        $._statement
      ),

      fall_statement: $ => seq(
        'впасти',
        $._expression
      ),

      while_statement: $ => seq(
        'поки',
        $._expression,
        optional($.block),
        'кінець'
      ),

      for_statement: $ => seq(
        'перебрати',
        $._expression,
        optional($.as_statement),
        optional($.block),
        'кінець'
      ),

      give_statement: $ => seq(
        'дати',
        $.symbol
      ),

      take_statement: $ => seq(
        'взяти',
        optional('пак'),
        choice(
          $.cloud_pak_link,
          $.symbol
        ),
        optional($.as_statement)
      ),
      
      cloud_pak_link: $ => seq(
        '"',
        $.cloud_pak_prefix,
        '/',
        $.cloud_pak_name,
        '/',
        $.cloud_pak_version,
        '"'
      ),
      cloud_pak_name: $ => prec(1, $.identifier),
      cloud_pak_version: $ => prec(2, /\d\.\d(\.\d)*/),
      cloud_pak_prefix: $ => "хмарний.пак.укр",

      as_statement: $ => seq(
        'як',
        $.identifier
      ),

      if_statement: $ => seq(
        repeat1($.if_clause),
        optional($.else_clause),
        'кінець'
      ),

      if_clause: $ => prec.right(2, seq(
        'якщо',
        $._expression,
        optional($.block)
      )),

      else_clause: $ => prec.right(3, seq(
        'інакше',
        optional($.block)
      )),

      block: $ => prec.right(0, repeat1(
        choice(
          $._statement,
          $._definition
        )
      )),

      assign_statement: $ => prec.right(2, choice(
        seq($.symbol, '=', $._expression),
        seq($.symbol, '+', '=', $._expression),
        seq($.symbol, '-', '=', $._expression),
        seq($.symbol, '*', '=', $._expression),
        seq($.symbol, '/', '=', $._expression),
        seq($.symbol, '%', '=', $._expression),
        seq($.symbol, '//', '=', $._expression),
        seq($.symbol, '<<', '=', $._expression),
        seq($.symbol, '>>', '=', $._expression),
        seq($.symbol, '&', '=', $._expression),
        seq($.symbol, '|', '=', $._expression),
        seq($.symbol, '^', '=', $._expression),
        seq($.symbol, '**', '=', $._expression),

        seq($.symbol, '+', '+'),
        seq($.symbol, '-', '-'),
        seq('+', '+', $.symbol),
        seq('-', '-', $.symbol)
      )),

      return_statement: $ => prec.right(20, seq(
        'вернути',
        optional($._expression)
      )),

      parameter_list: $ => seq(
        '(',
        optional(
          seq($.parameter_entry, repeat(seq(',', $.parameter_entry)))
        ),
        ')'
      ),

      parameter_entry: $ => prec(2, seq(
        $.identifier,
        optional(choice($.type, $.type_expression)),
        optional(
          seq('=', $._expression)
        )
      )),

      type_expression: $ => seq(
        $.type,
        repeat1(seq('або', $.type))
      ),

      type: $ => prec(2, choice(
        $.primitive_type,
        $.identifier,
      )),

      primitive_type: $ => prec(2, choice(
        'текст',
        'логічне',
        'число',
        'список',
        'словник',
        'обʼєкт',
        'щось',
        'ніщо',
        'пусто'
      )),

      function_call: $ => prec(3, seq(
        $._expression,
        $.argument_list
      )),

      array_subsripting: $ => prec(3, seq(
        $._expression,
        seq(
          '[',
          $._expression,
          ']'
        )
      )),

      argument_list: $ => prec(3, choice(
        $.dictionary,
        prec(5, seq(
          '(',
          optional($.expression_sequence),
          ')'
        ))
      )),

      dictionary: $ => prec(4, seq(
        '(',
        optional(
          seq($.dictionary_entry, repeat(seq(',', $.dictionary_entry)))
        ),
        ')'
      )),

      dictionary_entry: $ => seq(
        $.identifier,
        '=',
        $._expression
      ),

      array: $ => seq(
        '[',
        optional(
          $.expression_sequence
        ),
        ']'
      ),

      expression_sequence: $ => seq(
        $._expression, repeat(seq(',', $._expression))
      ),

      primitive: $ => choice(
        $.string,
        $.boolean,
        $.number,
        $.empty
      ),

      symbol: $ => prec(1, seq(
        choice($.identifier, $.me), repeat(seq('.', $.property))
      )),
      
      property: $ => $.identifier,
      identifier: $ => /[\p{L}_ʼ]+/,
      me: $ => prec(2, "я"),

      string: $ => seq(
        '"',
        repeat(
          choice(
            '\\"',
            /./,
            $.string_interpolation
          )
        ),
        '"'
      ),

      string_interpolation: $ => seq(
        "%(",
        $._expression,
        ")"
      ),

      true: $ => 'так',
      false: $ => 'ні',
      boolean: $ => choice($.true, $.false),

      number: $ => /\d+(\.\d+)?/,
      
      empty: $ => 'пусто',

      line_comment: $ => token(seq(';;', /.*/)),
      block_comment: $ => token(seq(';--', /.*/, '--;')),
    }
})
