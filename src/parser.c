#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_with_SLASHslashes = 1,
  sym_with_DOTdots = 2,
  sym_withspaces = 3,
  sym_ = 4,
  sym_cursed_program = 5,
  aux_sym_cursed_program_repeat1 = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_with_SLASHslashes] = "with/slashes",
  [sym_with_DOTdots] = "with.dots",
  [sym_withspaces] = "with spaces",
  [sym_] = "✨",
  [sym_cursed_program] = "cursed_program",
  [aux_sym_cursed_program_repeat1] = "cursed_program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_with_SLASHslashes] = sym_with_SLASHslashes,
  [sym_with_DOTdots] = sym_with_DOTdots,
  [sym_withspaces] = sym_withspaces,
  [sym_] = sym_,
  [sym_cursed_program] = sym_cursed_program,
  [aux_sym_cursed_program_repeat1] = aux_sym_cursed_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_with_SLASHslashes] = {
    .visible = true,
    .named = true,
  },
  [sym_with_DOTdots] = {
    .visible = true,
    .named = true,
  },
  [sym_withspaces] = {
    .visible = true,
    .named = true,
  },
  [sym_] = {
    .visible = true,
    .named = true,
  },
  [sym_cursed_program] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cursed_program_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 10024) ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 9989) ADVANCE(6);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_with_SLASHslashes);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_with_DOTdots);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_withspaces);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_with_SLASHslashes] = ACTIONS(1),
    [sym_with_DOTdots] = ACTIONS(1),
    [sym_withspaces] = ACTIONS(1),
    [sym_] = ACTIONS(1),
  },
  [1] = {
    [sym_cursed_program] = STATE(4),
    [aux_sym_cursed_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_with_SLASHslashes] = ACTIONS(5),
    [sym_with_DOTdots] = ACTIONS(5),
    [sym_withspaces] = ACTIONS(5),
    [sym_] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_cursed_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_with_SLASHslashes] = ACTIONS(9),
    [sym_with_DOTdots] = ACTIONS(9),
    [sym_withspaces] = ACTIONS(9),
    [sym_] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_cursed_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_with_SLASHslashes] = ACTIONS(13),
    [sym_with_DOTdots] = ACTIONS(13),
    [sym_withspaces] = ACTIONS(13),
    [sym_] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursed_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursed_program, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cursed_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cursed_program_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_GRAMMAR_NAME(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
