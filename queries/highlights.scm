(line_comment) @comment
(block_comment) @comment

(type) @type
(builtin_type) @type.builtin
[
    "або"
    "біб"
    "більше"
    "вернути"
    "взяти"
    "впасти"
    "дати"
    "дія"
    "зловити"
    "кінець"
    "менше"
    "модуль"
    "містить"
    "не більше"
    "не менше"
    "не містить"
    "не рівно"
    "не є"
    "пак"
    "перебрати"
    "поки"
    "рівно"
    "спец"
    "спробувати"
    "структура"
    "субʼєкт"
    "тривала"
    "чекати"
    "я"
    "як"
    "якщо"
    "є"
    "і"
    "інакше"
] @keyword


(structure_definition (identifier) @type)
(structure_field (identifier) @property)

(parameter_entry (identifier) @property)
(dictionary_entry (symbol) @property)

(diia_definition (identifier) @type.builtin (identifier) @function)
(diia_definition (identifier) @function)

(function_call (symbol (identifier) @variable (property) @function))
(function_call (symbol (identifier) @function))

(symbol (identifier) @constant (property) @property)

(string) @string
(number) @number

(binary_expression "-" @operator)
(assign_statement "-" @operator "=")

[
    "!"
    "-"
] @property

[
    "+"
    "*"
    "**"
    "/"
    "//"
    "%"
    "^"
    "|"
    "&"
    "<<"
    ">>"
    "<"
    ">"
] @operator

(escape_sequence) @escape

(string_interpolation ")" @string.special) @string.special
[
    "("
    ")"
] @function

[
    "["
    "]"
] @property

[
    "="
    "=="
] @type

[
    (true)
    (false)
    (empty)
] @constant.builtin

(property) @property
(identifier) @variable
