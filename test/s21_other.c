#include "s21_tests.h"

START_TEST(test_floor_1) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_2) {
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
  int code = s21_floor(decimal, NULL);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}

START_TEST(test_floor_3) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_4) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_5) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_6) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  s21_decimal decimal_check = {{0xF485787B, 0x7F29ABCA, 0x1AD, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_7) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_8) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  s21_decimal decimal_check = {{0x1873BF40, 0xF31DC461, 0x2A, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_9) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_10) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_11) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_12) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  s21_decimal decimal_check = {{0x5EF6EAE0, 0x6DF37F67, 0x0, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_13) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_14) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_15) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_16) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_17) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_18) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_19) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_floor_20) {
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  s21_decimal decimal_check = {{0x70D42574, 0x2D093, 0x0, 0x80000000}};
  test_floor(decimal, decimal_check);
}

START_TEST(test_negate_1) {
  s21_decimal decimal = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0x800B0000}};
  s21_decimal decimal_check = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0xB0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_2) {
  s21_decimal decimal = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0xB0000}};
  s21_decimal decimal_check = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0x800B0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_3) {
  s21_decimal decimal = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x801B0000}};
  s21_decimal decimal_check = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x1B0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_4) {
  s21_decimal decimal = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x1B0000}};
  s21_decimal decimal_check = {
      {0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x801B0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_5) {
  s21_decimal decimal = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0x800A0000}};
  s21_decimal decimal_check = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0xA0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_6) {
  s21_decimal decimal = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0xA0000}};
  s21_decimal decimal_check = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0x800A0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_7) {
  s21_decimal decimal = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x0}};
  s21_decimal decimal_check = {
      {0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x80000000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_8) {
  s21_decimal decimal = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x80000000}};
  s21_decimal decimal_check = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x0}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_9) {
  s21_decimal decimal = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x30000}};
  s21_decimal decimal_check = {
      {0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x80030000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_10) {
  s21_decimal decimal = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x80030000}};
  s21_decimal decimal_check = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x30000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_11) {
  s21_decimal decimal = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x0}};
  s21_decimal decimal_check = {
      {0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x80000000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_12) {
  s21_decimal decimal = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x80000000}};
  s21_decimal decimal_check = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x0}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_13) {
  s21_decimal decimal = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0x800A0000}};
  s21_decimal decimal_check = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0xA0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_14) {
  s21_decimal decimal = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0xA0000}};
  s21_decimal decimal_check = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0x800A0000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_15) {
  s21_decimal decimal = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x80140000}};
  s21_decimal decimal_check = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x140000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_16) {
  s21_decimal decimal = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x140000}};
  s21_decimal decimal_check = {
      {0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x80140000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_17) {
  s21_decimal decimal = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x80000000}};
  s21_decimal decimal_check = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x0}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_18) {
  s21_decimal decimal = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x0}};
  s21_decimal decimal_check = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x80000000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_19) {
  s21_decimal decimal = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x80050000}};
  s21_decimal decimal_check = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x50000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_20) {
  s21_decimal decimal = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x50000}};
  s21_decimal decimal_check = {
      {0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x80050000}};
  test_negate(decimal, decimal_check);
}

START_TEST(test_round_1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395034
  s21_decimal decimal_check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_4) {
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
  int code = s21_round(decimal, NULL);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}

START_TEST(test_round_5) {
  // -184467440.73709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x800B0000}};
  // -184467441
  s21_decimal decimal_check = {{0xAFEBFF1, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_6) {
  // 184.46744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x110000}};
  // 184
  s21_decimal decimal_check = {{0xB8, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_7) {
  // 1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x130000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_8) {
  // -1.8446744073709551615
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0x80130000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_9) {
  // 18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};
  // 18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_10) {
  // -18446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};
  // -18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_11) {
  // 1844674406941458432.0
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x10000}};
  // 1844674406941458432
  s21_decimal decimal_check = {{0x80000000, 0x19999999, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_12) {
  // -18446744069.414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80090000}};
  // -18446744069
  s21_decimal decimal_check = {{0x4B82FA05, 0x4, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_13) {
  // 18446744069.414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x90000}};
  // 18446744069
  s21_decimal decimal_check = {{0x4B82FA05, 0x4, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_14) {
  // 1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x130000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_15) {
  // -1.8446744069414584320
  s21_decimal decimal = {{0x0, 0xFFFFFFFF, 0x0, 0x80130000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_16) {
  // 42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x50000}};
  // 42950
  s21_decimal decimal_check = {{0xA7C6, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_17) {
  // -42949.67295
  s21_decimal decimal = {{0xFFFFFFFF, 0x0, 0x0, 0x80050000}};
  // -42950
  s21_decimal decimal_check = {{0xA7C6, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_18) {
  // 1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x10000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_19) {
  // -1.0
  s21_decimal decimal = {{0xA, 0x0, 0x0, 0x80010000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_round_20) {
  // -1.00
  s21_decimal decimal = {{0x64, 0x0, 0x0, 0x80020000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_round(decimal, decimal_check);
}

START_TEST(test_truncate_1) {
  // -285.75367348799914688751734686
  s21_decimal decimal = {{0x8BFA0F9E, 0xF4FEA973, 0x5C54FD67, 0x801A0000}};
  // -285
  s21_decimal decimal_check = {{0x11D, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_2) {
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0x0, 0xB0000}};
  int code = s21_truncate(decimal, NULL);
  ck_assert_int_eq(code, TEST_OTHER_ERROR);
}

START_TEST(test_truncate_3) {
  // 294337633.23167245972108598632
  s21_decimal decimal = {{0xA8B1DD68, 0xF858C391, 0x5F1B09D2, 0x140000}};
  // 294337633
  s21_decimal decimal_check = {{0x118B3C61, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_4) {
  // -199389824762093573248565729.89
  s21_decimal decimal = {{0xCE3BC3D, 0xE49077A5, 0x406D23C5, 0x80020000}};
  // -199389824762093573248565729
  s21_decimal decimal_check = {{0x6916C1E1, 0xF15ECB7, 0xA4EE70, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_5) {
  // 199389824762093573248565729.89
  s21_decimal decimal = {{0xCE3BC3D, 0xE49077A5, 0x406D23C5, 0x20000}};
  // 199389824762093573248565729
  s21_decimal decimal_check = {{0x6916C1E1, 0xF15ECB7, 0xA4EE70, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_6) {
  // 24926833321041066052322067.634
  s21_decimal decimal = {{0xCE0004B2, 0xFE2AB6BB, 0x508AFE45, 0x30000}};
  // 24926833321041066052322067
  s21_decimal decimal_check = {{0x17808313, 0x578CD7BC, 0x149E76, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_7) {
  // -24926833321041066052322067.634
  s21_decimal decimal = {{0xCE0004B2, 0xFE2AB6BB, 0x508AFE45, 0x80030000}};
  // -24926833321041066052322067
  s21_decimal decimal_check = {{0x17808313, 0x578CD7BC, 0x149E76, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_8) {
  // -74598258212432518399940479.216
  s21_decimal decimal = {{0x9555C8F0, 0xE0B0D013, 0xF10A3BA0, 0x80030000}};
  // -74598258212432518399940479
  s21_decimal decimal_check = {{0x4480577F, 0xAE4E0035, 0x3DB4CB, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_9) {
  // 74598258212432518399940479.216
  s21_decimal decimal = {{0x9555C8F0, 0xE0B0D013, 0xF10A3BA0, 0x30000}};
  // 74598258212432518399940479
  s21_decimal decimal_check = {{0x4480577F, 0xAE4E0035, 0x3DB4CB, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_10) {
  // -40611103467088.081458801075149
  s21_decimal decimal = {{0x2FEEE3CD, 0x4D7246A1, 0x8338B7AA, 0x800F0000}};
  // -40611103467088
  s21_decimal decimal_check = {{0x82656650, 0x24EF, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_11) {
  // 40611103467088.081458801075149
  s21_decimal decimal = {{0x2FEEE3CD, 0x4D7246A1, 0x8338B7AA, 0xF0000}};
  // 40611103467088
  s21_decimal decimal_check = {{0x82656650, 0x24EF, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_12) {
  // -2.6024178308480731804266209026
  s21_decimal decimal = {{0x41151F02, 0xF5D2C738, 0x5416B21C, 0x801C0000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_13) {
  // 2.6024178308480731804266209026
  s21_decimal decimal = {{0x41151F02, 0xF5D2C738, 0x5416B21C, 0x1C0000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_14) {
  // 411936538322804235.39096857465
  s21_decimal decimal = {{0x86A6AB79, 0xE0F35639, 0x851A9780, 0xB0000}};
  // 411936538322804235
  s21_decimal decimal_check = {{0x5CBC1E0B, 0x5B77E19, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_15) {
  // -411936538322804235.39096857465
  s21_decimal decimal = {{0x86A6AB79, 0xE0F35639, 0x851A9780, 0x800B0000}};
  // -411936538322804235
  s21_decimal decimal_check = {{0x5CBC1E0B, 0x5B77E19, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_16) {
  // -57.808791587198779581129071039
  s21_decimal decimal = {{0x547899BF, 0x61506CE1, 0xBACA4FC7, 0x801B0000}};
  // -57
  s21_decimal decimal_check = {{0x39, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_17) {
  // 57.808791587198779581129071039
  s21_decimal decimal = {{0x547899BF, 0x61506CE1, 0xBACA4FC7, 0x1B0000}};
  // 57
  s21_decimal decimal_check = {{0x39, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_18) {
  // -62951289.164843933254142541677
  s21_decimal decimal = {{0x98FE3F6D, 0xAA12CDCB, 0xCB6815FF, 0x80150000}};
  // -62951289
  s21_decimal decimal_check = {{0x3C08F79, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_19) {
  // 62951289.164843933254142541677
  s21_decimal decimal = {{0x98FE3F6D, 0xAA12CDCB, 0xCB6815FF, 0x150000}};
  // 62951289
  s21_decimal decimal_check = {{0x3C08F79, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_20) {
  // -12324957495.166324975666774143
  s21_decimal decimal = {{0xAE60C07F, 0x9A40295B, 0x27D2F744, 0x80120000}};
  // -12324957495
  s21_decimal decimal_check = {{0xDE9FED37, 0x2, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

void test_negate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_negate(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
  ck_assert_int_eq(sign_check, sign_result);
}

void test_floor(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_floor(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
  ck_assert_int_eq(sign_check, sign_result);
}

void test_round(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_round(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
  ck_assert_int_eq(sign_check, sign_result);
}

void test_truncate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_truncate(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, TEST_OTHER_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
  ck_assert_int_eq(sign_check, sign_result);
}

Suite *truncate_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("truncate_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_truncate_1);
  tcase_add_test(tc_core, test_truncate_2);
  tcase_add_test(tc_core, test_truncate_3);
  tcase_add_test(tc_core, test_truncate_4);
  tcase_add_test(tc_core, test_truncate_5);
  tcase_add_test(tc_core, test_truncate_6);
  tcase_add_test(tc_core, test_truncate_7);
  tcase_add_test(tc_core, test_truncate_8);
  tcase_add_test(tc_core, test_truncate_9);
  tcase_add_test(tc_core, test_truncate_10);
  tcase_add_test(tc_core, test_truncate_11);
  tcase_add_test(tc_core, test_truncate_12);
  tcase_add_test(tc_core, test_truncate_13);
  tcase_add_test(tc_core, test_truncate_14);
  tcase_add_test(tc_core, test_truncate_15);
  tcase_add_test(tc_core, test_truncate_16);
  tcase_add_test(tc_core, test_truncate_17);
  tcase_add_test(tc_core, test_truncate_18);
  tcase_add_test(tc_core, test_truncate_19);
  tcase_add_test(tc_core, test_truncate_20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *round_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("round_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_round_1);
  tcase_add_test(tc_core, test_round_2);
  tcase_add_test(tc_core, test_round_3);
  tcase_add_test(tc_core, test_round_4);
  tcase_add_test(tc_core, test_round_5);
  tcase_add_test(tc_core, test_round_6);
  tcase_add_test(tc_core, test_round_7);
  tcase_add_test(tc_core, test_round_8);
  tcase_add_test(tc_core, test_round_9);
  tcase_add_test(tc_core, test_round_10);
  tcase_add_test(tc_core, test_round_11);
  tcase_add_test(tc_core, test_round_12);
  tcase_add_test(tc_core, test_round_13);
  tcase_add_test(tc_core, test_round_14);
  tcase_add_test(tc_core, test_round_15);
  tcase_add_test(tc_core, test_round_16);
  tcase_add_test(tc_core, test_round_17);
  tcase_add_test(tc_core, test_round_18);
  tcase_add_test(tc_core, test_round_19);
  tcase_add_test(tc_core, test_round_20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *floor_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("floor_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_floor_1);
  tcase_add_test(tc_core, test_floor_2);
  tcase_add_test(tc_core, test_floor_3);
  tcase_add_test(tc_core, test_floor_4);
  tcase_add_test(tc_core, test_floor_5);
  tcase_add_test(tc_core, test_floor_6);
  tcase_add_test(tc_core, test_floor_7);
  tcase_add_test(tc_core, test_floor_8);
  tcase_add_test(tc_core, test_floor_9);
  tcase_add_test(tc_core, test_floor_10);
  tcase_add_test(tc_core, test_floor_11);
  tcase_add_test(tc_core, test_floor_12);
  tcase_add_test(tc_core, test_floor_13);
  tcase_add_test(tc_core, test_floor_14);
  tcase_add_test(tc_core, test_floor_15);
  tcase_add_test(tc_core, test_floor_16);
  tcase_add_test(tc_core, test_floor_17);
  tcase_add_test(tc_core, test_floor_18);
  tcase_add_test(tc_core, test_floor_19);
  tcase_add_test(tc_core, test_floor_20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *negate_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("negate_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_negate_1);
  tcase_add_test(tc_core, test_negate_2);
  tcase_add_test(tc_core, test_negate_3);
  tcase_add_test(tc_core, test_negate_4);
  tcase_add_test(tc_core, test_negate_5);
  tcase_add_test(tc_core, test_negate_6);
  tcase_add_test(tc_core, test_negate_7);
  tcase_add_test(tc_core, test_negate_8);
  tcase_add_test(tc_core, test_negate_9);
  tcase_add_test(tc_core, test_negate_10);
  tcase_add_test(tc_core, test_negate_11);
  tcase_add_test(tc_core, test_negate_12);
  tcase_add_test(tc_core, test_negate_13);
  tcase_add_test(tc_core, test_negate_14);
  tcase_add_test(tc_core, test_negate_15);
  tcase_add_test(tc_core, test_negate_16);
  tcase_add_test(tc_core, test_negate_17);
  tcase_add_test(tc_core, test_negate_18);
  tcase_add_test(tc_core, test_negate_19);
  tcase_add_test(tc_core, test_negate_20);

  suite_add_tcase(s, tc_core);
  return s;
}