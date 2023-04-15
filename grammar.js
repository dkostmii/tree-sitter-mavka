module.exports = grammar({
    name: 'mavka',

    rules: {
        source_file: $ => repeat(
            choice(
                $._definition,
                $._expression
            )
        ),
        
        _definition: $ => choice(
            $.function_definition,
            $.assign_statement
        ),

        function_definition: $ => seq(
            'дія',
            $.identifier,
            $.parameter_list,
            $.function_block
        ),

        parameter_list: $ => parenthesize(
            sep(',', seq($.identifier, optional($._type)))
        ),

        _type: $ => choice(
            'текст',
            'логічне',
            'число',
            'список',
            'словник',
            'обʼєкт',
            'щось',
            'ніщо',
            'пусто'
        ),

        function_call: $ => seq(
            $.identifier,
            $.argument_list
        ),

        argument_list: $ => parenthesize(
            sep(',', seq(optional(seq($.identifier, '=')), $._expression))
        ),

        function_block: $ => seq(
            repeat(
                choice($._statement, $._expression)
            ),
            'кінець'
        ),

        _statement: $ => choice(
            $.assign_statement,
            $.return_statement
        ),

        assign_statement: $ => seq(
            $.identifier,
            optional($._type),
            $._assignment_operator,
            $._expression
        ),
        
        return_statement: $ => seq(
            'вернути',
            $._expression
        ),

        _expression: $ => choice(
            $.function_call,
            $.identifier,
            $.number,
            $.string
        ),

        _assignment_operator: $ => choice(
            '=',
            '+=',
            '-=',
            '*=',
            '/='
        ),

        identifier: $ => /[\p{Letter}_]+/,
        number: $ => /\d+(\.\d+)?/,
        string: $ => /".*?"/
    }
})

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function parenthesize(...rules) {
  return seq('(', ...rules, ')');
}
