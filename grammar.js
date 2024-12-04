/**
 * @file Tree-sitter parser for Janet scripting language
 * @author Vasyl Bodnar <vasyl_bodnar@outlook.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "janet",

  extras: $ => [],

  conflicts: $ => [[$.mptuple, $.value], [$.value], [$.mvalue]],

  word: $ => $._symchars,

  rules: {
    source_file: $ => repeat($.value),
    value: $ => seq(repeat(choice($._ws, field("mac", $.readermac))), $._raw_value, repeat($._ws)), // prec
    mvalue: $ => seq(repeat(choice($._ws, field("mac", $.readermac))), $._mraw_value, repeat($._ws)), // prec
    _raw_value: $ => choice($.comment, $.constant, $.number, $.keyword, $.string, $.buffer, /*snip*/ 
                            $.parray, $.barray, $.mptuple, $.ptuple, $.btuple, $.struct, $.dict, $.symbol), // $.long_string, $.long_buffer
    _mraw_value: $ => choice($.comment, $.constant, $.number, $.keyword, $.string, $.buffer, /*snip*/ 
                            $.parray, $.barray, $.mptuple, alias($.ptuple, $.mptuple), $.btuple, $.struct, $.dict, $.symbol), // $.long_string, $.long_buffer
    _ws: $ => /[ \t\r\f\n\v]/,
    comment: $ => seq("#", /[^\n]*/),
    constant: $ => seq(choice("nil", "true", "false"), optional(/[^0-9A-Za-z\x80-\xFF!$%&*+-./:<?=>@^_]/)),
    number: $ => /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,
    keyword: $ => /:[0-9A-Za-z\x80-\xFF!$%&*+-./:<?=>@^_]*/, // prec
    string: $ => $.bytes,
    buffer: $ => seq("@", $.bytes),
    // long_bytes: $ => ,
    // long_string: $ => $.long_bytes,
    // long_buffer: $ => seq("@", $.long_bytes),
    parray: $ => seq("@", $.ptuple),
    barray: $ => seq("@", $.btuple),
    mptuple: $ => seq(field("mac", repeat1($.readermac)), "(", repeat($.mvalue), ")"),
    ptuple: $ => seq("(", field("exp", repeat($.value)), ")"),
    btuple: $ => seq("[", repeat($.value), "]"),
    struct: $ => seq("{", repeat(seq($.value, $.value)), "}"),
    dict: $ => seq("@", $.struct),
    symbol: $ => /[0-9A-Za-z\x80-\xFF!$%&*+-./:<?=>@^_]+/,
    hex: $ => /[0-9A-Fa-f]/,
    escape: $ => seq(/\\/, choice(/[0?\abefnrtvz]/, seq(/x/, $.hex, $.hex), seq(/u/, $.hex, $.hex, $.hex, $.hex), seq(/U/, $.hex, $.hex, $.hex, $.hex, $.hex, $.hex))),
    bytes: $ => seq("\"", repeat(choice($.escape, /[^"]/)), "\""),
    readermac: $ => /[';~,|]/,
    _symchars: $ => /[0-9A-Za-z\x80-\xFF!$%&*+-./:<?=>@^_]/,
  }
});
