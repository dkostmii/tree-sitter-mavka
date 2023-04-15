# tree-sitter-mavka

Цей репозиторій містить проект, що генерує парсер [tree-sitter](https://github.com/tree-sitter/tree-sitter)
для [Мавки](https://xn--80aaf6ah.xn--j1amh/).

Проект знаходиться у стадії розробки.

## Як запустити?

Аби мати змогу генерувати парсер, необхідно встановити
NodeJS, і мати компілятор C (підходить як і MSVC, що присутній
у середовищі розробки Visual Studio, так і GCC).

Спершу необхідно встановити залежності проекту за допомогою
пакетного менеджера NPM:

```bash
npm install
```

Головним файлом проекту є `grammar.js`: саме там задаються
правила мови, на основі котрих парсер будуватиме конкретне
дерево синтаксису у форматі S-виразів, на кшталт мови Lisp.

Після кожної зміни цього файлу, потрібно згенерувати новий парсер.

У проекті налаштовані наступні NPM скрипти:

- `generate` - для генерування парсера у вигляді коду C
- `test` - для тестування парсера на основі тестів у `test/corpus/`

Також можна спробувати парсер використовуючи файли
з прикладами у `examples/`.

## Документація

- [Tree-sitter | Introduction](https://tree-sitter.github.io/tree-sitter/)

