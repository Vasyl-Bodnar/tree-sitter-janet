#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym__symchars = 1,
  sym__ws = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_nil = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  aux_sym_constant_token1 = 8,
  sym_number = 9,
  sym_keyword = 10,
  anon_sym_AT = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  sym_symbol = 18,
  sym_hex = 19,
  aux_sym_escape_token1 = 20,
  aux_sym_escape_token2 = 21,
  aux_sym_escape_token3 = 22,
  aux_sym_escape_token4 = 23,
  aux_sym_escape_token5 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_bytes_token1 = 26,
  sym_readermac = 27,
  sym_source_file = 28,
  sym_value = 29,
  sym__raw_value = 30,
  sym_comment = 31,
  sym_constant = 32,
  sym_string = 33,
  sym_buffer = 34,
  sym_parray = 35,
  sym_barray = 36,
  sym_mptuple = 37,
  sym_ptuple = 38,
  sym_btuple = 39,
  sym_struct = 40,
  sym_dict = 41,
  sym_escape = 42,
  sym_bytes = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_value_repeat1 = 45,
  aux_sym_value_repeat2 = 46,
  aux_sym_mptuple_repeat1 = 47,
  aux_sym_struct_repeat1 = 48,
  aux_sym_bytes_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__symchars] = "_symchars",
  [sym__ws] = "_ws",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_constant_token1] = "constant_token1",
  [sym_number] = "number",
  [sym_keyword] = "keyword",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_symbol] = "symbol",
  [sym_hex] = "hex",
  [aux_sym_escape_token1] = "escape_token1",
  [aux_sym_escape_token2] = "escape_token2",
  [aux_sym_escape_token3] = "escape_token3",
  [aux_sym_escape_token4] = "escape_token4",
  [aux_sym_escape_token5] = "escape_token5",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_bytes_token1] = "bytes_token1",
  [sym_readermac] = "readermac",
  [sym_source_file] = "source_file",
  [sym_value] = "value",
  [sym__raw_value] = "_raw_value",
  [sym_comment] = "comment",
  [sym_constant] = "constant",
  [sym_string] = "string",
  [sym_buffer] = "buffer",
  [sym_parray] = "parray",
  [sym_barray] = "barray",
  [sym_mptuple] = "mptuple",
  [sym_ptuple] = "ptuple",
  [sym_btuple] = "btuple",
  [sym_struct] = "struct",
  [sym_dict] = "dict",
  [sym_escape] = "escape",
  [sym_bytes] = "bytes",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_value_repeat2] = "value_repeat2",
  [aux_sym_mptuple_repeat1] = "mptuple_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_bytes_repeat1] = "bytes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__symchars] = sym__symchars,
  [sym__ws] = sym__ws,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [sym_number] = sym_number,
  [sym_keyword] = sym_keyword,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_symbol] = sym_symbol,
  [sym_hex] = sym_hex,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [aux_sym_escape_token2] = aux_sym_escape_token2,
  [aux_sym_escape_token3] = aux_sym_escape_token3,
  [aux_sym_escape_token4] = aux_sym_escape_token4,
  [aux_sym_escape_token5] = aux_sym_escape_token5,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_bytes_token1] = aux_sym_bytes_token1,
  [sym_readermac] = sym_readermac,
  [sym_source_file] = sym_source_file,
  [sym_value] = sym_value,
  [sym__raw_value] = sym__raw_value,
  [sym_comment] = sym_comment,
  [sym_constant] = sym_constant,
  [sym_string] = sym_string,
  [sym_buffer] = sym_buffer,
  [sym_parray] = sym_parray,
  [sym_barray] = sym_barray,
  [sym_mptuple] = sym_mptuple,
  [sym_ptuple] = sym_ptuple,
  [sym_btuple] = sym_btuple,
  [sym_struct] = sym_struct,
  [sym_dict] = sym_dict,
  [sym_escape] = sym_escape,
  [sym_bytes] = sym_bytes,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_value_repeat2] = aux_sym_value_repeat2,
  [aux_sym_mptuple_repeat1] = aux_sym_mptuple_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_bytes_repeat1] = aux_sym_bytes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__symchars] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_readermac] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_value] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_parray] = {
    .visible = true,
    .named = true,
  },
  [sym_barray] = {
    .visible = true,
    .named = true,
  },
  [sym_mptuple] = {
    .visible = true,
    .named = true,
  },
  [sym_ptuple] = {
    .visible = true,
    .named = true,
  },
  [sym_btuple] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mptuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_exp = 1,
  field_mac = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_exp] = "exp",
  [field_mac] = "mac",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mac, 0},
  [1] =
    {field_mac, 0, .inherited = true},
  [2] =
    {field_mac, 0, .inherited = true},
    {field_mac, 1, .inherited = true},
  [4] =
    {field_exp, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 4,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 16,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 43,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        0x07, 44,
        '"', 45,
        '#', 11,
        '(', 22,
        ')', 23,
        ',', 41,
        ':', 20,
        '@', 21,
        '[', 24,
        '\\', 43,
        ']', 25,
        '{', 26,
        '}', 27,
        '\'', 47,
        ';', 47,
        '|', 47,
        '~', 47,
        '0', 41,
        'b', 41,
        'e', 41,
        'f', 41,
        '?', 41,
        'n', 41,
        'r', 41,
        't', 41,
        'v', 41,
        'z', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(41);
      if (('!' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'y') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0x07, 44,
        '0', 44,
        '?', 44,
        'b', 44,
        'e', 44,
        'f', 44,
        'n', 44,
        'r', 44,
        't', 44,
        'v', 44,
        'z', 44,
      );
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(48);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 45,
        '#', 11,
        '(', 22,
        ')', 23,
        ',', 41,
        '.', 39,
        ':', 20,
        '@', 21,
        '[', 24,
        'f', 29,
        'n', 32,
        't', 35,
        '{', 26,
        '+', 28,
        '-', 28,
        '\'', 16,
        ';', 16,
        '|', 16,
        '~', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 45,
        '#', 11,
        '(', 22,
        ',', 41,
        '.', 39,
        ':', 20,
        '@', 21,
        '[', 24,
        ']', 25,
        'f', 29,
        'n', 32,
        't', 35,
        '{', 26,
        '+', 28,
        '-', 28,
        '\'', 16,
        ';', 16,
        '|', 16,
        '~', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 45,
        '#', 11,
        '(', 22,
        ',', 41,
        '.', 39,
        ':', 20,
        '@', 21,
        '[', 24,
        'f', 29,
        'n', 32,
        't', 35,
        '{', 26,
        '}', 27,
        '+', 28,
        '-', 28,
        '\'', 16,
        ';', 16,
        '|', 16,
        '~', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '\'' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 45,
        '#', 11,
        '(', 22,
        ')', 23,
        ',', 41,
        '.', 39,
        ':', 20,
        '@', 21,
        '[', 24,
        ']', 25,
        'f', 29,
        'n', 32,
        't', 35,
        '{', 26,
        '}', 27,
        '+', 28,
        '-', 28,
        '\'', 47,
        ';', 47,
        '|', 47,
        '~', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 45,
        '#', 11,
        '(', 22,
        ',', 41,
        '.', 39,
        ':', 20,
        '@', 21,
        '[', 24,
        'f', 29,
        'n', 32,
        't', 35,
        '{', 26,
        '+', 28,
        '-', 28,
        '\'', 16,
        ';', 16,
        '|', 16,
        '~', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__ws);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x80 <= lookahead && lookahead <= 0xff)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_escape_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_bytes_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_readermac);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__symchars);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'U') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(2);
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_escape_token5);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_escape_token4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_escape_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__symchars] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [aux_sym_escape_token1] = ACTIONS(1),
    [aux_sym_escape_token2] = ACTIONS(1),
    [aux_sym_escape_token3] = ACTIONS(1),
    [aux_sym_escape_token4] = ACTIONS(1),
    [aux_sym_escape_token5] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_readermac] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym_value] = STATE(8),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_value_repeat1] = STATE(17),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ws] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [2] = {
    [sym_value] = STATE(6),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_value_repeat1] = STATE(16),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [3] = {
    [sym_value] = STATE(15),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(19),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(3),
    [sym__ws] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_nil] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_number] = ACTIONS(42),
    [sym_keyword] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(60),
    [sym_symbol] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_readermac] = ACTIONS(65),
  },
  [4] = {
    [sym_value] = STATE(4),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_value_repeat1] = STATE(16),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_nil] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [sym_number] = ACTIONS(77),
    [sym_keyword] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_symbol] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_readermac] = ACTIONS(100),
  },
  [5] = {
    [sym_value] = STATE(11),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_value_repeat1] = STATE(20),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [6] = {
    [sym_value] = STATE(4),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_value_repeat1] = STATE(16),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [7] = {
    [sym_value] = STATE(15),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(19),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(14),
    [sym__ws] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [8] = {
    [sym_value] = STATE(12),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_value_repeat1] = STATE(17),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym__ws] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [9] = {
    [sym_value] = STATE(9),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_value_repeat1] = STATE(20),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_nil] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [sym_number] = ACTIONS(77),
    [sym_keyword] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_symbol] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_readermac] = ACTIONS(100),
  },
  [10] = {
    [sym_value] = STATE(13),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_value_repeat1] = STATE(20),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [11] = {
    [sym_value] = STATE(9),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_value_repeat1] = STATE(20),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [12] = {
    [sym_value] = STATE(12),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_value_repeat1] = STATE(17),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__ws] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_nil] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [sym_number] = ACTIONS(77),
    [sym_keyword] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_symbol] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_readermac] = ACTIONS(100),
  },
  [13] = {
    [sym_value] = STATE(9),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_value_repeat1] = STATE(20),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [14] = {
    [sym_value] = STATE(15),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(19),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [aux_sym_struct_repeat1] = STATE(3),
    [sym__ws] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [15] = {
    [sym_value] = STATE(47),
    [sym__raw_value] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_constant] = STATE(25),
    [sym_string] = STATE(25),
    [sym_buffer] = STATE(25),
    [sym_parray] = STATE(25),
    [sym_barray] = STATE(25),
    [sym_mptuple] = STATE(25),
    [sym_ptuple] = STATE(25),
    [sym_btuple] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_dict] = STATE(25),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(18),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_number] = ACTIONS(11),
    [sym_keyword] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [16] = {
    [sym__raw_value] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_string] = STATE(24),
    [sym_buffer] = STATE(24),
    [sym_parray] = STATE(24),
    [sym_barray] = STATE(24),
    [sym_mptuple] = STATE(24),
    [sym_ptuple] = STATE(24),
    [sym_btuple] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(48),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_number] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [17] = {
    [sym__raw_value] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_string] = STATE(24),
    [sym_buffer] = STATE(24),
    [sym_parray] = STATE(24),
    [sym_barray] = STATE(24),
    [sym_mptuple] = STATE(24),
    [sym_ptuple] = STATE(24),
    [sym_btuple] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(48),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_number] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [18] = {
    [sym__raw_value] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_string] = STATE(24),
    [sym_buffer] = STATE(24),
    [sym_parray] = STATE(24),
    [sym_barray] = STATE(24),
    [sym_mptuple] = STATE(24),
    [sym_ptuple] = STATE(24),
    [sym_btuple] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(48),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [sym_number] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [19] = {
    [sym__raw_value] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_string] = STATE(24),
    [sym_buffer] = STATE(24),
    [sym_parray] = STATE(24),
    [sym_barray] = STATE(24),
    [sym_mptuple] = STATE(24),
    [sym_ptuple] = STATE(24),
    [sym_btuple] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(48),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_number] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
  [20] = {
    [sym__raw_value] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_string] = STATE(24),
    [sym_buffer] = STATE(24),
    [sym_parray] = STATE(24),
    [sym_barray] = STATE(24),
    [sym_mptuple] = STATE(24),
    [sym_ptuple] = STATE(24),
    [sym_btuple] = STATE(24),
    [sym_struct] = STATE(24),
    [sym_dict] = STATE(24),
    [sym_bytes] = STATE(34),
    [aux_sym_value_repeat1] = STATE(48),
    [aux_sym_mptuple_repeat1] = STATE(58),
    [sym__ws] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_number] = ACTIONS(145),
    [sym_keyword] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym_symbol] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_readermac] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(151), 1,
      sym__ws,
    STATE(21), 1,
      aux_sym_value_repeat2,
    ACTIONS(154), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [28] = 4,
    ACTIONS(158), 1,
      sym__ws,
    STATE(21), 1,
      aux_sym_value_repeat2,
    ACTIONS(161), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [56] = 4,
    ACTIONS(165), 1,
      sym__ws,
    STATE(21), 1,
      aux_sym_value_repeat2,
    ACTIONS(168), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [84] = 4,
    ACTIONS(172), 1,
      sym__ws,
    STATE(23), 1,
      aux_sym_value_repeat2,
    ACTIONS(175), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [112] = 4,
    ACTIONS(179), 1,
      sym__ws,
    STATE(22), 1,
      aux_sym_value_repeat2,
    ACTIONS(182), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [140] = 2,
    ACTIONS(186), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [163] = 2,
    ACTIONS(190), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [186] = 2,
    ACTIONS(194), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [209] = 2,
    ACTIONS(198), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [232] = 2,
    ACTIONS(202), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(200), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [255] = 2,
    ACTIONS(206), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(204), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [278] = 2,
    ACTIONS(210), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(208), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [301] = 2,
    ACTIONS(214), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(212), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [324] = 2,
    ACTIONS(218), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(216), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [347] = 2,
    ACTIONS(222), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [370] = 2,
    ACTIONS(226), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(224), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [393] = 2,
    ACTIONS(230), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(228), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [416] = 2,
    ACTIONS(234), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(232), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [439] = 2,
    ACTIONS(238), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [462] = 2,
    ACTIONS(242), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(240), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [485] = 2,
    ACTIONS(246), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(244), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [508] = 2,
    ACTIONS(250), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(248), 11,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [531] = 3,
    ACTIONS(256), 1,
      aux_sym_constant_token1,
    ACTIONS(254), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [554] = 3,
    ACTIONS(256), 1,
      aux_sym_constant_token1,
    ACTIONS(254), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(252), 8,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [577] = 3,
    ACTIONS(256), 1,
      aux_sym_constant_token1,
    ACTIONS(254), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(252), 8,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [600] = 3,
    ACTIONS(256), 1,
      aux_sym_constant_token1,
    ACTIONS(254), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(252), 8,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [623] = 2,
    ACTIONS(258), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
    ACTIONS(60), 8,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [643] = 5,
    ACTIONS(260), 1,
      sym__ws,
    ACTIONS(267), 1,
      sym_readermac,
    STATE(48), 1,
      aux_sym_value_repeat1,
    ACTIONS(263), 6,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(265), 6,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
  [669] = 3,
    ACTIONS(256), 1,
      aux_sym_constant_token1,
    ACTIONS(252), 7,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(254), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
  [691] = 2,
    ACTIONS(270), 7,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(272), 7,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
      sym_readermac,
  [710] = 4,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      sym_readermac,
    ACTIONS(270), 6,
      sym__ws,
      anon_sym_POUND,
      sym_keyword,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(272), 6,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_AT,
      sym_symbol,
  [733] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_struct,
    STATE(29), 1,
      sym_bytes,
    STATE(36), 1,
      sym_btuple,
    STATE(38), 1,
      sym_ptuple,
  [758] = 4,
    ACTIONS(280), 1,
      aux_sym_escape_token1,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      aux_sym_bytes_token1,
    STATE(54), 2,
      sym_escape,
      aux_sym_bytes_repeat1,
  [772] = 4,
    ACTIONS(286), 1,
      aux_sym_escape_token1,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_bytes_token1,
    STATE(54), 2,
      sym_escape,
      aux_sym_bytes_repeat1,
  [786] = 4,
    ACTIONS(280), 1,
      aux_sym_escape_token1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      aux_sym_bytes_token1,
    STATE(53), 2,
      sym_escape,
      aux_sym_bytes_repeat1,
  [800] = 4,
    ACTIONS(298), 1,
      aux_sym_escape_token2,
    ACTIONS(300), 1,
      aux_sym_escape_token3,
    ACTIONS(302), 1,
      aux_sym_escape_token4,
    ACTIONS(304), 1,
      aux_sym_escape_token5,
  [813] = 2,
    ACTIONS(308), 1,
      aux_sym_bytes_token1,
    ACTIONS(306), 2,
      aux_sym_escape_token1,
      anon_sym_DQUOTE,
  [821] = 3,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      sym_readermac,
    STATE(60), 1,
      aux_sym_mptuple_repeat1,
  [831] = 2,
    ACTIONS(316), 1,
      aux_sym_bytes_token1,
    ACTIONS(314), 2,
      aux_sym_escape_token1,
      anon_sym_DQUOTE,
  [839] = 3,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      sym_readermac,
    STATE(60), 1,
      aux_sym_mptuple_repeat1,
  [849] = 2,
    ACTIONS(325), 1,
      aux_sym_bytes_token1,
    ACTIONS(323), 2,
      aux_sym_escape_token1,
      anon_sym_DQUOTE,
  [857] = 2,
    ACTIONS(329), 1,
      aux_sym_bytes_token1,
    ACTIONS(327), 2,
      aux_sym_escape_token1,
      anon_sym_DQUOTE,
  [865] = 1,
    ACTIONS(331), 1,
      sym_hex,
  [869] = 1,
    ACTIONS(333), 1,
      sym_hex,
  [873] = 1,
    ACTIONS(335), 1,
      sym_hex,
  [877] = 1,
    ACTIONS(337), 1,
      sym_hex,
  [881] = 1,
    ACTIONS(339), 1,
      sym_hex,
  [885] = 1,
    ACTIONS(341), 1,
      aux_sym_comment_token1,
  [889] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [893] = 1,
    ACTIONS(345), 1,
      sym_hex,
  [897] = 1,
    ACTIONS(347), 1,
      sym_hex,
  [901] = 1,
    ACTIONS(349), 1,
      sym_hex,
  [905] = 1,
    ACTIONS(351), 1,
      sym_hex,
  [909] = 1,
    ACTIONS(353), 1,
      sym_hex,
  [913] = 1,
    ACTIONS(355), 1,
      sym_hex,
  [917] = 1,
    ACTIONS(357), 1,
      sym_hex,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 28,
  [SMALL_STATE(23)] = 56,
  [SMALL_STATE(24)] = 84,
  [SMALL_STATE(25)] = 112,
  [SMALL_STATE(26)] = 140,
  [SMALL_STATE(27)] = 163,
  [SMALL_STATE(28)] = 186,
  [SMALL_STATE(29)] = 209,
  [SMALL_STATE(30)] = 232,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 278,
  [SMALL_STATE(33)] = 301,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 347,
  [SMALL_STATE(36)] = 370,
  [SMALL_STATE(37)] = 393,
  [SMALL_STATE(38)] = 416,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 462,
  [SMALL_STATE(41)] = 485,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 531,
  [SMALL_STATE(44)] = 554,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 600,
  [SMALL_STATE(47)] = 623,
  [SMALL_STATE(48)] = 643,
  [SMALL_STATE(49)] = 669,
  [SMALL_STATE(50)] = 691,
  [SMALL_STATE(51)] = 710,
  [SMALL_STATE(52)] = 733,
  [SMALL_STATE(53)] = 758,
  [SMALL_STATE(54)] = 772,
  [SMALL_STATE(55)] = 786,
  [SMALL_STATE(56)] = 800,
  [SMALL_STATE(57)] = 813,
  [SMALL_STATE(58)] = 821,
  [SMALL_STATE(59)] = 831,
  [SMALL_STATE(60)] = 839,
  [SMALL_STATE(61)] = 849,
  [SMALL_STATE(62)] = 857,
  [SMALL_STATE(63)] = 865,
  [SMALL_STATE(64)] = 869,
  [SMALL_STATE(65)] = 873,
  [SMALL_STATE(66)] = 877,
  [SMALL_STATE(67)] = 881,
  [SMALL_STATE(68)] = 885,
  [SMALL_STATE(69)] = 889,
  [SMALL_STATE(70)] = 893,
  [SMALL_STATE(71)] = 897,
  [SMALL_STATE(72)] = 901,
  [SMALL_STATE(73)] = 905,
  [SMALL_STATE(74)] = 909,
  [SMALL_STATE(75)] = 913,
  [SMALL_STATE(76)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat2, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat2, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value, 2, 0, 0), SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value, 3, 0, 2), SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value, 2, 0, 2), SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value, 1, 0, 0), SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_btuple, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_btuple, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptuple, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptuple, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_btuple, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_btuple, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptuple, 3, 0, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptuple, 3, 0, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_barray, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_barray, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parray, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parray, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mptuple, 4, 0, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mptuple, 4, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mptuple, 3, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mptuple, 3, 0, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 3), SHIFT_REPEAT(48),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 3),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 3), SHIFT_REPEAT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 1, 0, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 1, 0, 1),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 1, 0, 1), REDUCE(aux_sym_mptuple_repeat1, 1, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 1, 0, 1), REDUCE(aux_sym_mptuple_repeat1, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bytes_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bytes_repeat1, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bytes_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 6, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 6, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mptuple_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mptuple_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 8, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 8, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_janet(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__symchars,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
