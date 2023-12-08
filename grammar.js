module.exports = grammar({
  name: "GRAMMAR_NAME",
  rules: {
    // see https://tree-sitter.github.io/tree-sitter/creating-parsers#the-grammar-dsl
    cursed_program: ($) => repeat(
      choice($["with/slashes"], $["with.dots"], $["with spaces"], $["✨"])
    ),
    "with/slashes": ($) => "/",
    "with.dots": ($) => ".",
    "with spaces": ($) => "_",
    "✨": ($) => "✨✅",
  },
});
