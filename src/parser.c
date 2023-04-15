#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_2 = 5,
  anon_sym_3 = 6,
  anon_sym_4 = 7,
  anon_sym_5 = 8,
  anon_sym_6 = 9,
  anon_sym_7 = 10,
  anon_sym_8 = 11,
  anon_sym_9 = 12,
  anon_sym_10 = 13,
  anon_sym_EQ = 14,
  anon_sym_11 = 15,
  anon_sym_12 = 16,
  anon_sym_PLUS_EQ = 17,
  anon_sym_DASH_EQ = 18,
  anon_sym_STAR_EQ = 19,
  anon_sym_SLASH_EQ = 20,
  sym_identifier = 21,
  sym_number = 22,
  sym_string = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_function_definition = 26,
  sym_parameter_list = 27,
  sym__type = 28,
  sym_function_call = 29,
  sym_argument_list = 30,
  sym_function_block = 31,
  sym__statement = 32,
  sym_assign_statement = 33,
  sym_return_statement = 34,
  sym__expression = 35,
  sym__assignment_operator = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_parameter_list_repeat1 = 38,
  aux_sym_argument_list_repeat1 = 39,
  aux_sym_function_block_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "дія",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_2] = "текст",
  [anon_sym_3] = "логічне",
  [anon_sym_4] = "число",
  [anon_sym_5] = "список",
  [anon_sym_6] = "словник",
  [anon_sym_7] = "обʼєкт",
  [anon_sym_8] = "щось",
  [anon_sym_9] = "ніщо",
  [anon_sym_10] = "пусто",
  [anon_sym_EQ] = "=",
  [anon_sym_11] = "кінець",
  [anon_sym_12] = "вернути",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_function_block] = "function_block",
  [sym__statement] = "_statement",
  [sym_assign_statement] = "assign_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__assignment_operator] = "_assignment_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_function_block_repeat1] = "function_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_function_block] = sym_function_block,
  [sym__statement] = sym__statement,
  [sym_assign_statement] = sym_assign_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__assignment_operator] = sym__assignment_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_function_block_repeat1] = aux_sym_function_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assign_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_operator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_block_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 13,
  [34] = 15,
  [35] = 17,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 18,
  [41] = 24,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 14,
  [48] = 45,
  [49] = 49,
  [50] = 12,
  [51] = 51,
  [52] = 29,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 59,
  [64] = 54,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 1074) ADVANCE(37);
      if (lookahead == 1076) ADVANCE(81);
      if (lookahead == 1082) ADVANCE(82);
      if (lookahead == 1083) ADVANCE(55);
      if (lookahead == 1085) ADVANCE(83);
      if (lookahead == 1086) ADVANCE(34);
      if (lookahead == 1087) ADVANCE(72);
      if (lookahead == 1089) ADVANCE(49);
      if (lookahead == 1090) ADVANCE(38);
      if (lookahead == 1095) ADVANCE(42);
      if (lookahead == 1097) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 1074) ADVANCE(37);
      if (lookahead == 1082) ADVANCE(82);
      if (lookahead == 1083) ADVANCE(55);
      if (lookahead == 1085) ADVANCE(83);
      if (lookahead == 1086) ADVANCE(34);
      if (lookahead == 1087) ADVANCE(72);
      if (lookahead == 1089) ADVANCE(49);
      if (lookahead == 1090) ADVANCE(38);
      if (lookahead == 1095) ADVANCE(42);
      if (lookahead == 1097) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == 1074) ADVANCE(37);
      if (lookahead == 1082) ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == 1076) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 1076) ADVANCE(81);
      if (lookahead == 1083) ADVANCE(55);
      if (lookahead == 1085) ADVANCE(83);
      if (lookahead == 1086) ADVANCE(34);
      if (lookahead == 1087) ADVANCE(72);
      if (lookahead == 1089) ADVANCE(49);
      if (lookahead == 1090) ADVANCE(38);
      if (lookahead == 1095) ADVANCE(42);
      if (lookahead == 1097) ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_3);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_4);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_5);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_6);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_7);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_8);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_9);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_10);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_11);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_12);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 700) ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1073) ADVANCE(33);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1074) ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1075) ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1077) ADVANCE(62);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1077) ADVANCE(48);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1077) ADVANCE(74);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1077) ADVANCE(18);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1080) ADVANCE(28);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1080) ADVANCE(64);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1080) ADVANCE(67);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1080) ADVANCE(46);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1082) ADVANCE(20);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1082) ADVANCE(21);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1082) ADVANCE(69);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1082) ADVANCE(66);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1083) ADVANCE(56);
      if (lookahead == 1087) ADVANCE(43);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1083) ADVANCE(59);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1085) ADVANCE(73);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1085) ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1085) ADVANCE(39);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1085) ADVANCE(40);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(36);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(35);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(24);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(25);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(19);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(65);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1086) ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1088) ADVANCE(51);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1089) ADVANCE(71);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1089) ADVANCE(50);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1089) ADVANCE(77);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1089) ADVANCE(68);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1089) ADVANCE(61);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1090) ADVANCE(17);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1090) ADVANCE(22);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1090) ADVANCE(41);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1090) ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1091) ADVANCE(63);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1091) ADVANCE(70);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1094) ADVANCE(78);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1095) ADVANCE(54);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1097) ADVANCE(57);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1100) ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1100) ADVANCE(27);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1103) ADVANCE(13);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1108) ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1110) ADVANCE(79);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1110) ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1110) ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 1110) ADVANCE(75);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_assign_statement] = STATE(7),
    [sym__expression] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_string] = ACTIONS(9),
  },
  [2] = {
    [sym__type] = STATE(21),
    [sym_argument_list] = STATE(50),
    [sym__assignment_operator] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_5] = ACTIONS(13),
    [anon_sym_6] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(13),
    [anon_sym_8] = ACTIONS(13),
    [anon_sym_9] = ACTIONS(13),
    [anon_sym_10] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_11] = ACTIONS(17),
    [anon_sym_12] = ACTIONS(17),
    [anon_sym_PLUS_EQ] = ACTIONS(15),
    [anon_sym_DASH_EQ] = ACTIONS(15),
    [anon_sym_STAR_EQ] = ACTIONS(15),
    [anon_sym_SLASH_EQ] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [3] = {
    [sym__type] = STATE(20),
    [sym_argument_list] = STATE(12),
    [sym__assignment_operator] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(23),
    [anon_sym_5] = ACTIONS(23),
    [anon_sym_6] = ACTIONS(23),
    [anon_sym_7] = ACTIONS(23),
    [anon_sym_8] = ACTIONS(23),
    [anon_sym_9] = ACTIONS(23),
    [anon_sym_10] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_PLUS_EQ] = ACTIONS(25),
    [anon_sym_DASH_EQ] = ACTIONS(25),
    [anon_sym_STAR_EQ] = ACTIONS(25),
    [anon_sym_SLASH_EQ] = ACTIONS(25),
    [sym_identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_parameter_list_repeat1,
    STATE(61), 1,
      sym__type,
    ACTIONS(31), 9,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
  [24] = 3,
    STATE(67), 1,
      sym__type,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(35), 9,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
  [43] = 6,
    ACTIONS(37), 1,
      anon_sym_11,
    ACTIONS(39), 1,
      anon_sym_12,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(26), 1,
      sym_function_block,
    ACTIONS(43), 2,
      sym_number,
      sym_string,
    STATE(10), 6,
      sym_function_call,
      sym__statement,
      sym_assign_statement,
      sym_return_statement,
      sym__expression,
      aux_sym_function_block_repeat1,
  [68] = 5,
    ACTIONS(5), 1,
      anon_sym_,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym_number,
      sym_string,
    STATE(8), 6,
      sym__definition,
      sym_function_definition,
      sym_function_call,
      sym_assign_statement,
      sym__expression,
      aux_sym_source_file_repeat1,
  [90] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 2,
      sym_number,
      sym_string,
    STATE(8), 6,
      sym__definition,
      sym_function_definition,
      sym_function_call,
      sym_assign_statement,
      sym__expression,
      aux_sym_source_file_repeat1,
  [112] = 5,
    ACTIONS(60), 1,
      anon_sym_11,
    ACTIONS(62), 1,
      anon_sym_12,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(68), 2,
      sym_number,
      sym_string,
    STATE(9), 6,
      sym_function_call,
      sym__statement,
      sym_assign_statement,
      sym_return_statement,
      sym__expression,
      aux_sym_function_block_repeat1,
  [134] = 5,
    ACTIONS(39), 1,
      anon_sym_12,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_11,
    ACTIONS(73), 2,
      sym_number,
      sym_string,
    STATE(9), 6,
      sym_function_call,
      sym__statement,
      sym_assign_statement,
      sym_return_statement,
      sym__expression,
      aux_sym_function_block_repeat1,
  [156] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(17), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [174] = 2,
    ACTIONS(77), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [186] = 2,
    ACTIONS(81), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [198] = 2,
    ACTIONS(85), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [210] = 2,
    ACTIONS(89), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [222] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [238] = 2,
    ACTIONS(93), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [250] = 2,
    ACTIONS(97), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [262] = 4,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_function_call,
      sym__expression,
  [277] = 2,
    STATE(43), 1,
      sym__assignment_operator,
    ACTIONS(105), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [288] = 2,
    STATE(46), 1,
      sym__assignment_operator,
    ACTIONS(107), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [299] = 4,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 2,
      sym_number,
      sym_string,
    STATE(53), 2,
      sym_function_call,
      sym__expression,
  [314] = 2,
    ACTIONS(117), 2,
      sym_number,
      sym_string,
    ACTIONS(115), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [324] = 2,
    ACTIONS(121), 2,
      sym_number,
      sym_string,
    ACTIONS(119), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [334] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 2,
      sym_number,
      sym_string,
    STATE(23), 2,
      sym_function_call,
      sym__expression,
  [346] = 2,
    ACTIONS(129), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
  [356] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 2,
      sym_number,
      sym_string,
    STATE(59), 2,
      sym_function_call,
      sym__expression,
  [368] = 3,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 2,
      sym_number,
      sym_string,
    STATE(68), 2,
      sym_function_call,
      sym__expression,
  [380] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [394] = 2,
    ACTIONS(143), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
  [404] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_number,
      sym_string,
    STATE(63), 2,
      sym_function_call,
      sym__expression,
  [416] = 2,
    ACTIONS(149), 2,
      sym_number,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [426] = 2,
    ACTIONS(79), 2,
      sym_number,
      sym_string,
    ACTIONS(81), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [436] = 2,
    ACTIONS(87), 2,
      sym_number,
      sym_string,
    ACTIONS(89), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [446] = 2,
    ACTIONS(91), 2,
      sym_number,
      sym_string,
    ACTIONS(93), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [456] = 2,
    ACTIONS(153), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
  [466] = 2,
    ACTIONS(157), 2,
      sym_number,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [476] = 2,
    ACTIONS(141), 2,
      sym_number,
      sym_string,
    ACTIONS(143), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [486] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [500] = 2,
    ACTIONS(95), 2,
      sym_number,
      sym_string,
    ACTIONS(97), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [510] = 2,
    ACTIONS(119), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
  [520] = 2,
    ACTIONS(163), 2,
      anon_sym_,
      sym_identifier,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
  [530] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(165), 2,
      sym_number,
      sym_string,
    STATE(30), 2,
      sym_function_call,
      sym__expression,
  [542] = 2,
    ACTIONS(169), 2,
      sym_number,
      sym_string,
    ACTIONS(167), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [552] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(171), 2,
      sym_number,
      sym_string,
    STATE(41), 2,
      sym_function_call,
      sym__expression,
  [564] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(173), 2,
      sym_number,
      sym_string,
    STATE(38), 2,
      sym_function_call,
      sym__expression,
  [576] = 2,
    ACTIONS(83), 2,
      sym_number,
      sym_string,
    ACTIONS(85), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [586] = 3,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(175), 2,
      sym_number,
      sym_string,
    STATE(24), 2,
      sym_function_call,
      sym__expression,
  [598] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(177), 2,
      sym_number,
      sym_string,
    STATE(70), 2,
      sym_function_call,
      sym__expression,
  [610] = 2,
    ACTIONS(75), 2,
      sym_number,
      sym_string,
    ACTIONS(77), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [620] = 2,
    ACTIONS(181), 2,
      sym_number,
      sym_string,
    ACTIONS(179), 3,
      anon_sym_11,
      anon_sym_12,
      sym_identifier,
  [630] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [644] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_argument_list_repeat1,
  [654] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [664] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_argument_list_repeat1,
  [674] = 3,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_parameter_list_repeat1,
  [684] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameter_list_repeat1,
  [694] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [704] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_argument_list_repeat1,
  [714] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_parameter_list_repeat1,
  [724] = 3,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_parameter_list_repeat1,
  [734] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [744] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
  [754] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [764] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [774] = 2,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      sym_identifier,
  [781] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [786] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [791] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_parameter_list,
  [798] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [803] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [807] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [811] = 1,
    ACTIONS(229), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 43,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 210,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 262,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 324,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 380,
  [SMALL_STATE(30)] = 394,
  [SMALL_STATE(31)] = 404,
  [SMALL_STATE(32)] = 416,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 436,
  [SMALL_STATE(35)] = 446,
  [SMALL_STATE(36)] = 456,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 476,
  [SMALL_STATE(39)] = 486,
  [SMALL_STATE(40)] = 500,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 542,
  [SMALL_STATE(45)] = 552,
  [SMALL_STATE(46)] = 564,
  [SMALL_STATE(47)] = 576,
  [SMALL_STATE(48)] = 586,
  [SMALL_STATE(49)] = 598,
  [SMALL_STATE(50)] = 610,
  [SMALL_STATE(51)] = 620,
  [SMALL_STATE(52)] = 630,
  [SMALL_STATE(53)] = 644,
  [SMALL_STATE(54)] = 654,
  [SMALL_STATE(55)] = 664,
  [SMALL_STATE(56)] = 674,
  [SMALL_STATE(57)] = 684,
  [SMALL_STATE(58)] = 694,
  [SMALL_STATE(59)] = 704,
  [SMALL_STATE(60)] = 714,
  [SMALL_STATE(61)] = 724,
  [SMALL_STATE(62)] = 734,
  [SMALL_STATE(63)] = 744,
  [SMALL_STATE(64)] = 754,
  [SMALL_STATE(65)] = 764,
  [SMALL_STATE(66)] = 774,
  [SMALL_STATE(67)] = 781,
  [SMALL_STATE(68)] = 786,
  [SMALL_STATE(69)] = 791,
  [SMALL_STATE(70)] = 798,
  [SMALL_STATE(71)] = 803,
  [SMALL_STATE(72)] = 807,
  [SMALL_STATE(73)] = 811,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2), SHIFT_REPEAT(25),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_block_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_block_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_statement, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_statement, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(73),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mavka(void) {
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
