(identifier) @variable

(line_comment) @comment
(comment) @comment

(type_value) @type
(type_value_item_builtin) @type.builtin
[
    "дія"
] @keyword.function

[
    "взяти"
] @keyword.import

[
    "не"
    "більше"
    "менше"
    "містить"
    "рівно"
    "є"
    "і"
    "або"
] @keyword.operator

[
    "структура"
    "макет"
] @keyword.type

[
    "вернути"
] @keyword.return

[
    "тривала"
    "чекати"
] @keyword.coroutine

[
    "спец"
] @keyword.modifier

[
    "перебрати"
    "поки"
] @keyword.repeat

[
    "спробувати"
    "зловити"
    "впасти"
] @keyword.exception

[
    "якщо"
    "інакше"
] @keyword.conditional

(ternary
    "?" @keyword.conditional.ternary
    ":" @keyword.conditional.ternary)

[
    "кінець"
    "модуль"
    "субʼєкт"
    "як"
    "дати"
    "пак"
    "біб"
] @keyword


(structure
    s_name: (identifier) @type)
(structure
    s_name: (identifier) @type
    s_parent: (super_identifiers_chain) @type)
(structure_element
    sp_name: (identifier) @property)

(mockup_structure
    ms_name: (identifier) @type)
(mockup_structure
    ms_name: (identifier) @type
    ms_parent: (super_identifiers_chain) @type)
(mockup_structure_body_element
    sp_name: (identifier) @property)

(param
    p_name: (identifier) @property)
(dictionary_arg
    da_name_id: (identifier) @property)
(dictionary_arg
    da_name_string: (string_line) @property)

(mockup_diia
    md_structure: (identifier) @type
    md_name: (identifier) @function.method)
(mockup_diia
    md_name: (identifier) @function)
(diia
    d_structure: (identifier) @type
    d_name: (identifier) @function.method)
(diia
    d_name: (identifier) @function)

(generics
    (identifier) @type.definition)

(call
    c_value: (atom
               (chain
                 c_right: (identifier) @function.method.call)))
(call
    c_value: (atom
               (identifier) @function.call))

(eval) @string.special
(string) @string
(number) @number
(boolean) @boolean
(empty) @constant.builtin

[
    "!"
    "-"
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
    "="
    "=="
] @operator

(dictionary_arg
    da_name_string: (string_line) @string.special.symbol)

(escaped_quote) @string.escape

(string_interpolation_start) @punctuation.special
(string_interpolation_end) @punctuation.special

[
    (true)
    (false)
    (empty)
] @constant.builtin

[
    (me)
    (parent)
] @variable.builtin

[
    "("
    ")"
    "["
    "]"
] @punctuation.bracket

[
    "."
    ","
] @punctuation.delimiter
