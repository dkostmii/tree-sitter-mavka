(eval
  e_value: (eval_value) @injection.content
    (#set! injection.include-children)
    (#set! injection.language "javascript"))

(eval
    e_value: (eval_value_multiline) @injection.content
    (#set! injection.include-children)
    (#set! injection.language "javascript"))
