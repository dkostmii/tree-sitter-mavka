(line_comment) @comment
(block_comment) @comment

(type) @type
(primitive_type) @type.builtin
[
    "структура"
    "я"
    "модуль"
    "дати"
    "взяти"
    "пак"
    "якщо"
    "інакше"
    "і"
    "або"
    "більше"
    "не більше"
    "менше"
    "не менше"
    "не рівно"
    "рівно"
    "є"
    "не є"
    "містить"
    "не містить"
    "дія"
    "вернути"
    "кінець"
    "перебрати"
    "як"
    "впасти"
    "чекати"
] @keyword


(structure_definition (identifier) @type)
(structure_field (identifier) @property)

(parameter_entry (identifier) @property)
(dictionary_entry (identifier) @property)

(diia_definition (identifier) @type.builtin (identifier) @function)
(diia_definition (identifier) @function)

(function_call (symbol (identifier) @constant (property (identifier) @function)))
(function_call (symbol (identifier) @function))

(symbol (identifier) @constant (property) @property)

(primitive) @number
(string) @string
(cloud_pak_name) @constant.builtin
(cloud_pak_version) @function
(cloud_pak_link "/" @string) @string

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

(string_interpolation ")" @string.special) @string.special
[
    "("
    ")"
] @function

[
    "["
    "]"
    "\\\""
] @property

[
    "="
    "=="
] @type

(property (identifier) @property) @property
(identifier) @constant