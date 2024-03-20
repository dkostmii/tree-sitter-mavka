module.exports = grammar({
	name: "mavka",

	word: ($) => $.identifier,

	extras: ($) => [/\s/, $.line_comment, $.block_comment],

	rules: {
		module: ($) => repeat($.block),

		_expression: ($) =>
			choice(
				$._parenthesized_expression,
				$.symbol,
				$.primitive,
				$.array,
				$.dictionary,
				$.function_call,
				$.array_subsripting,
				$.binary_expression,
				$.unary_expression,
				$.function_expression,
			),

		_parenthesized_expression: ($) => prec(9, seq("(", $._expression, ")")),

		binary_expression: ($) =>
			choice(
				prec.right(8, seq($._expression, "**", $._expression)),
				prec.left(7, seq($._expression, "*", $._expression)),
				prec.left(7, seq($._expression, "/", $._expression)),
				prec.left(7, seq($._expression, "%", $._expression)),
				prec.left(7, seq($._expression, "//", $._expression)),
				prec.left(6, seq($._expression, "+", $._expression)),
				prec.left(6, seq($._expression, "-", $._expression)),
				prec.left(5, seq($._expression, "<<", $._expression)),
				prec.left(5, seq($._expression, ">>", $._expression)),
				prec.left(4, seq($._expression, choice(">", "більше"), $._expression)),
				prec.left(4, seq($._expression, choice("<", "менше"), $._expression)),
				prec.left(
					4,
					seq(
						$._expression,
						choice(seq("<", token.immediate("=")), "не більше"),
						$._expression,
					),
				),
				prec.left(
					4,
					seq(
						$._expression,
						choice(seq(">", token.immediate("=")), "не менше"),
						$._expression,
					),
				),
				prec.left(4, seq($._expression, "містить", $._expression)),
				prec.left(4, seq($._expression, "не містить", $._expression)),
				prec.left(4, seq($._expression, "є", $.type)),
				prec.left(4, seq($._expression, "не є", $.type)),
				prec.left(3, seq($._expression, choice("==", "рівно"), $._expression)),
				prec.left(
					3,
					seq(
						$._expression,
						choice(seq("!", token.immediate("=")), "не рівно"),
						$._expression,
					),
				),
				prec.left(2, seq($._expression, "&", $._expression)),
				prec.left(2, seq($._expression, "|", $._expression)),
				prec.left(2, seq($._expression, "^", $._expression)),
				prec.left(1, seq($._expression, "або", $._expression)),
				prec.left(1, seq($._expression, "і", $._expression)),
			),

		unary_expression: ($) =>
			prec(20, choice(seq("-", $._expression), seq("!", $._expression))),

		function_expression: ($) => seq($.parameter_list, ":", $._expression),

		_definition: ($) =>
			choice($.diia_definition, $.structure_definition, $.module_definition),

		module_definition: ($) =>
			prec(10, seq("модуль", $.identifier, optional($.block), "кінець")),

		structure_definition: ($) =>
			seq(
				"структура",
				$.identifier,
				optional($.generic_type_params),
				optional(seq("є", $.type)),
				repeat($.structure_field),
				"кінець",
			),

		structure_field: ($) =>
			prec.left(
				2,
				seq(
					$.identifier,
					optional($.type_annotation),
					optional(seq("=", $._expression)),
				),
			),

		diia_definition: ($) =>
			seq(
				optional(choice("тривала", "спец")),
				"дія",
				optional(
					seq(
						seq(
							$.identifier,
							optional(seq(".", choice($.identifier, $.magic_diia_identifier))),
						),
						optional($.generic_type_params),
					),
				),
				$.parameter_list,
				optional($.type_annotation),
				optional($.block),
				"кінець",
			),

		magic_diia_identifier: ($) =>
			token(
				seq(
					"чародія_",
					choice(
						"додати",
						"відняти",
						"помножити",
						"поділити",
						"остача",
						"частка",
						"степінь",
						"вабо",
						"дабо",
						"ді",
						"вліво",
						"вправо",
						"дні",
						"більше",
						"менше",
						"не_менше",
						"не_більше",
						"додатнє",
						"відʼємне",
						"містить",
						"отримати",
						"покласти",
						"викликати",
						"перебір",
						"число",
						"текст",
						"список",
						"словник",
						"байти",
					),
				),
			),

		_statement: ($) =>
			choice(
				$._expression,
				$.return_statement,
				$.assign_statement,
				$.if_statement,
				$.give_statement,
				$.take_statement,
				$.while_statement,
				$.for_statement,
				$.fall_statement,
				$.wait_statement,
				$.try_catch_statement,
				$.inline_language_block,
			),

		wait_statement: ($) =>
			seq("чекати", choice($.assign_statement, $._expression)),

		fall_statement: ($) => seq("впасти", $._expression),

		while_statement: ($) =>
			seq("поки", $._expression, optional($.block), "кінець"),

		for_statement: ($) =>
			seq(
				"перебрати",
				choice($._expression, $.as_statement),
				optional($.block),
				"кінець",
			),

		give_statement: ($) => seq("дати", $.symbol),

		take_statement: ($) =>
			prec.right(
				1,
				seq(
					"взяти",
					optional(choice("пак", "біб")),
					$.symbol,
					optional(choice($.as_statement, $.named_module_statement)),
				),
			),

		named_module_statement: ($) =>
			seq(
				"[",
				$.named_module_entry,
				repeat(seq(",", $.named_module_entry)),
				"]",
			),

		named_module_entry: ($) => choice($.identifier, $.as_statement),

		as_statement: ($) =>
			prec.left(
				1,
				seq(
					$._expression,
					$._whitespace,
					token.immediate("як"),
					$.identifier,
					repeat(seq(",", $.identifier)),
				),
			),

		try_catch_statement: ($) => seq($.try_clause, $.catch_clause),

		try_clause: ($) => seq("спробувати", optional($.block)),

		catch_clause: ($) =>
			seq("зловити", $.identifier, optional($.block), "кінець"),

		if_statement: ($) =>
			seq(repeat1($.if_clause), optional($.else_clause), "кінець"),

		if_clause: ($) =>
			prec.right(2, seq("якщо", $._expression, optional($.block))),

		else_clause: ($) => prec.right(3, seq("інакше", optional($.block))),

		block: ($) => prec.right(0, repeat1(choice($._statement, $._definition))),

		assign_statement: ($) =>
			choice(
				prec.right(2, seq($._expression, "=", $._expression)),
				prec.right(
					2,
					seq($._expression, "+", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "-", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "*", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "/", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "%", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "//", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "<<", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, ">>", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "&", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "|", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "^", token.immediate("="), $._expression),
				),
				prec.right(
					2,
					seq($._expression, "**", token.immediate("="), $._expression),
				),

				prec(
					30,
					seq($._expression, token.immediate("+"), token.immediate("+")),
				),
				prec(
					30,
					seq($._expression, token.immediate("-"), token.immediate("-")),
				),
				prec(20, seq("+", token.immediate("+"), $._expression)),
				prec(20, seq("-", token.immediate("-"), $._expression)),
			),

		return_statement: ($) =>
			prec.right(20, seq("вернути", optional($._expression))),

		parameter_list: ($) =>
			seq(
				"(",
				optional(seq($.parameter_entry, repeat(seq(",", $.parameter_entry)))),
				")",
			),

		parameter_entry: ($) =>
			prec(
				3,
				seq(
					$.identifier,
					optional($.type_annotation),
					optional(seq("=", $.parameter_default_value)),
				),
			),

		parameter_default_value: ($) => $._expression,

		type_annotation: ($) =>
			prec.right(1, seq($._whitespace, choice($.type, $.type_expression))),

		type_expression: ($) =>
			prec.right(1, seq($.type, repeat1(seq(choice("або", "і"), $.type)))),

		type: ($) =>
			prec.right(
				1,
				choice(
					$.builtin_type,
					seq($.identifier, optional($.generic_type_args)),
				),
			),
		builtin_type: ($) =>
			prec.right(
				1,
				choice(
					seq($.aggregate_type, optional($.generic_type_args)),
					$.primitive_type,
				),
			),

		generic_type_args: ($) =>
			seq(
				token.immediate("<"),
				$.generic_type_arg,
				repeat(seq(",", $.generic_type_arg)),
				">",
			),

		generic_type_arg: ($) => choice($.type, $.type_expression),

		aggregate_type: ($) => choice("список", "словник"),
		primitive_type: ($) =>
			choice("текст", "логічне", "число", "обʼєкт", "щось", "ніщо", "пусто"),

		generic_type_params: ($) =>
			seq(
				token.immediate("<"),
				$.generic_type_param,
				repeat(seq(",", $.generic_type_param)),
				">",
			),

		generic_type_param: ($) => $.type_identifier,

		type_identifier: ($) => $.identifier,

		function_call: ($) =>
			prec(
				3,
				seq(
					choice($._parenthesized_expression, $.symbol),
					optional($.generic_type_args),
					$.argument_list,
				),
			),

		array_subsripting: ($) =>
			prec(3, seq($._expression, token.immediate("["), $._expression, "]")),

		argument_list: ($) =>
			prec(
				3,
				choice(
					$.dictionary,
					prec(5, seq("(", optional($.expression_sequence), ")")),
				),
			),

		dictionary: ($) =>
			prec(
				4,
				seq(
					"(",
					optional(
						seq($.dictionary_entry, repeat(seq(",", $.dictionary_entry))),
					),
					")",
				),
			),

		dictionary_entry: ($) => prec(3, seq($._expression, "=", $._expression)),

		array: ($) => seq("[", optional($.expression_sequence), "]"),

		expression_sequence: ($) =>
			seq($._expression, repeat(seq(",", $._expression))),

		primitive: ($) => choice($.string, $.boolean, $.number, $.empty),

		symbol: ($) =>
			prec.left(
				2,
				choice(
					seq(optional("субʼєкт"), $.identifier, optional($.type_annotation)),
					seq(choice($.identifier, $.me), repeat1(seq(".", $.property))),
				),
			),

		property: ($) => $.identifier,
		identifier: ($) => /[\p{L}_][\p{L}_ʼ0-9]*/,
		me: ($) => prec(2, "я"),

		string: ($) => choice($.string_line, $.string_multiline),

		inline_language_block: ($) =>
			seq(
				alias($.inline_language_name, $.language_name),
				seq(
					'"""',
					optional(alias($.inline_language_content, $.inline_content)),
					'"""',
				),
			),

		inline_language_name: ($) => choice("js"),

		inline_language_content: ($) =>
			repeat1(
				choice(
					alias(
						$.unescaped_inline_language_fragment,
						$.inline_content_fragment,
					),
					$.escape_sequence,
				),
			),

		unescaped_inline_language_fragment: ($) =>
			token.immediate(/([^"\\]+)|(["]{1,2})/),

		string_line: ($) =>
			seq(
				'"',
				repeat(
					choice(
						alias($.unescaped_string_line_fragment, $.string_fragment),
						$.string_interpolation,
						$.escape_sequence,
					),
				),
				'"',
			),

		string_multiline: ($) =>
			seq(
				'"""',
				repeat(
					choice(
						alias($.unescaped_string_multiline_fragment, $.string_fragment),
						$.string_interpolation,
						$.escape_sequence,
					),
				),
				'"""',
			),

		unescaped_string_line_fragment: ($) =>
			token.immediate(prec(1, /[^"\\\n\r%)(]+/)),
		unescaped_string_multiline_fragment: ($) =>
			token.immediate(prec(1, /[^"\\%)(]+/)),

		string_interpolation: ($) => seq("%(", $._expression, ")"),

		true: ($) => "так",
		false: ($) => "ні",
		boolean: ($) => choice($.true, $.false),

		number: ($) =>
			choice($.number_int, $.number_bin, $.number_hex, $.number_float),
		number_int: ($) => $.decimal,
		number_bin: ($) => seq(/0[дb]/, $.bin),
		number_hex: ($) => seq(/0[шx]/, $.hex),
		number_float: ($) => seq($.decimal, ".", $.decimal),
		hex: ($) => /[0-9абвгґдabcdef]+/,
		decimal: ($) => /[0-9]+/,
		bin: ($) => /[0-1]+/,

		empty: ($) => prec(1, "пусто"),

		line_comment: ($) => token(/;;.*/),
		block_comment: ($) => token(/;\*.*\*;/),
		escape_sequence: ($) =>
			token.immediate(
				seq(
					"\\",
					choice(
						/[^xu0-7]/,
						/[0-7]{1,3}/,
						/x[0-9a-fA-F]{2}/,
						/u[0-9a-fA-F]{4}/,
						/u\{[0-9a-fA-F]+\}/,
						/[\r?][\n\u2028\u2029]/,
					),
				),
			),
		_whitespace: ($) => token.immediate(/ +/),
	},
});
