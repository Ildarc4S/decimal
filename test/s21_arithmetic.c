#include "s21_tests.h"

START_TEST(test_add1) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add2) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add3) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add4) {
  s21_decimal decimal1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  s21_decimal check = {{0xAE7ABC76, 0xF48CBA77, 0xDA50BD0D, 0x80140000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add5) {
  s21_decimal decimal1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  s21_decimal check = {{0x0, 0x0, 0x0, 0x80140000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add6) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add7) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add8) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add9) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add10) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal check = {{0x1000000A, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add11) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal check = {{0xFFFFFF6, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add12) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  s21_decimal check = {{0x8800000A, 0x1F128130, 0x1027E72F, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add13) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  s21_decimal check = {{0x87FFFFF6, 0x1F128130, 0x1027E72F, 0x801C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add14) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
  s21_decimal check = {{0x88000009, 0x1F128130, 0x1027E72F, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add15) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
  s21_decimal check = {{0x87FFFFF5, 0x1F128130, 0x1027E72F, 0x801C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add16) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
  s21_decimal check = {{0x8800000B, 0x1F128130, 0x1027E72F, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add17) {
  s21_decimal decimal1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  s21_decimal check = {{0x7D053A29, 0xFFFFFFFE, 0xFFFFFFFF, 0x10000}};

  test_add(decimal1, decimal2, check);
}

START_TEST(test_add18) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  s21_decimal check = {{0x1FFFFC22, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add19) {
  s21_decimal decimal1 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
  s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
  s21_decimal check = {{0x75C9AB66, 0xB85F1D54, 0xC93FABFA, 0x140000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_add20) {
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  s21_decimal check = {{0x1000000B, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  test_add(decimal1, decimal2, check);
}

START_TEST(test_sub1) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
  s21_decimal check = {{0x40000000, 0xFE8401E7, 0x19D971E4, 0x1B0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
  s21_decimal check = {{0x89800000, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
  s21_decimal check = {{0x89800000, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub4) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub5) {
  s21_decimal decimal1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  s21_decimal check = {{0x0, 0x0, 0x0, 0x00000000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub6) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub7) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub8) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub9) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub10) {
  s21_decimal decimal1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  s21_decimal check = {{0x50CFFDC4, 0x64364BB6, 0xC2A02CFF, 0x80000000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub11) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub12) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub13) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
  s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub14) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
  s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub16) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub17) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub18) {
  s21_decimal decimal1 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  s21_decimal check = {{0xA1793DD9, 0x648C702C, 0xC2A02CFF, 0x80000000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub19) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub20) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  test_sub(decimal1, decimal2, check);
}

START_TEST(test_mul1) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul3) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x100000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul4) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x80100000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul5) {
  s21_decimal decimal1 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  s21_decimal decimal_check = {
      {0x40136B23, 0xBF8285B9, 0xA0DCDBF6, 0x80150000}};

  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul6) {
  s21_decimal decimal1 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  s21_decimal decimal_check = {{0x40136B23, 0xBF8285B9, 0xA0DCDBF6, 0x150000}};

  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul7) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul8) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul9) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul10) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul11) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul12) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul13) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul14) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul16) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul17) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul18) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul19) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul20) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_div1) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x2C280291, 0x108B2A, 0x0, 0x801C0000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div2) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x2C280291, 0x108B2A, 0x0, 0x1C0000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div3) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x8B0C1209, 0x422CA, 0x0, 0x801C0000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x8B0C1209, 0x422CA, 0x0, 0x1C0000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div5) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80040000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div6) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x40000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div7) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div8) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div9) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div10) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div11) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div12) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div13) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80030000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div14) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal result = {{0, 0, 0, 0}};
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(code, TEST_ARITHMETIC_ZERO_DIV);
}

START_TEST(test_div15) {
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div16) {
  s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal_check = {{0xFBB5529B, 0x19CB7025, 0xFB363, 0x801B0000}};

  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div17) {
  s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};

  s21_decimal decimal_check = {{0xFBB5529B, 0x19CB7025, 0xFB363, 0x1B0000}};

  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div18) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80030000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div19) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x30000}};
  test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div20) {
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x30000}};
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x30000}};
  test_div(decimal1, decimal2, decimal_check);
}

Suite *add_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("add_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_add1);
  tcase_add_test(tc_core, test_add2);
  tcase_add_test(tc_core, test_add3);
  tcase_add_test(tc_core, test_add4);
  tcase_add_test(tc_core, test_add5);
  tcase_add_test(tc_core, test_add6);
  tcase_add_test(tc_core, test_add7);
  tcase_add_test(tc_core, test_add8);
  tcase_add_test(tc_core, test_add9);
  tcase_add_test(tc_core, test_add10);
  tcase_add_test(tc_core, test_add11);
  tcase_add_test(tc_core, test_add12);
  tcase_add_test(tc_core, test_add13);
  tcase_add_test(tc_core, test_add14);
  tcase_add_test(tc_core, test_add15);
  tcase_add_test(tc_core, test_add16);
  tcase_add_test(tc_core, test_add17);
  tcase_add_test(tc_core, test_add18);
  tcase_add_test(tc_core, test_add19);
  tcase_add_test(tc_core, test_add20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *sub_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("sub_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_sub1);
  tcase_add_test(tc_core, test_sub2);
  tcase_add_test(tc_core, test_sub3);
  tcase_add_test(tc_core, test_sub4);
  tcase_add_test(tc_core, test_sub5);
  tcase_add_test(tc_core, test_sub6);
  tcase_add_test(tc_core, test_sub7);
  tcase_add_test(tc_core, test_sub8);
  tcase_add_test(tc_core, test_sub9);
  tcase_add_test(tc_core, test_sub10);
  tcase_add_test(tc_core, test_sub11);
  tcase_add_test(tc_core, test_sub12);
  tcase_add_test(tc_core, test_sub13);
  tcase_add_test(tc_core, test_sub14);
  tcase_add_test(tc_core, test_sub15);
  tcase_add_test(tc_core, test_sub16);
  tcase_add_test(tc_core, test_sub17);
  tcase_add_test(tc_core, test_sub18);
  tcase_add_test(tc_core, test_sub19);
  tcase_add_test(tc_core, test_sub20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *mul_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("mul_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_mul1);
  tcase_add_test(tc_core, test_mul2);
  tcase_add_test(tc_core, test_mul3);
  tcase_add_test(tc_core, test_mul4);
  tcase_add_test(tc_core, test_mul5);
  tcase_add_test(tc_core, test_mul6);
  tcase_add_test(tc_core, test_mul7);
  tcase_add_test(tc_core, test_mul8);
  tcase_add_test(tc_core, test_mul9);
  tcase_add_test(tc_core, test_mul10);
  tcase_add_test(tc_core, test_mul11);
  tcase_add_test(tc_core, test_mul12);
  tcase_add_test(tc_core, test_mul13);
  tcase_add_test(tc_core, test_mul14);
  tcase_add_test(tc_core, test_mul15);
  tcase_add_test(tc_core, test_mul16);
  tcase_add_test(tc_core, test_mul17);
  tcase_add_test(tc_core, test_mul18);
  tcase_add_test(tc_core, test_mul19);
  tcase_add_test(tc_core, test_mul20);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *div_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("div_suite");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_div1);
  tcase_add_test(tc_core, test_div2);
  tcase_add_test(tc_core, test_div3);
  tcase_add_test(tc_core, test_div4);
  tcase_add_test(tc_core, test_div5);
  tcase_add_test(tc_core, test_div6);
  tcase_add_test(tc_core, test_div7);
  tcase_add_test(tc_core, test_div8);
  tcase_add_test(tc_core, test_div9);
  tcase_add_test(tc_core, test_div10);
  tcase_add_test(tc_core, test_div11);
  tcase_add_test(tc_core, test_div12);
  tcase_add_test(tc_core, test_div13);
  tcase_add_test(tc_core, test_div14);
  tcase_add_test(tc_core, test_div15);
  tcase_add_test(tc_core, test_div16);
  tcase_add_test(tc_core, test_div17);
  tcase_add_test(tc_core, test_div18);
  tcase_add_test(tc_core, test_div19);
  tcase_add_test(tc_core, test_div20);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_add(decimal1, decimal2, &result);

  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_sub(decimal1, decimal2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_mul(decimal1, decimal2, &result);

  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_div(decimal1, decimal2, &result);

  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}