// #include "../../../include/.h"
#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#define TEST_ARITHMETIC_OK 0
#define TEST_ARITHMETIC_BIG 1
#define TEST_ARITHMETIC_SMALL 2
#define TEST_ARITHMETIC_ZERO_DIV 3

Suite *add_suite9(void);
Suite *div_suite9(void);
Suite *mul_suite1(void);
Suite *sub_suite8(void);

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);

START_TEST(test_add3124) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3125) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3126) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3127) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // 7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3128) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3129) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3130) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3131) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3132) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3133) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 1.0000000000000000000000000010
    s21_decimal check = {{0x1000000A, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3134) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -0.9999999999999999999999999990
    s21_decimal check = {{0xFFFFFF6, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3135) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 0.5000000000000000000000000010
    s21_decimal check = {{0x8800000A, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3136) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -0.4999999999999999999999999990
    s21_decimal check = {{0x87FFFFF6, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3137) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0.5000000000000000000000000009
    s21_decimal check = {{0x88000009, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3138) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -0.4999999999999999999999999989
    s21_decimal check = {{0x87FFFFF5, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3139) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0.5000000000000000000000000011
    s21_decimal check = {{0x8800000B, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3140) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -0.4999999999999999999999999991
    s21_decimal check = {{0x87FFFFF7, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3141) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 1.9999999999999999999999999010
    s21_decimal check = {{0x1FFFFC22, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3142) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -1.9999999999999999999999998990
    s21_decimal check = {{0x1FFFFC0E, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3143) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 1.0000000000000000000000000011
    s21_decimal check = {{0x1000000B, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3144) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.9999999999999999999999999991
    s21_decimal check = {{0xFFFFFF7, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3145) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3146) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3147) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3148) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3149) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3150) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // -6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3151) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3152) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // -6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3153) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3154) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3155) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
    // 26409387.704754779197847983445
    s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3156) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
    // -26409387.704754779197847983445
    s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3157) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3158) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // -26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3159) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3160) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3161) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 7.922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x1B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3162) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -7.9228162514264337593543950325
    s21_decimal check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3163) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 8.000000000000000000000000001
    s21_decimal check = {{0x40000001, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3164) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -7.999999999999999999999999999
    s21_decimal check = {{0x3FFFFFFF, 0xFE8401E7, 0x19D971E4, 0x801B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3165) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // 3.6336660283201536000000000010
    s21_decimal check = {{0x8980000A, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3166) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // -3.6336660283201535999999999990
    s21_decimal check = {{0x897FFFF6, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3167) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3168) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3169) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3170) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3171) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000011
    s21_decimal check = {{0xB, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3172) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000009
    s21_decimal check = {{0x9, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3173) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000020
    s21_decimal check = {{0x14, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3174) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3175) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3176) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3177) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -49704001422.391670881925172831
    s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3178) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
    // 49704001422.391670881925172831
    s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3179) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
    // -649244002.20841517182548587502
    s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3180) {
    // 0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
    // 649244002.20841517182548587502
    s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3181) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3182) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3183) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3184) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3185) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3186) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3187) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // 7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3188) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3189) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3190) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3191) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3192) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3193) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999990
    s21_decimal check = {{0xFFFFFF6, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3194) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -1.0000000000000000000000000010
    s21_decimal check = {{0x1000000A, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3195) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 0.4999999999999999999999999990
    s21_decimal check = {{0x87FFFFF6, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3196) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -0.5000000000000000000000000010
    s21_decimal check = {{0x8800000A, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3197) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0.4999999999999999999999999989
    s21_decimal check = {{0x87FFFFF5, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3198) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -0.5000000000000000000000000009
    s21_decimal check = {{0x88000009, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3199) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0.4999999999999999999999999991
    s21_decimal check = {{0x87FFFFF7, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3200) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -0.5000000000000000000000000011
    s21_decimal check = {{0x8800000B, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3201) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 1.9999999999999999999999998990
    s21_decimal check = {{0x1FFFFC0E, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3202) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -1.9999999999999999999999999010
    s21_decimal check = {{0x1FFFFC22, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3203) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.9999999999999999999999999991
    s21_decimal check = {{0xFFFFFF7, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3204) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -1.0000000000000000000000000011
    s21_decimal check = {{0x1000000B, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3205) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3206) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3207) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3208) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3209) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3210) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // -6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3211) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3212) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // -6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3213) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3214) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3215) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
    // 26409387.704754779197847983445
    s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3216) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
    // -26409387.704754779197847983445
    s21_decimal check = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3217) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3218) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // -26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3219) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3220) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x80150000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3221) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 7.9228162514264337593543950325
    s21_decimal check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3222) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -7.922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x801B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3223) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 7.999999999999999999999999999
    s21_decimal check = {{0x3FFFFFFF, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3224) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -8.000000000000000000000000001
    s21_decimal check = {{0x40000001, 0xFE8401E7, 0x19D971E4, 0x801B0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3225) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // 3.6336660283201535999999999990
    s21_decimal check = {{0x897FFFF6, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3226) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // -3.6336660283201536000000000010
    s21_decimal check = {{0x8980000A, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3227) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3228) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3229) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3230) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3231) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000009
    s21_decimal check = {{0x9, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3232) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000011
    s21_decimal check = {{0xB, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3233) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3234) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000020
    s21_decimal check = {{0x14, 0x0, 0x0, 0x801C0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3235) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3236) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3237) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -49704001422.391670881925172831
    s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3238) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
    // 49704001422.391670881925172831
    s21_decimal check = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3239) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
    // -649244002.20841517182548587502
    s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3240) {
    // -0.0000000000000000000000000010
    s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
    // 649244002.20841517182548587502
    s21_decimal check = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3241) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228106389283212384222373411
    s21_decimal check = {{0x3AC4E623, 0x756BD584, 0xFFFFF41D, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3243) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228106389283212384222373410
    s21_decimal check = {{0x3AC4E622, 0x756BD584, 0xFFFFF41D, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3245) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 7922760126445308550032818109.0
    s21_decimal check = {{0x4BB0FD62, 0x9636572A, 0xFFFF8926, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3246) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -7922872376407558968675971957
    s21_decimal check = {{0x5ED4B375, 0x242DC415, 0x1999A57C, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3247) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // 7922760126445308550032818109.5
    s21_decimal check = {{0x4BB0FD67, 0x9636572A, 0xFFFF8926, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3248) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922872376407558968675971958
    s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3249) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 7922760126445308550032818110.0
    s21_decimal check = {{0x4BB0FD6C, 0x9636572A, 0xFFFF8926, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3250) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -7922872376407558968675971958
    s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3251) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // 7922760126445308550032818111.0
    s21_decimal check = {{0x4BB0FD76, 0x9636572A, 0xFFFF8926, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3252) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // -7922872376407558968675971959
    s21_decimal check = {{0x5ED4B377, 0x242DC415, 0x1999A57C, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3253) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // -56124981125209321576923.010631
    s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3254) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -56124981125209321576925.010631
    s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3255) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3256) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3257) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3258) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3259) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3260) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3261) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -56124981125209321576922.010631
    s21_decimal check = {{0xF36D407, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3262) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -56124981125209321576926.010631
    s21_decimal check = {{0xF73DD07, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3263) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -56124981125209321576923.010631
    s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3264) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -56124981125209321576925.010631
    s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3265) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 26409331379773653988526406521
    s21_decimal check = {{0x901A3B79, 0xCAC12AD9, 0x55554972, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3266) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -26409443629735904407169560369
    s21_decimal check = {{0x1A906F31, 0xDFE97FD1, 0x55556137, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3267) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 26409331373624739298721545081
    s21_decimal check = {{0x901A3B79, 0x756BD584, 0x55554972, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3268) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -26409443623586989717364698929
    s21_decimal check = {{0x1A906F31, 0x8A942A7C, 0x55556137, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3269) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // -56118832210518085059719.010631
    s21_decimal check = {{0xBA051947, 0xFFE9C0EB, 0xB55468F5, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3270) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // -56131130039900558094129.010631
    s21_decimal check = {{0x64A597C7, 0xAA946B96, 0xB55E9520, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3271) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // -56118832210519516715484.010631
    s21_decimal check = {{0xF555887, 0xFFEED701, 0xB55468F5, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3272) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // -56131130039899126438364.010631
    s21_decimal check = {{0xF555887, 0xAA8F5581, 0xB55E9520, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3273) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -56124981125207889921159.010631
    s21_decimal check = {{0xBA051947, 0x553A002B, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3274) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -56124981125210753232689.010631
    s21_decimal check = {{0x64A597C7, 0x55442C56, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3275) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
    // -56124981125209295167536.305876
    s21_decimal check = {{0x252916D4, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3276) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
    // -56124981125209347986311.715386
    s21_decimal check = {{0xF9819A3A, 0x553F2E45, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3277) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // -56124981125209295167536.512025
    s21_decimal check = {{0x252C3C19, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3278) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // -56124981125209347986311.509237
    s21_decimal check = {{0xF97E74F5, 0x553F2E45, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3279) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // -56124981125209295167537.010631
    s21_decimal check = {{0x2533D7C7, 0x553EFE3C, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3280) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -56124981125209347986311.010631
    s21_decimal check = {{0xF976D947, 0x553F2E45, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3281) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // -56124981125209321576916.087815
    s21_decimal check = {{0xEDC7407, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3282) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -56124981125209321576931.933447
    s21_decimal check = {{0xFCE3D07, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3283) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // -56124981125209321576916.010631
    s21_decimal check = {{0xEDB4687, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3284) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -56124981125209321576932.010631
    s21_decimal check = {{0xFCF6A87, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3285) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // -56124981125209321576920.376965
    s21_decimal check = {{0xF1DE685, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3286) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // -56124981125209321576927.644297
    s21_decimal check = {{0xF8CCA89, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3287) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3288) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3289) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3290) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3291) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3292) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3293) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3294) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3295) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -112249962250418643153848.02126
    s21_decimal check = {{0x9CAAAB4E, 0xAAA637A6, 0x24451968, 0x80050000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3296) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3297) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -56124981125259025578346.402302
    s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3298) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
    // -56124981125159617575501.618960
    s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3299) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // -649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
    // -56124981125209970820926.219046
    s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3300) {
    // -56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
    // -56124981125208672332921.802216
    s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x80060000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3302) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228106389283212384222373411
    s21_decimal check = {{0x3AC4E623, 0x756BD584, 0xFFFFF41D, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3304) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -79228106389283212384222373410
    s21_decimal check = {{0x3AC4E622, 0x756BD584, 0xFFFFF41D, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3305) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 7922872376407558968675971957
    s21_decimal check = {{0x5ED4B375, 0x242DC415, 0x1999A57C, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3306) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -7922760126445308550032818109.0
    s21_decimal check = {{0x4BB0FD62, 0x9636572A, 0xFFFF8926, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3307) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // 7922872376407558968675971958
    s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3308) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922760126445308550032818109.5
    s21_decimal check = {{0x4BB0FD67, 0x9636572A, 0xFFFF8926, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3309) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 7922872376407558968675971958
    s21_decimal check = {{0x5ED4B376, 0x242DC415, 0x1999A57C, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3310) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -7922760126445308550032818110.0
    s21_decimal check = {{0x4BB0FD6C, 0x9636572A, 0xFFFF8926, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3311) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // 7922872376407558968675971959
    s21_decimal check = {{0x5ED4B377, 0x242DC415, 0x1999A57C, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3312) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // -7922760126445308550032818111.0
    s21_decimal check = {{0x4BB0FD76, 0x9636572A, 0xFFFF8926, 0x80010000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3313) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 56124981125209321576925.010631
    s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3314) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 56124981125209321576923.010631
    s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3315) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3316) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3317) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3318) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3319) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 56124981125209321576924.510631
    s21_decimal check = {{0xF5CF9A7, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3320) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 56124981125209321576923.510631
    s21_decimal check = {{0xF4DB767, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3321) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 56124981125209321576926.010631
    s21_decimal check = {{0xF73DD07, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3322) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 56124981125209321576922.010631
    s21_decimal check = {{0xF36D407, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3323) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 56124981125209321576925.010631
    s21_decimal check = {{0xF649AC7, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3324) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 56124981125209321576923.010631
    s21_decimal check = {{0xF461647, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3325) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 26409443629735904407169560369
    s21_decimal check = {{0x1A906F31, 0xDFE97FD1, 0x55556137, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3326) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -26409331379773653988526406521
    s21_decimal check = {{0x901A3B79, 0xCAC12AD9, 0x55554972, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3327) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 26409443623586989717364698929
    s21_decimal check = {{0x1A906F31, 0x8A942A7C, 0x55556137, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3328) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -26409331373624739298721545081
    s21_decimal check = {{0x901A3B79, 0x756BD584, 0x55554972, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3329) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 56131130039900558094129.010631
    s21_decimal check = {{0x64A597C7, 0xAA946B96, 0xB55E9520, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3330) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 56118832210518085059719.010631
    s21_decimal check = {{0xBA051947, 0xFFE9C0EB, 0xB55468F5, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3331) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 56131130039899126438364.010631
    s21_decimal check = {{0xF555887, 0xAA8F5581, 0xB55E9520, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3332) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 56118832210519516715484.010631
    s21_decimal check = {{0xF555887, 0xFFEED701, 0xB55468F5, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3333) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 56124981125210753232689.010631
    s21_decimal check = {{0x64A597C7, 0x55442C56, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3334) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 56124981125207889921159.010631
    s21_decimal check = {{0xBA051947, 0x553A002B, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3335) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
    // 56124981125209347986311.715386
    s21_decimal check = {{0xF9819A3A, 0x553F2E45, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3336) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
    // 56124981125209295167536.305876
    s21_decimal check = {{0x252916D4, 0x553EFE3C, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3337) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 56124981125209347986311.509237
    s21_decimal check = {{0xF97E74F5, 0x553F2E45, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3338) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // 56124981125209295167536.512025
    s21_decimal check = {{0x252C3C19, 0x553EFE3C, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3339) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 56124981125209347986311.010631
    s21_decimal check = {{0xF976D947, 0x553F2E45, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3340) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // 56124981125209295167537.010631
    s21_decimal check = {{0x2533D7C7, 0x553EFE3C, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3341) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 56124981125209321576931.933447
    s21_decimal check = {{0xFCE3D07, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3342) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 56124981125209321576916.087815
    s21_decimal check = {{0xEDC7407, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3343) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 56124981125209321576932.010631
    s21_decimal check = {{0xFCF6A87, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3344) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // 56124981125209321576916.010631
    s21_decimal check = {{0xEDB4687, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3345) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // 56124981125209321576927.644297
    s21_decimal check = {{0xF8CCA89, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3346) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // 56124981125209321576920.376965
    s21_decimal check = {{0xF1DE685, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3347) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3348) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3349) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3350) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3351) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3352) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3353) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3354) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 56124981125209321576924.010631
    s21_decimal check = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3355) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x80060000}};
    // 0.000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3356) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 56124981125209321576924.010631
    s21_decimal decimal2 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 112249962250418643153848.02126
    s21_decimal check = {{0x9CAAAB4E, 0xAAA637A6, 0x24451968, 0x50000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3357) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 56124981125159617575501.618960
    s21_decimal check = {{0x6AA2DF10, 0x548E80BA, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3358) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 49704001422.391670881925172831
    s21_decimal decimal2 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x120000}};
    // 56124981125259025578346.402302
    s21_decimal check = {{0xB407D1FE, 0x55EFABC7, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3359) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // -649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x80140000}};
    // 56124981125208672332921.802216
    s21_decimal check = {{0x29358DE8, 0x553CC7C5, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3360) {
    // 56124981125209321576924.010631
    s21_decimal decimal1 = {{0xF555887, 0x553F1641, 0xB5597F0B, 0x60000}};
    // 649244002.20841517182548587502
    s21_decimal decimal2 = {{0x122233EE, 0x5675EBE6, 0xD1C83484, 0x140000}};
    // 56124981125209970820926.219046
    s21_decimal check = {{0xF5752326, 0x554164BC, 0xB5597F0B, 0x60000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3361) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337543839948913
    s21_decimal check = {{0x6D692071, 0xFFFFFFF4, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3363) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 79228162514264337543839948912
    s21_decimal check = {{0x6D692070, 0xFFFFFFF4, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3365) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433709650393610.6
    s21_decimal check = {{0x461B446A, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3366) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433809058396455
    s21_decimal check = {{0x2C307927, 0x999999A5, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3367) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // 7922816251426433709650393611.1
    s21_decimal check = {{0x461B446F, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3368) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // -7922816251426433809058396456
    s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3369) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433709650393611.6
    s21_decimal check = {{0x461B4474, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3370) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433809058396456
    s21_decimal check = {{0x2C307928, 0x999999A5, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3371) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // 7922816251426433709650393612.6
    s21_decimal check = {{0x461B447E, 0xFFFFFF8C, 0xFFFFFFFF, 0x10000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3372) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // -7922816251426433809058396457
    s21_decimal check = {{0x2C307929, 0x999999A5, 0x19999999, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3373) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // -49704001421.391670881925172831
    s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3374) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -49704001423.391670881925172831
    s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3375) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -49704001421.891670881925172831
    s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3376) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -49704001422.891670881925172831
    s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3377) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -49704001421.891670881925172831
    s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3378) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -49704001422.891670881925172831
    s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3379) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -49704001421.891670881925172831
    s21_decimal check = {{0xABC98E5F, 0x2452164C, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3380) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -49704001422.891670881925172831
    s21_decimal check = {{0x532D8E5F, 0x3232CD00, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3381) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -49704001420.391670881925172831
    s21_decimal check = {{0x30B38E5F, 0xF81043F, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3382) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -49704001424.391670881925172831
    s21_decimal check = {{0xCE438E5F, 0x4703DF0D, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3383) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -49704001421.391670881925172831
    s21_decimal check = {{0xD8178E5F, 0x1D61BAF2, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3384) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -49704001423.391670881925172831
    s21_decimal check = {{0x26DF8E5F, 0x3923285A, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3385) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 26409387504754779148143982023
    s21_decimal check = {{0xC2BE75C7, 0x55555549, 0x55555555, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3386) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -26409387504754779247551984867
    s21_decimal check = {{0xE7EC34E3, 0x55555560, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3387) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 26409387498605864458339120583
    s21_decimal check = {{0xC2BE75C7, 0xFFFFFFF4, 0x55555554, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3388) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -26409387498605864557747123427
    s21_decimal check = {{0xE7EC34E3, 0xB, 0x55555555, 0x80000000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3389) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 6148914641532515782.6083291181
    s21_decimal check = {{0x12FE002D, 0x638479D3, 0xC6AEA13A, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3390) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // -6148914740940518627.3916708819
    s21_decimal check = {{0xA4F67D3, 0x472630D6, 0xC6AEA170, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3391) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 6148914640100860017.6083291181
    s21_decimal check = {{0x84574C2D, 0x9CD5D87E, 0xC6AEA139, 0xA0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3392) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // -6148914739508862862.3916708819
    s21_decimal check = {{0x7BA8B3D3, 0x80778F81, 0xC6AEA16F, 0x800A0000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3393) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -48272345657.391670881925172831
    s21_decimal check = {{0xB7478E5F, 0xA2C15937, 0x9BF9F2CD, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3394) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -51135657187.391670881925172831
    s21_decimal check = {{0x47AF8E5F, 0xB3C38A15, 0xA53A6C9A, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3395) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
    // -49677592034.686916102727324848
    s21_decimal check = {{0x8FD6D4B0, 0x648F0410, 0xA084574C, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3396) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -26409387.704754779197847983445
    s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x80150000}};
    // -49730410810.096425661123020814
    s21_decimal check = {{0x6F20480E, 0xF1F5DF3C, 0xA0B0081B, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3397) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // -49677592034.893065017417129709
    s21_decimal check = {{0xEC1DEED, 0x676B6769, 0xA084574C, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3398) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // -49730410809.890276746433215953
    s21_decimal check = {{0xF0353DD1, 0xEF197BE3, 0xA0B0081B, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3399) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // -49677592035.391670881925172831
    s21_decimal check = {{0x6BAF8E5F, 0x6E56CECD, 0xA084574C, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3400) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -49730410809.391670881925172831
    s21_decimal check = {{0x93478E5F, 0xE82E147F, 0xA0B0081B, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3401) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // -49704001414.468854630498739072
    s21_decimal check = {{0x2084A380, 0xBD4EF23F, 0xA09A2FB3, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3402) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -49704001430.314487133351606590
    s21_decimal check = {{0xDE72793E, 0x9935F10D, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3403) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // -49704001414.391670881925172831
    s21_decimal check = {{0x445B8E5F, 0xBC3CBC09, 0xA09A2FB3, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add3404) {
    // -49704001422.391670881925172831
    s21_decimal decimal1 = {{0x7F7B8E5F, 0x2B4271A6, 0xA09A2FB4, 0x80120000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -49704001430.391670881925172831
    s21_decimal check = {{0xBA9B8E5F, 0x9A482743, 0xA09A2FB4, 0x80120000}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_div4129) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
    // -0.0002524354896707237777317531
    s21_decimal decimal_check = {{0xC1051E9B, 0x8D9BADC7, 0x2168D, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4130) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
    // 0.0002524354896707237777317531
    s21_decimal decimal_check = {{0xC1051E9B, 0x8D9BADC7, 0x2168D, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4131) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
    // -0.0000000000002328306435996595
    s21_decimal decimal_check = {{0x160BBBB3, 0x84595, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4132) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
    // 0.0000000000002328306435996595
    s21_decimal decimal_check = {{0x160BBBB3, 0x84595, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4135) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
    // -0.0000000000002328306436538696
    s21_decimal decimal_check = {{0x16140148, 0x84595, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4136) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
    // 0.0000000000002328306436538696
    s21_decimal decimal_check = {{0x16140148, 0x84595, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4137) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
    // -0.0000000000004656612873077393
    s21_decimal decimal_check = {{0x2C280291, 0x108B2A, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4138) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
    // 0.0000000000004656612873077393
    s21_decimal decimal_check = {{0x2C280291, 0x108B2A, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4139) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
    // -0.0000000000001164153218404873
    s21_decimal decimal_check = {{0x8B0C1209, 0x422CA, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4140) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
    // 0.0000000000001164153218404873
    s21_decimal decimal_check = {{0x8B0C1209, 0x422CA, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4141) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
    // -0.0002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4142) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
    // 0.0002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4143) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
    // -0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4144) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
    // 0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4145) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4146) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4147) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4148) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0.0005
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4149) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4150) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4151) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
    // -1250000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0xA2C28029, 0x108B2, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4152) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
    // 1250000000000000000000000
    s21_decimal decimal_check = {{0x9400000, 0xA2C28029, 0x108B2, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4153) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -10000000000000000000000000
    s21_decimal decimal_check = {{0x4A000000, 0x16140148, 0x84595, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4154) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 10000000000000000000000000
    s21_decimal decimal_check = {{0x4A000000, 0x16140148, 0x84595, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4155) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -1000000000000000000000000
    s21_decimal decimal_check = {{0xA1000000, 0x1BCECCED, 0xD3C2, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4156) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 1000000000000000000000000
    s21_decimal decimal_check = {{0xA1000000, 0x1BCECCED, 0xD3C2, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4157) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4158) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4159) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // -0.0001262177448353618888658766
    s21_decimal decimal_check = {{0xE0828F4E, 0xC6CDD6E3, 0x10B46, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4160) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 0.0001262177448353618888658766
    s21_decimal decimal_check = {{0xE0828F4E, 0xC6CDD6E3, 0x10B46, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4161) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 60.000000000000000000000000005
    s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
    // -0.0000166666666666666666666667
    s21_decimal decimal_check = {{0xF02AAAAB, 0x4A2777C, 0x234B, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4162) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -60.000000000000000000000000005
    s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
    // 0.0000166666666666666666666667
    s21_decimal decimal_check = {{0xF02AAAAB, 0x4A2777C, 0x234B, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4163) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -0.002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4164) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 0.002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4165) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4166) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4167) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.019
    s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.0526315789473684210526315789
    s21_decimal decimal_check = {{0x4435E50D, 0x1E37D7B4, 0x1B35BB4, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4168) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.019
    s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 0.0526315789473684210526315789
    s21_decimal decimal_check = {{0x4435E50D, 0x1E37D7B4, 0x1B35BB4, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4169) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 39614081266355.540835774234624
    s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
    // -0.0000000000000000252435489612
    s21_decimal decimal_check = {{0xC653E34C, 0x3A, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4170) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -39614081266355.540835774234624
    s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
    // 0.0000000000000000252435489612
    s21_decimal decimal_check = {{0xC653E34C, 0x3A, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4171) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 42.94967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
    // -0.000023283064365386962890625
    s21_decimal decimal_check = {{0x85ACEF81, 0x2D6D415B, 0x4EE, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4172) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -42.94967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
    // 0.000023283064365386962890625
    s21_decimal decimal_check = {{0x85ACEF81, 0x2D6D415B, 0x4EE, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4173) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 214748.3648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
    // -0.0000000046566128730773925781
    s21_decimal decimal_check = {{0xDAE42F95, 0x863C1F5C, 0x2, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4174) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -214748.3648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
    // 0.0000000046566128730773925781
    s21_decimal decimal_check = {{0xDAE42F95, 0x863C1F5C, 0x2, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4175) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 42.94967295
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
    // -0.0000232830643708079737543147
    s21_decimal decimal_check = {{0xFF0619EB, 0xC644BEE0, 0x314D, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4176) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -42.94967295
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
    // 0.0000232830643708079737543147
    s21_decimal decimal_check = {{0xFF0619EB, 0xC644BEE0, 0x314D, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4177) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 0.9999
    s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
    // -0.001000100010001000100010001
    s21_decimal decimal_check = {{0x4E6C1811, 0x87B9B2F6, 0xD3C7, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4178) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -0.9999
    s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
    // 0.001000100010001000100010001
    s21_decimal decimal_check = {{0x4E6C1811, 0x87B9B2F6, 0xD3C7, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4179) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
    // -0.000698491931124239212629441
    s21_decimal decimal_check = {{0xFD124DC1, 0x52CE3CA2, 0x93E9, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4180) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
    // 0.000698491931124239212629441
    s21_decimal decimal_check = {{0xFD124DC1, 0x52CE3CA2, 0x93E9, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4181) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 8460.288
    s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
    // -0.0000001181992858871943839264
    s21_decimal decimal_check = {{0x6EA2BE20, 0x137232AD, 0x40, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4182) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -8460.288
    s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
    // 0.0000001181992858871943839264
    s21_decimal decimal_check = {{0x6EA2BE20, 0x137232AD, 0x40, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4183) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 8.000
    s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
    // -0.000125
    s21_decimal decimal_check = {{0x7D, 0x0, 0x0, 0x80060000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4184) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -8.000
    s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
    // 0.000125
    s21_decimal decimal_check = {{0x7D, 0x0, 0x0, 0x60000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4185) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.001
    s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
    // -0.000999000999000999000999001
    s21_decimal decimal_check = {{0x5E170459, 0xF3E24945, 0xD38B, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4186) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.001
    s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
    // 0.000999000999000999000999001
    s21_decimal decimal_check = {{0x5E170459, 0xF3E24945, 0xD38B, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4187) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    // -0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4188) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    // 0.001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4189) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 10
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
    // -0.0001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4190) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -10
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
    // 0.0001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}


START_TEST(test_div4197) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 3656273013.5441854660747245473
    s21_decimal decimal2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
    // -0.0000000000002735025519964266
    s21_decimal decimal_check = {{0xC091B06A, 0x9B77D, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4198) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -3656273013.5441854660747245473
    s21_decimal decimal2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
    // 0.0000000000002735025519964266
    s21_decimal decimal_check = {{0xC091B06A, 0x9B77D, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4199) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // 626656361.06935169033698303587
    s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
    // -0.0000000000015957709234668258
    s21_decimal decimal_check = {{0xB65C82E2, 0x38B173, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4200) {
    // -0.001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -626656361.06935169033698303587
    s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
    // 0.0000000000015957709234668258
    s21_decimal decimal_check = {{0xB65C82E2, 0x38B173, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4213) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
    // 0.0047962743037437517769033097
    s21_decimal decimal_check = {{0x53614589, 0x828DE5D3, 0x27AC81, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4214) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
    // -0.0047962743037437517769033097
    s21_decimal decimal_check = {{0x53614589, 0x828DE5D3, 0x27AC81, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4215) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
    // 0.0000000000044237822283935309
    s21_decimal decimal_check = {{0xA2DEEE4D, 0x9D2A10, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4216) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
    // -0.0000000000044237822283935309
    s21_decimal decimal_check = {{0xA2DEEE4D, 0x9D2A10, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4219) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
    // 0.0000000000044237822294235229
    s21_decimal decimal_check = {{0xA37C185D, 0x9D2A10, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4220) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
    // -0.0000000000044237822294235229
    s21_decimal decimal_check = {{0xA37C185D, 0x9D2A10, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4221) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
    // 0.0000000000088475644588470459
    s21_decimal decimal_check = {{0x46F830BB, 0x13A5421, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4222) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
    // -0.0000000000088475644588470459
    s21_decimal decimal_check = {{0x46F830BB, 0x13A5421, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4223) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
    // 0.0000000000022118911149692595
    s21_decimal decimal_check = {{0x51E556B3, 0x4E9508, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4224) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
    // -0.0000000000022118911149692595
    s21_decimal decimal_check = {{0x51E556B3, 0x4E9508, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4225) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
    // 0.0038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4226) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
    // -0.0038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4227) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
    // 0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4228) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
    // -0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4229) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0.0095000000000000000000000005
    s21_decimal decimal_check = {{0xBF000005, 0x51BE0C2E, 0x4E9508, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4230) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -0.0095000000000000000000000005
    s21_decimal decimal_check = {{0xBF000005, 0x51BE0C2E, 0x4E9508, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4231) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4232) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4233) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4234) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4235) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
    // 23750000000000000000000000
    s21_decimal decimal_check = {{0xAFC00000, 0x146F830B, 0x13A542, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4236) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
    // -23750000000000000000000000
    s21_decimal decimal_check = {{0xAFC00000, 0x146F830B, 0x13A542, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4237) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 190000000000000000000000000
    s21_decimal decimal_check = {{0x7E000000, 0xA37C185D, 0x9D2A10, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4238) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -190000000000000000000000000
    s21_decimal decimal_check = {{0x7E000000, 0xA37C185D, 0x9D2A10, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4239) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 19000000000000000000000000
    s21_decimal decimal_check = {{0xF3000000, 0x105935A2, 0xFB768, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4240) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -19000000000000000000000000
    s21_decimal decimal_check = {{0xF3000000, 0x105935A2, 0xFB768, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4241) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4242) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4243) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 0.0023981371518718758884516548
    s21_decimal decimal_check = {{0xA9B0A2C4, 0xC146F2E9, 0x13D640, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4244) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -0.0023981371518718758884516548
    s21_decimal decimal_check = {{0xA9B0A2C4, 0xC146F2E9, 0x13D640, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4245) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 60.000000000000000000000000005
    s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
    // 0.0003166666666666666666666667
    s21_decimal decimal_check = {{0xD32AAAAB, 0x580EDE45, 0x29E91, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4246) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -60.000000000000000000000000005
    s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
    // -0.0003166666666666666666666667
    s21_decimal decimal_check = {{0xD32AAAAB, 0x580EDE45, 0x29E91, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4247) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 0.038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4248) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -0.038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4249) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
    // 19
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4250) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
    // -19
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4251) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.019
    s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4252) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.019
    s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4253) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 39614081266355.540835774234624
    s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
    // 0.0000000000000004796274302627
    s21_decimal decimal_check = {{0xB839DEA3, 0x45C, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4254) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -39614081266355.540835774234624
    s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
    // -0.0000000000000004796274302627
    s21_decimal decimal_check = {{0xB839DEA3, 0x45C, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4255) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 42.94967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
    // 0.000442378222942352294921875
    s21_decimal decimal_check = {{0xEBD5C693, 0x5F1BD9CA, 0x5DAD, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4256) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -42.94967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
    // -0.000442378222942352294921875
    s21_decimal decimal_check = {{0xEBD5C693, 0x5F1BD9CA, 0x5DAD, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4257) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 214748.3648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
    // 0.0000000884756445884704589844
    s21_decimal decimal_check = {{0x3EEF8814, 0xF67653E4, 0x2F, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4258) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -214748.3648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
    // -0.0000000884756445884704589844
    s21_decimal decimal_check = {{0x3EEF8814, 0xF67653E4, 0x2F, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4259) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 42.94967295
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
    // 0.0004423782230453515013319793
    s21_decimal decimal_check = {{0xED73EC71, 0xB71A2AB2, 0x3A8C5, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4260) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -42.94967295
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
    // -0.0004423782230453515013319793
    s21_decimal decimal_check = {{0xED73EC71, 0xB71A2AB2, 0x3A8C5, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4261) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 0.9999
    s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
    // 0.019001900190019001900190019
    s21_decimal decimal_check = {{0xD205C943, 0x12C84847, 0xFB7CF, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4262) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -0.9999
    s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
    // -0.019001900190019001900190019
    s21_decimal decimal_check = {{0xD205C943, 0x12C84847, 0xFB7CF, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4263) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
    // 0.0132713466913605450399593788
    s21_decimal decimal_check = {{0xD395B53C, 0x751100F7, 0x6DC72B, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4264) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
    // -0.0132713466913605450399593788
    s21_decimal decimal_check = {{0xD395B53C, 0x751100F7, 0x6DC72B, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4265) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 8460.288
    s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
    // 0.0000022457864318566932946018
    s21_decimal decimal_check = {{0x36141C62, 0x7179C2DF, 0x4C1, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4266) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -8460.288
    s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
    // -0.0000022457864318566932946018
    s21_decimal decimal_check = {{0x36141C62, 0x7179C2DF, 0x4C1, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4267) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 8.000
    s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
    // 0.002375
    s21_decimal decimal_check = {{0x947, 0x0, 0x0, 0x60000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4268) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -8.000
    s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
    // -0.002375
    s21_decimal decimal_check = {{0x947, 0x0, 0x0, 0x80060000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4269) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.001
    s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
    // 0.018981018981018981018981019
    s21_decimal decimal_check = {{0xFBB5529B, 0x19CB7025, 0xFB363, 0x1B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4270) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.001
    s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
    // -0.018981018981018981018981019
    s21_decimal decimal_check = {{0xFBB5529B, 0x19CB7025, 0xFB363, 0x801B0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4271) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
    // 0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4272) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -1.0
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
    // -0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4273) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 10
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
    // 0.0019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4274) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -10
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
    // -0.0019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4281) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 3656273013.5441854660747245473
    s21_decimal decimal2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x130000}};
    // 0.0000000000051965484879321056
    s21_decimal decimal_check = {{0x4AD017E0, 0xB89E55, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4282) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -3656273013.5441854660747245473
    s21_decimal decimal2 = {{0x3C2CB7A1, 0x3E0B91AF, 0x7623FB44, 0x80130000}};
    // -0.0000000000051965484879321056
    s21_decimal decimal_check = {{0x4AD017E0, 0xB89E55, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4283) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // 626656361.06935169033698303587
    s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x140000}};
    // 0.0000000000303196475458696911
    s21_decimal decimal_check = {{0x88DDB6CF, 0x4352B96, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4284) {
    // 0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x30000}};
    // -626656361.06935169033698303587
    s21_decimal decimal2 = {{0xD8705E63, 0x5DC32547, 0xCA7BCC9C, 0x80140000}};
    // -0.0000000000303196475458696911
    s21_decimal decimal_check = {{0x88DDB6CF, 0x4352B96, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4297) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
    // -0.0047962743037437517769033097
    s21_decimal decimal_check = {{0x53614589, 0x828DE5D3, 0x27AC81, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4298) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -3.9614081257132168796771975168
    s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
    // 0.0047962743037437517769033097
    s21_decimal decimal_check = {{0x53614589, 0x828DE5D3, 0x27AC81, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4299) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
    // -0.0000000000044237822283935309
    s21_decimal decimal_check = {{0xA2DEEE4D, 0x9D2A10, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4300) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -4294967297
    s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
    // 0.0000000000044237822283935309
    s21_decimal decimal_check = {{0xA2DEEE4D, 0x9D2A10, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4303) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
    // -0.0000000000044237822294235229
    s21_decimal decimal_check = {{0xA37C185D, 0x9D2A10, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4304) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -4294967296
    s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
    // 0.0000000000044237822294235229
    s21_decimal decimal_check = {{0xA37C185D, 0x9D2A10, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4305) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
    // -0.0000000000088475644588470459
    s21_decimal decimal_check = {{0x46F830BB, 0x13A5421, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4306) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -2147483648
    s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
    // 0.0000000000088475644588470459
    s21_decimal decimal_check = {{0x46F830BB, 0x13A5421, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4307) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
    // -0.0000000000022118911149692595
    s21_decimal decimal_check = {{0x51E556B3, 0x4E9508, 0x0, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4308) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -8589934591
    s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
    // 0.0000000000022118911149692595
    s21_decimal decimal_check = {{0x51E556B3, 0x4E9508, 0x0, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4309) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
    // -0.0038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4310) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
    // 0.0038
    s21_decimal decimal_check = {{0x26, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4311) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
    // -0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4312) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -2
    s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
    // 0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4313) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -0.0095000000000000000000000005
    s21_decimal decimal_check = {{0xBF000005, 0x51BE0C2E, 0x4E9508, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4314) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0.0095000000000000000000000005
    s21_decimal decimal_check = {{0xBF000005, 0x51BE0C2E, 0x4E9508, 0x1C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4315) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x80040000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4316) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -1.9999999999999999999999999999
    s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0.0095
    s21_decimal decimal_check = {{0x5F, 0x0, 0x0, 0x40000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4317) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4318) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4319) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
    // -23750000000000000000000000
    s21_decimal decimal_check = {{0xAFC00000, 0x146F830B, 0x13A542, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4320) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000008
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
    // 23750000000000000000000000
    s21_decimal decimal_check = {{0xAFC00000, 0x146F830B, 0x13A542, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4321) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -190000000000000000000000000
    s21_decimal decimal_check = {{0x7E000000, 0xA37C185D, 0x9D2A10, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4322) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 190000000000000000000000000
    s21_decimal decimal_check = {{0x7E000000, 0xA37C185D, 0x9D2A10, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4323) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -19000000000000000000000000
    s21_decimal decimal_check = {{0xF3000000, 0x105935A2, 0xFB768, 0x80000000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4324) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 19000000000000000000000000
    s21_decimal decimal_check = {{0xF3000000, 0x105935A2, 0xFB768, 0x0}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4325) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x80030000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4326) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0.019
    s21_decimal decimal_check = {{0x13, 0x0, 0x0, 0x30000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_div4327) {
    // -0.019
    s21_decimal decimal1 = {{0x13, 0x0, 0x0, 0x80030000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // -0.0023981371518718758884516548
    s21_decimal decimal_check = {{0xA9B0A2C4, 0xC146F2E9, 0x13D640, 0x801C0000}};

    test_div(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2597) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2598) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2599) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2600) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2601) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2602) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2603) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2604) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2605) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2606) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2607) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2608) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2609) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2610) {
    // -0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2611) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2612) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2613) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2614) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2615) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2616) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2617) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2618) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2619) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2620) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2621) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2622) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2623) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2624) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2625) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2626) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2627) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2628) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2629) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2630) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2631) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 0.0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2632) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -0.0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2633) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2634) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2635) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2636) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2637) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2638) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2639) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2640) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2641) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2642) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2643) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2644) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2645) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2646) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2647) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2648) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2649) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2650) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2651) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x100000}};
    // 0.0000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x100000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2652) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x80100000}};
    // -0.0000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80100000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2653) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x100000}};
    // 0.0000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x100000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2654) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80100000}};
    // -0.0000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80100000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2655) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2656) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2657) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2658) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2659) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2660) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2661) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2662) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2663) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2664) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2665) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2666) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2667) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // -7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2668) {
    // 0
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
    // 7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2669) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2670) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2671) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2672) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2673) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2674) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2675) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2676) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2677) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2678) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2679) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2680) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2681) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2682) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2683) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2684) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2685) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2686) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2687) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2688) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2689) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2690) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2691) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2692) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2693) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2694) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2695) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2696) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2697) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2698) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2699) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2700) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2701) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2702) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2703) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2704) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2705) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2706) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2707) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2708) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2709) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x100000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2710) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x80100000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2711) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x100000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2712) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80100000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2713) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2714) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2715) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2716) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2717) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2718) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2719) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2720) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2721) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2722) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2723) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2724) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2725) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // -7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2726) {
    // -0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2727) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2728) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2729) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2730) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2731) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2732) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2733) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2734) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2735) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2736) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2737) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2738) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2739) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2740) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2741) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2742) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2743) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2744) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2745) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2746) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2747) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2748) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2749) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2750) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2751) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2752) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2753) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2754) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2755) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2756) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2757) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2758) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2759) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2760) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2761) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2762) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2763) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2764) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2765) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2766) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2767) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x100000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2768) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000025
    s21_decimal decimal2 = {{0x19, 0x0, 0x0, 0x80100000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2769) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x100000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2770) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000005
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80100000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2771) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2772) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2773) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2774) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2775) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2776) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2777) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2778) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2779) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0xE0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2780) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -400435217312910.10886274103770
    s21_decimal decimal2 = {{0x4F4FB9DA, 0xC076B0FB, 0x8163398E, 0x800E0000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2781) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x80090000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2782) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 57476540395758265626.742442133
    s21_decimal decimal2 = {{0xD42B4895, 0x339BF28D, 0xB9B77ADA, 0x90000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2783) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x80180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2784) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 7055.820576069728775806815669
    s21_decimal decimal2 = {{0x69168DB5, 0xDCB4F4B1, 0x16CC701F, 0x180000}};
    // 0
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2785) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // 2.6409387504754779197847983445
    s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2786) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // -2.6409387504754779197847983445
    s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2787) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // 2.6409387498605864508043122005
    s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2788) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // -2.6409387498605864508043122005
    s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2789) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // 0.0000000006148914691236517205
    s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2790) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // -0.0000000006148914691236517205
    s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2791) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // 0.0000000006148914689804861440
    s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2792) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // -0.0000000006148914689804861440
    s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2793) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // 0.0000000000000000001431655765
    s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2794) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000001431655765
    s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2795) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // 0.0000000000000000000026409388
    s21_decimal decimal_check = {{0x192F9AC, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2796) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // -0.0000000000000000000026409388
    s21_decimal decimal_check = {{0x192F9AC, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2797) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // 0.0000000000000000000026409387
    s21_decimal decimal_check = {{0x192F9AB, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2798) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // -0.0000000000000000000026409387
    s21_decimal decimal_check = {{0x192F9AB, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2799) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000026409387
    s21_decimal decimal_check = {{0x192F9AB, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2800) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000026409387
    s21_decimal decimal_check = {{0x192F9AB, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2801) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // 0.0000000000000000000000000002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2802) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // -0.0000000000000000000000000002
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2803) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2804) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2809) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2810) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2811) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2812) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2813) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000008
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2814) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000008
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2815) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2816) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.9999999999999999999999999999
    s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2817) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 7.9228162514264337593543950335
    s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2818) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2819) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 0.0000000000000000000000000008
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2820) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -0.0000000000000000000000000008
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2821) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2822) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x801C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2823) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
    // 0.0000000000000792281625142643
    s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x1C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2824) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -792281625142643.37593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
    // -0.0000000000000792281625142643
    s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}

START_TEST(test_mul2829) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

    test_mul(decimal1, decimal2, decimal_check);
}
START_TEST(test_sub2984) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // 8.000000000000000000000000000
    s21_decimal check = {{0x40000000, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2985) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // -3.6336660283201536000000000000
    s21_decimal check = {{0x89800000, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2986) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // 3.6336660283201536000000000000
    s21_decimal check = {{0x89800000, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2987) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2988) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2989) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2990) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2991) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2992) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2993) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2994) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000010
    s21_decimal check = {{0xA, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2995) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 646.33673839575124685661598885
    s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
    // -646.33673839575124685661598885
    s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2996) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -646.33673839575124685661598885
    s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
    // 646.33673839575124685661598885
    s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2997) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -24246937143470783.81744120110
    s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
    // 24246937143470783.817441201100
    s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2998) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 24246937143470783.81744120110
    s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
    // -24246937143470783.817441201100
    s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub2999) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 60233732531769558296976156804
    s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
    // -60233732531769558296976156804
    s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3000) {
    // 0.0000000000000000000000000000
    s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // -60233732531769558296976156804
    s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
    // 60233732531769558296976156804
    s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3001) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3002) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3003) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3004) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3005) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3006) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3007) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // -7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3008) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // 7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3009) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3010) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3011) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3012) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3013) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // -0.9999999999999999999999999999
    s21_decimal check = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3014) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 1.0000000000000000000000000001
    s21_decimal check = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3015) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -0.4999999999999999999999999999
    s21_decimal check = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3016) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 0.5000000000000000000000000001
    s21_decimal check = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3017) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -0.4999999999999999999999999998
    s21_decimal check = {{0x87FFFFFE, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3018) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0.5000000000000000000000000000
    s21_decimal check = {{0x88000000, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3019) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -0.5000000000000000000000000000
    s21_decimal check = {{0x88000000, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3020) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0.5000000000000000000000000002
    s21_decimal check = {{0x88000002, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3021) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -1.9999999999999999999999998999
    s21_decimal check = {{0x1FFFFC17, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3022) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 1.9999999999999999999999999001
    s21_decimal check = {{0x1FFFFC19, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3023) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.0000000000000000000000000000
    s21_decimal check = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3024) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 1.0000000000000000000000000002
    s21_decimal check = {{0x10000002, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3025) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // -26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3026) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // 26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3027) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // -26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3028) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // 26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3029) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // -6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3030) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3031) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // -6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3032) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3033) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3034) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3035) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // -26409387.504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3036) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // 26409387.504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3037) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
    // -26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3038) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387.498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
    // 26409387.498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3039) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
    // -26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x80150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3040) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -26409387
    s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
    // 26409387.000000000000000000000
    s21_decimal check = {{0x54E00000, 0xF8741FF5, 0x55555539, 0x150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3041) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // -7.9228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3042) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -7.9228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // 7.922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x1B0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3043) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
    // -8.000000000000000000000000000
    s21_decimal check = {{0x40000000, 0xFE8401E7, 0x19D971E4, 0x801B0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3044) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -8
    s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
    // 8.000000000000000000000000000
    s21_decimal check = {{0x40000000, 0xFE8401E7, 0x19D971E4, 0x1B0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3045) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
    // -3.6336660283201535999999999999
    s21_decimal check = {{0x897FFFFF, 0xFEE8FB1C, 0x7568FB1C, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3046) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -3.6336660283201536
    s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
    // 3.6336660283201536000000000001
    s21_decimal check = {{0x89800001, 0xFEE8FB1C, 0x7568FB1C, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3047) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
    // 0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3048) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
    // 0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3049) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3050) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal check = {{0x1, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3051) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000000
    s21_decimal check = {{0x0, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3052) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000001
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000002
    s21_decimal check = {{0x2, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3053) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000009
    s21_decimal check = {{0x9, 0x0, 0x0, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3054) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -0.0000000000000000000000000010
    s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
    // 0.0000000000000000000000000011
    s21_decimal check = {{0xB, 0x0, 0x0, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3055) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 646.33673839575124685661598885
    s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};
    // -646.33673839575124685661598885
    s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3056) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -646.33673839575124685661598885
    s21_decimal decimal2 = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x801A0000}};
    // 646.33673839575124685661598885
    s21_decimal check = {{0xB2C6F4A5, 0xA11CA39F, 0xD0D7B8CF, 0x1A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3057) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -24246937143470783.81744120110
    s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0x800B0000}};
    // 24246937143470783.817441201100
    s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0xC0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3058) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 24246937143470783.81744120110
    s21_decimal decimal2 = {{0x11B612E, 0xA2A675B4, 0x7D5A8DD, 0xB0000}};
    // -24246937143470783.817441201100
    s21_decimal check = {{0xB11CBCC, 0x5A809908, 0x4E5898A8, 0x800C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3059) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // 60233732531769558296976156804
    s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};
    // -60233732531769558296976156804
    s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3060) {
    // 0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
    // -60233732531769558296976156804
    s21_decimal decimal2 = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x80000000}};
    // 60233732531769558296976156804
    s21_decimal check = {{0x4C23E884, 0x648C702C, 0xC2A02CFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3061) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3062) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -79228162514264337593543950335
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3063) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3064) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -79228162514264337593543950334
    s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3065) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3066) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395033
    s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395033.0
    s21_decimal check = {{0xFFFFFFFA, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3067) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
    // -7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3068) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395033.5
    s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
    // 7922816251426433759354395033.5
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3069) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3070) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395034
    s21_decimal check = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3071) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // -7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3072) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x80000000}};
    // 7922816251426433759354395035
    s21_decimal check = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3073) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // -1.0000000000000000000000000001
    s21_decimal check = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3074) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 0.9999999999999999999999999999
    s21_decimal check = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3075) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // -0.5000000000000000000000000001
    s21_decimal check = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3076) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 0.4999999999999999999999999999
    s21_decimal check = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3077) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -0.5000000000000000000000000000
    s21_decimal check = {{0x88000000, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3078) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0.4999999999999999999999999998
    s21_decimal check = {{0x87FFFFFE, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3079) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // -0.5000000000000000000000000002
    s21_decimal check = {{0x88000002, 0x1F128130, 0x1027E72F, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3080) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x801C0000}};
    // 0.5000000000000000000000000000
    s21_decimal check = {{0x88000000, 0x1F128130, 0x1027E72F, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3081) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
    // -1.9999999999999999999999999001
    s21_decimal check = {{0x1FFFFC19, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3082) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -1.9999999999999999999999999000
    s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
    // 1.9999999999999999999999998999
    s21_decimal check = {{0x1FFFFC17, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3083) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
    // -1.0000000000000000000000000002
    s21_decimal check = {{0x10000002, 0x3E250261, 0x204FCE5E, 0x801C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3084) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -1.0000000000000000000000000001
    s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
    // 1.0000000000000000000000000000
    s21_decimal check = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x1C0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3085) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
    // -26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3086) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -26409387504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
    // 26409387504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3087) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
    // -26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3088) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -26409387498605864508043122005
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
    // 26409387498605864508043122005
    s21_decimal check = {{0x55555555, 0x0, 0x55555555, 0x0}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3089) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
    // -6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0x800A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3090) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -6148914691236517205
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
    // 6148914691236517205.0000000000
    s21_decimal check = {{0x8EA6B400, 0x55555554, 0xC6AEA155, 0xA0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3091) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
    // -6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0x800A0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3092) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -6148914689804861440
    s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
    // 6148914689804861440.0000000000
    s21_decimal check = {{0x0, 0x8EA6B400, 0xC6AEA154, 0xA0000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3093) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
    // -1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x80130000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3094) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -1431655765
    s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
    // 1431655765.0000000000000000000
    s21_decimal check = {{0xD2080000, 0x550AF453, 0x2E426101, 0x130000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3095) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // 26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};
    // -26409387.504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};

    test_sub(decimal1, decimal2, check);
}

START_TEST(test_sub3096) {
    // -0.0000000000000000000000000001
    s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
    // -26409387.504754779197847983445
    s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80150000}};
    // 26409387.504754779197847983445
    s21_decimal check = {{0x55555555, 0x55555555, 0x55555555, 0x150000}};

    test_sub(decimal1, decimal2, check);
}



Suite *add_suite9(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("add9");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_add3124);
    tcase_add_test(tc_core, test_add3125);
    tcase_add_test(tc_core, test_add3126);
    tcase_add_test(tc_core, test_add3127);
    tcase_add_test(tc_core, test_add3128);
    tcase_add_test(tc_core, test_add3129);
    tcase_add_test(tc_core, test_add3130);
    tcase_add_test(tc_core, test_add3131);
    tcase_add_test(tc_core, test_add3132);
    tcase_add_test(tc_core, test_add3133);
    tcase_add_test(tc_core, test_add3134);
    tcase_add_test(tc_core, test_add3135);
    tcase_add_test(tc_core, test_add3136);
    tcase_add_test(tc_core, test_add3137);
    tcase_add_test(tc_core, test_add3138);
    tcase_add_test(tc_core, test_add3139);
    tcase_add_test(tc_core, test_add3140);
    tcase_add_test(tc_core, test_add3141);
    tcase_add_test(tc_core, test_add3142);
    tcase_add_test(tc_core, test_add3143);
    tcase_add_test(tc_core, test_add3144);
    tcase_add_test(tc_core, test_add3145);
    tcase_add_test(tc_core, test_add3146);
    tcase_add_test(tc_core, test_add3147);
    tcase_add_test(tc_core, test_add3148);
    tcase_add_test(tc_core, test_add3149);
    tcase_add_test(tc_core, test_add3150);
    tcase_add_test(tc_core, test_add3151);
    tcase_add_test(tc_core, test_add3152);
    tcase_add_test(tc_core, test_add3153);
    tcase_add_test(tc_core, test_add3154);
    tcase_add_test(tc_core, test_add3155);
    tcase_add_test(tc_core, test_add3156);
    tcase_add_test(tc_core, test_add3157);
    tcase_add_test(tc_core, test_add3158);
    tcase_add_test(tc_core, test_add3159);
    tcase_add_test(tc_core, test_add3160);
    tcase_add_test(tc_core, test_add3161);
    tcase_add_test(tc_core, test_add3162);
    tcase_add_test(tc_core, test_add3163);
    tcase_add_test(tc_core, test_add3164);
    tcase_add_test(tc_core, test_add3165);
    tcase_add_test(tc_core, test_add3166);
    tcase_add_test(tc_core, test_add3167);
    tcase_add_test(tc_core, test_add3168);
    tcase_add_test(tc_core, test_add3169);
    tcase_add_test(tc_core, test_add3170);
    tcase_add_test(tc_core, test_add3171);
    tcase_add_test(tc_core, test_add3172);
    tcase_add_test(tc_core, test_add3173);
    tcase_add_test(tc_core, test_add3174);
    tcase_add_test(tc_core, test_add3175);
    tcase_add_test(tc_core, test_add3176);
    tcase_add_test(tc_core, test_add3177);
    tcase_add_test(tc_core, test_add3178);
    tcase_add_test(tc_core, test_add3179);
    tcase_add_test(tc_core, test_add3180);
    tcase_add_test(tc_core, test_add3181);
    tcase_add_test(tc_core, test_add3182);
    tcase_add_test(tc_core, test_add3183);
    tcase_add_test(tc_core, test_add3184);
    tcase_add_test(tc_core, test_add3185);
    tcase_add_test(tc_core, test_add3186);
    tcase_add_test(tc_core, test_add3187);
    tcase_add_test(tc_core, test_add3188);
    tcase_add_test(tc_core, test_add3189);
    tcase_add_test(tc_core, test_add3190);
    tcase_add_test(tc_core, test_add3191);
    tcase_add_test(tc_core, test_add3192);
    tcase_add_test(tc_core, test_add3193);
    tcase_add_test(tc_core, test_add3194);
    tcase_add_test(tc_core, test_add3195);
    tcase_add_test(tc_core, test_add3196);
    tcase_add_test(tc_core, test_add3197);
    tcase_add_test(tc_core, test_add3198);
    tcase_add_test(tc_core, test_add3199);
    tcase_add_test(tc_core, test_add3200);
    tcase_add_test(tc_core, test_add3201);
    tcase_add_test(tc_core, test_add3202);
    tcase_add_test(tc_core, test_add3203);
    tcase_add_test(tc_core, test_add3204);
    tcase_add_test(tc_core, test_add3205);
    tcase_add_test(tc_core, test_add3206);
    tcase_add_test(tc_core, test_add3207);
    tcase_add_test(tc_core, test_add3208);
    tcase_add_test(tc_core, test_add3209);
    tcase_add_test(tc_core, test_add3210);
    tcase_add_test(tc_core, test_add3211);
    tcase_add_test(tc_core, test_add3212);
    tcase_add_test(tc_core, test_add3213);
    tcase_add_test(tc_core, test_add3214);
    tcase_add_test(tc_core, test_add3215);
    tcase_add_test(tc_core, test_add3216);
    tcase_add_test(tc_core, test_add3217);
    tcase_add_test(tc_core, test_add3218);
    tcase_add_test(tc_core, test_add3219);
    tcase_add_test(tc_core, test_add3220);
    tcase_add_test(tc_core, test_add3221);
    tcase_add_test(tc_core, test_add3222);
    tcase_add_test(tc_core, test_add3223);
    tcase_add_test(tc_core, test_add3224);
    tcase_add_test(tc_core, test_add3225);
    tcase_add_test(tc_core, test_add3226);
    tcase_add_test(tc_core, test_add3227);
    tcase_add_test(tc_core, test_add3228);
    tcase_add_test(tc_core, test_add3229);
    tcase_add_test(tc_core, test_add3230);
    tcase_add_test(tc_core, test_add3231);
    tcase_add_test(tc_core, test_add3232);
    tcase_add_test(tc_core, test_add3233);
    tcase_add_test(tc_core, test_add3234);
    tcase_add_test(tc_core, test_add3235);
    tcase_add_test(tc_core, test_add3236);
    tcase_add_test(tc_core, test_add3237);
    tcase_add_test(tc_core, test_add3238);
    tcase_add_test(tc_core, test_add3239);
    tcase_add_test(tc_core, test_add3240);
    tcase_add_test(tc_core, test_add3241);
    tcase_add_test(tc_core, test_add3243);
    tcase_add_test(tc_core, test_add3245);
    tcase_add_test(tc_core, test_add3246);
    tcase_add_test(tc_core, test_add3247);
    tcase_add_test(tc_core, test_add3248);
    tcase_add_test(tc_core, test_add3249);
    tcase_add_test(tc_core, test_add3250);
    tcase_add_test(tc_core, test_add3251);
    tcase_add_test(tc_core, test_add3252);
    tcase_add_test(tc_core, test_add3253);
    tcase_add_test(tc_core, test_add3254);
    tcase_add_test(tc_core, test_add3255);
    tcase_add_test(tc_core, test_add3256);
    tcase_add_test(tc_core, test_add3257);
    tcase_add_test(tc_core, test_add3258);
    tcase_add_test(tc_core, test_add3259);
    tcase_add_test(tc_core, test_add3260);
    tcase_add_test(tc_core, test_add3261);
    tcase_add_test(tc_core, test_add3262);
    tcase_add_test(tc_core, test_add3263);
    tcase_add_test(tc_core, test_add3264);
    tcase_add_test(tc_core, test_add3265);
    tcase_add_test(tc_core, test_add3266);
    tcase_add_test(tc_core, test_add3267);
    tcase_add_test(tc_core, test_add3268);
    tcase_add_test(tc_core, test_add3269);
    tcase_add_test(tc_core, test_add3270);
    tcase_add_test(tc_core, test_add3271);
    tcase_add_test(tc_core, test_add3272);
    tcase_add_test(tc_core, test_add3273);
    tcase_add_test(tc_core, test_add3274);
    tcase_add_test(tc_core, test_add3275);
    tcase_add_test(tc_core, test_add3276);
    tcase_add_test(tc_core, test_add3277);
    tcase_add_test(tc_core, test_add3278);
    tcase_add_test(tc_core, test_add3279);
    tcase_add_test(tc_core, test_add3280);
    tcase_add_test(tc_core, test_add3281);
    tcase_add_test(tc_core, test_add3282);
    tcase_add_test(tc_core, test_add3283);
    tcase_add_test(tc_core, test_add3284);
    tcase_add_test(tc_core, test_add3285);
    tcase_add_test(tc_core, test_add3286);
    tcase_add_test(tc_core, test_add3287);
    tcase_add_test(tc_core, test_add3288);
    tcase_add_test(tc_core, test_add3289);
    tcase_add_test(tc_core, test_add3290);
    tcase_add_test(tc_core, test_add3291);
    tcase_add_test(tc_core, test_add3292);
    tcase_add_test(tc_core, test_add3293);
    tcase_add_test(tc_core, test_add3294);
    tcase_add_test(tc_core, test_add3295);
    tcase_add_test(tc_core, test_add3296);
    tcase_add_test(tc_core, test_add3297);
    tcase_add_test(tc_core, test_add3298);
    tcase_add_test(tc_core, test_add3299);
    tcase_add_test(tc_core, test_add3300);
    tcase_add_test(tc_core, test_add3302);
    tcase_add_test(tc_core, test_add3304);
    tcase_add_test(tc_core, test_add3305);
    tcase_add_test(tc_core, test_add3306);
    tcase_add_test(tc_core, test_add3307);
    tcase_add_test(tc_core, test_add3308);
    tcase_add_test(tc_core, test_add3309);
    tcase_add_test(tc_core, test_add3310);
    tcase_add_test(tc_core, test_add3311);
    tcase_add_test(tc_core, test_add3312);
    tcase_add_test(tc_core, test_add3313);
    tcase_add_test(tc_core, test_add3314);
    tcase_add_test(tc_core, test_add3315);
    tcase_add_test(tc_core, test_add3316);
    tcase_add_test(tc_core, test_add3317);
    tcase_add_test(tc_core, test_add3318);
    tcase_add_test(tc_core, test_add3319);
    tcase_add_test(tc_core, test_add3320);
    tcase_add_test(tc_core, test_add3321);
    tcase_add_test(tc_core, test_add3322);
    tcase_add_test(tc_core, test_add3323);
    tcase_add_test(tc_core, test_add3324);
    tcase_add_test(tc_core, test_add3325);
    tcase_add_test(tc_core, test_add3326);
    tcase_add_test(tc_core, test_add3327);
    tcase_add_test(tc_core, test_add3328);
    tcase_add_test(tc_core, test_add3329);
    tcase_add_test(tc_core, test_add3330);
    tcase_add_test(tc_core, test_add3331);
    tcase_add_test(tc_core, test_add3332);
    tcase_add_test(tc_core, test_add3333);
    tcase_add_test(tc_core, test_add3334);
    tcase_add_test(tc_core, test_add3335);
    tcase_add_test(tc_core, test_add3336);
    tcase_add_test(tc_core, test_add3337);
    tcase_add_test(tc_core, test_add3338);
    tcase_add_test(tc_core, test_add3339);
    tcase_add_test(tc_core, test_add3340);
    tcase_add_test(tc_core, test_add3341);
    tcase_add_test(tc_core, test_add3342);
    tcase_add_test(tc_core, test_add3343);
    tcase_add_test(tc_core, test_add3344);
    tcase_add_test(tc_core, test_add3345);
    tcase_add_test(tc_core, test_add3346);
    tcase_add_test(tc_core, test_add3347);
    tcase_add_test(tc_core, test_add3348);
    tcase_add_test(tc_core, test_add3349);
    tcase_add_test(tc_core, test_add3350);
    tcase_add_test(tc_core, test_add3351);
    tcase_add_test(tc_core, test_add3352);
    tcase_add_test(tc_core, test_add3353);
    tcase_add_test(tc_core, test_add3354);
    tcase_add_test(tc_core, test_add3355);
    tcase_add_test(tc_core, test_add3356);
    tcase_add_test(tc_core, test_add3357);
    tcase_add_test(tc_core, test_add3358);
    tcase_add_test(tc_core, test_add3359);
    tcase_add_test(tc_core, test_add3360);
    tcase_add_test(tc_core, test_add3361);
    tcase_add_test(tc_core, test_add3363);
    tcase_add_test(tc_core, test_add3365);
    tcase_add_test(tc_core, test_add3366);
    tcase_add_test(tc_core, test_add3367);
    tcase_add_test(tc_core, test_add3368);
    tcase_add_test(tc_core, test_add3369);
    tcase_add_test(tc_core, test_add3370);
    tcase_add_test(tc_core, test_add3371);
    tcase_add_test(tc_core, test_add3372);
    tcase_add_test(tc_core, test_add3373);
    tcase_add_test(tc_core, test_add3374);
    tcase_add_test(tc_core, test_add3375);
    tcase_add_test(tc_core, test_add3376);
    tcase_add_test(tc_core, test_add3377);
    tcase_add_test(tc_core, test_add3378);
    tcase_add_test(tc_core, test_add3379);
    tcase_add_test(tc_core, test_add3380);
    tcase_add_test(tc_core, test_add3381);
    tcase_add_test(tc_core, test_add3382);
    tcase_add_test(tc_core, test_add3383);
    tcase_add_test(tc_core, test_add3384);
    tcase_add_test(tc_core, test_add3385);
    tcase_add_test(tc_core, test_add3386);
    tcase_add_test(tc_core, test_add3387);
    tcase_add_test(tc_core, test_add3388);
    tcase_add_test(tc_core, test_add3389);
    tcase_add_test(tc_core, test_add3390);
    tcase_add_test(tc_core, test_add3391);
    tcase_add_test(tc_core, test_add3392);
    tcase_add_test(tc_core, test_add3393);
    tcase_add_test(tc_core, test_add3394);
    tcase_add_test(tc_core, test_add3395);
    tcase_add_test(tc_core, test_add3396);
    tcase_add_test(tc_core, test_add3397);
    tcase_add_test(tc_core, test_add3398);
    tcase_add_test(tc_core, test_add3399);
    tcase_add_test(tc_core, test_add3400);
    tcase_add_test(tc_core, test_add3401);
    tcase_add_test(tc_core, test_add3402);
    tcase_add_test(tc_core, test_add3403);
    tcase_add_test(tc_core, test_add3404);

suite_add_tcase(s, tc_core);
    return s;
}


Suite *div_suite9(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("div9");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_div4129);
    tcase_add_test(tc_core, test_div4130);
    tcase_add_test(tc_core, test_div4131);
    tcase_add_test(tc_core, test_div4132);
    tcase_add_test(tc_core, test_div4135);
    tcase_add_test(tc_core, test_div4136);
    tcase_add_test(tc_core, test_div4137);
    tcase_add_test(tc_core, test_div4138);
    tcase_add_test(tc_core, test_div4139);
    tcase_add_test(tc_core, test_div4140);
    tcase_add_test(tc_core, test_div4141);
    tcase_add_test(tc_core, test_div4142);
    tcase_add_test(tc_core, test_div4143);
    tcase_add_test(tc_core, test_div4144);
    tcase_add_test(tc_core, test_div4145);
    tcase_add_test(tc_core, test_div4146);
    tcase_add_test(tc_core, test_div4147);
    tcase_add_test(tc_core, test_div4148);
    tcase_add_test(tc_core, test_div4149);
    tcase_add_test(tc_core, test_div4150);
    tcase_add_test(tc_core, test_div4151);
    tcase_add_test(tc_core, test_div4152);
    tcase_add_test(tc_core, test_div4153);
    tcase_add_test(tc_core, test_div4154);
    tcase_add_test(tc_core, test_div4155);
    tcase_add_test(tc_core, test_div4156);
    tcase_add_test(tc_core, test_div4157);
    tcase_add_test(tc_core, test_div4158);
    tcase_add_test(tc_core, test_div4159);
    tcase_add_test(tc_core, test_div4160);
    tcase_add_test(tc_core, test_div4161);
    tcase_add_test(tc_core, test_div4162);
    tcase_add_test(tc_core, test_div4163);
    tcase_add_test(tc_core, test_div4164);
    tcase_add_test(tc_core, test_div4165);
    tcase_add_test(tc_core, test_div4166);
    tcase_add_test(tc_core, test_div4167);
    tcase_add_test(tc_core, test_div4168);
    tcase_add_test(tc_core, test_div4169);
    tcase_add_test(tc_core, test_div4170);
    tcase_add_test(tc_core, test_div4171);
    tcase_add_test(tc_core, test_div4172);
    tcase_add_test(tc_core, test_div4173);
    tcase_add_test(tc_core, test_div4174);
    tcase_add_test(tc_core, test_div4175);
    tcase_add_test(tc_core, test_div4176);
    tcase_add_test(tc_core, test_div4177);
    tcase_add_test(tc_core, test_div4178);
    tcase_add_test(tc_core, test_div4179);
    tcase_add_test(tc_core, test_div4180);
    tcase_add_test(tc_core, test_div4181);
    tcase_add_test(tc_core, test_div4182);
    tcase_add_test(tc_core, test_div4183);
    tcase_add_test(tc_core, test_div4184);
    tcase_add_test(tc_core, test_div4185);
    tcase_add_test(tc_core, test_div4186);
    tcase_add_test(tc_core, test_div4187);
    tcase_add_test(tc_core, test_div4188);
    tcase_add_test(tc_core, test_div4189);
    tcase_add_test(tc_core, test_div4190);
    tcase_add_test(tc_core, test_div4197);
    tcase_add_test(tc_core, test_div4198);
    tcase_add_test(tc_core, test_div4199);
    tcase_add_test(tc_core, test_div4200);
    tcase_add_test(tc_core, test_div4213);
    tcase_add_test(tc_core, test_div4214);
    tcase_add_test(tc_core, test_div4215);
    tcase_add_test(tc_core, test_div4216);
    tcase_add_test(tc_core, test_div4219);
    tcase_add_test(tc_core, test_div4220);
    tcase_add_test(tc_core, test_div4221);
    tcase_add_test(tc_core, test_div4222);
    tcase_add_test(tc_core, test_div4223);
    tcase_add_test(tc_core, test_div4224);
    tcase_add_test(tc_core, test_div4225);
    tcase_add_test(tc_core, test_div4226);
    tcase_add_test(tc_core, test_div4227);
    tcase_add_test(tc_core, test_div4228);
    tcase_add_test(tc_core, test_div4229);
    tcase_add_test(tc_core, test_div4230);
    tcase_add_test(tc_core, test_div4231);
    tcase_add_test(tc_core, test_div4232);
    tcase_add_test(tc_core, test_div4233);
    tcase_add_test(tc_core, test_div4234);
    tcase_add_test(tc_core, test_div4235);
    tcase_add_test(tc_core, test_div4236);
    tcase_add_test(tc_core, test_div4237);
    tcase_add_test(tc_core, test_div4238);
    tcase_add_test(tc_core, test_div4239);
    tcase_add_test(tc_core, test_div4240);
    tcase_add_test(tc_core, test_div4241);
    tcase_add_test(tc_core, test_div4242);
    tcase_add_test(tc_core, test_div4243);
    tcase_add_test(tc_core, test_div4244);
    tcase_add_test(tc_core, test_div4245);
    tcase_add_test(tc_core, test_div4246);
    tcase_add_test(tc_core, test_div4247);
    tcase_add_test(tc_core, test_div4248);
    tcase_add_test(tc_core, test_div4249);
    tcase_add_test(tc_core, test_div4250);
    tcase_add_test(tc_core, test_div4251);
    tcase_add_test(tc_core, test_div4252);
    tcase_add_test(tc_core, test_div4253);
    tcase_add_test(tc_core, test_div4254);
    tcase_add_test(tc_core, test_div4255);
    tcase_add_test(tc_core, test_div4256);
    tcase_add_test(tc_core, test_div4257);
    tcase_add_test(tc_core, test_div4258);
    tcase_add_test(tc_core, test_div4259);
    tcase_add_test(tc_core, test_div4260);
    tcase_add_test(tc_core, test_div4261);
    tcase_add_test(tc_core, test_div4262);
    tcase_add_test(tc_core, test_div4263);
    tcase_add_test(tc_core, test_div4264);
    tcase_add_test(tc_core, test_div4265);
    tcase_add_test(tc_core, test_div4266);
    tcase_add_test(tc_core, test_div4267);
    tcase_add_test(tc_core, test_div4268);
    tcase_add_test(tc_core, test_div4269);
    tcase_add_test(tc_core, test_div4270);
    tcase_add_test(tc_core, test_div4271);
    tcase_add_test(tc_core, test_div4272);
    tcase_add_test(tc_core, test_div4273);
    tcase_add_test(tc_core, test_div4274);
    tcase_add_test(tc_core, test_div4281);
    tcase_add_test(tc_core, test_div4282);
    tcase_add_test(tc_core, test_div4283);
    tcase_add_test(tc_core, test_div4284);
    tcase_add_test(tc_core, test_div4297);
    tcase_add_test(tc_core, test_div4298);
    tcase_add_test(tc_core, test_div4299);
    tcase_add_test(tc_core, test_div4300);
    tcase_add_test(tc_core, test_div4303);
    tcase_add_test(tc_core, test_div4304);
    tcase_add_test(tc_core, test_div4305);
    tcase_add_test(tc_core, test_div4306);
    tcase_add_test(tc_core, test_div4307);
    tcase_add_test(tc_core, test_div4308);
    tcase_add_test(tc_core, test_div4309);
    tcase_add_test(tc_core, test_div4310);
    tcase_add_test(tc_core, test_div4311);
    tcase_add_test(tc_core, test_div4312);
    tcase_add_test(tc_core, test_div4313);
    tcase_add_test(tc_core, test_div4314);
    tcase_add_test(tc_core, test_div4315);
    tcase_add_test(tc_core, test_div4316);
    tcase_add_test(tc_core, test_div4317);
    tcase_add_test(tc_core, test_div4318);
    tcase_add_test(tc_core, test_div4319);
    tcase_add_test(tc_core, test_div4320);
    tcase_add_test(tc_core, test_div4321);
    tcase_add_test(tc_core, test_div4322);
    tcase_add_test(tc_core, test_div4323);
    tcase_add_test(tc_core, test_div4324);
    tcase_add_test(tc_core, test_div4325);
    tcase_add_test(tc_core, test_div4326);
    tcase_add_test(tc_core, test_div4327);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite *mul_suite1(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("mul9");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_mul2597);
    tcase_add_test(tc_core, test_mul2598);
    tcase_add_test(tc_core, test_mul2599);
    tcase_add_test(tc_core, test_mul2600);
    tcase_add_test(tc_core, test_mul2601);
    tcase_add_test(tc_core, test_mul2602);
    tcase_add_test(tc_core, test_mul2603);
    tcase_add_test(tc_core, test_mul2604);
    tcase_add_test(tc_core, test_mul2605);
    tcase_add_test(tc_core, test_mul2606);
    tcase_add_test(tc_core, test_mul2607);
    tcase_add_test(tc_core, test_mul2608);
    tcase_add_test(tc_core, test_mul2609);
    tcase_add_test(tc_core, test_mul2610);
    tcase_add_test(tc_core, test_mul2611);
    tcase_add_test(tc_core, test_mul2612);
    tcase_add_test(tc_core, test_mul2613);
    tcase_add_test(tc_core, test_mul2614);
    tcase_add_test(tc_core, test_mul2615);
    tcase_add_test(tc_core, test_mul2616);
    tcase_add_test(tc_core, test_mul2617);
    tcase_add_test(tc_core, test_mul2618);
    tcase_add_test(tc_core, test_mul2619);
    tcase_add_test(tc_core, test_mul2620);
    tcase_add_test(tc_core, test_mul2621);
    tcase_add_test(tc_core, test_mul2622);
    tcase_add_test(tc_core, test_mul2623);
    tcase_add_test(tc_core, test_mul2624);
    tcase_add_test(tc_core, test_mul2625);
    tcase_add_test(tc_core, test_mul2626);
    tcase_add_test(tc_core, test_mul2627);
    tcase_add_test(tc_core, test_mul2628);
    tcase_add_test(tc_core, test_mul2629);
    tcase_add_test(tc_core, test_mul2630);
    tcase_add_test(tc_core, test_mul2631);
    tcase_add_test(tc_core, test_mul2632);
    tcase_add_test(tc_core, test_mul2633);
    tcase_add_test(tc_core, test_mul2634);
    tcase_add_test(tc_core, test_mul2635);
    tcase_add_test(tc_core, test_mul2636);
    tcase_add_test(tc_core, test_mul2637);
    tcase_add_test(tc_core, test_mul2638);
    tcase_add_test(tc_core, test_mul2639);
    tcase_add_test(tc_core, test_mul2640);
    tcase_add_test(tc_core, test_mul2641);
    tcase_add_test(tc_core, test_mul2642);
    tcase_add_test(tc_core, test_mul2643);
    tcase_add_test(tc_core, test_mul2644);
    tcase_add_test(tc_core, test_mul2645);
    tcase_add_test(tc_core, test_mul2646);
    tcase_add_test(tc_core, test_mul2647);
    tcase_add_test(tc_core, test_mul2648);
    tcase_add_test(tc_core, test_mul2649);
    tcase_add_test(tc_core, test_mul2650);
    tcase_add_test(tc_core, test_mul2651);
    tcase_add_test(tc_core, test_mul2652);
    tcase_add_test(tc_core, test_mul2653);
    tcase_add_test(tc_core, test_mul2654);
    tcase_add_test(tc_core, test_mul2655);
    tcase_add_test(tc_core, test_mul2656);
    tcase_add_test(tc_core, test_mul2657);
    tcase_add_test(tc_core, test_mul2658);
    tcase_add_test(tc_core, test_mul2659);
    tcase_add_test(tc_core, test_mul2660);
    tcase_add_test(tc_core, test_mul2661);
    tcase_add_test(tc_core, test_mul2662);
    tcase_add_test(tc_core, test_mul2663);
    tcase_add_test(tc_core, test_mul2664);
    tcase_add_test(tc_core, test_mul2665);
    tcase_add_test(tc_core, test_mul2666);
    tcase_add_test(tc_core, test_mul2667);
    tcase_add_test(tc_core, test_mul2668);
    tcase_add_test(tc_core, test_mul2669);
    tcase_add_test(tc_core, test_mul2670);
    tcase_add_test(tc_core, test_mul2671);
    tcase_add_test(tc_core, test_mul2672);
    tcase_add_test(tc_core, test_mul2673);
    tcase_add_test(tc_core, test_mul2674);
    tcase_add_test(tc_core, test_mul2675);
    tcase_add_test(tc_core, test_mul2676);
    tcase_add_test(tc_core, test_mul2677);
    tcase_add_test(tc_core, test_mul2678);
    tcase_add_test(tc_core, test_mul2679);
    tcase_add_test(tc_core, test_mul2680);
    tcase_add_test(tc_core, test_mul2681);
    tcase_add_test(tc_core, test_mul2682);
    tcase_add_test(tc_core, test_mul2683);
    tcase_add_test(tc_core, test_mul2684);
    tcase_add_test(tc_core, test_mul2685);
    tcase_add_test(tc_core, test_mul2686);
    tcase_add_test(tc_core, test_mul2687);
    tcase_add_test(tc_core, test_mul2688);
    tcase_add_test(tc_core, test_mul2689);
    tcase_add_test(tc_core, test_mul2690);
    tcase_add_test(tc_core, test_mul2691);
    tcase_add_test(tc_core, test_mul2692);
    tcase_add_test(tc_core, test_mul2693);
    tcase_add_test(tc_core, test_mul2694);
    tcase_add_test(tc_core, test_mul2695);
    tcase_add_test(tc_core, test_mul2696);
    tcase_add_test(tc_core, test_mul2697);
    tcase_add_test(tc_core, test_mul2698);
    tcase_add_test(tc_core, test_mul2699);
    tcase_add_test(tc_core, test_mul2700);
    tcase_add_test(tc_core, test_mul2701);
    tcase_add_test(tc_core, test_mul2702);
    tcase_add_test(tc_core, test_mul2703);
    tcase_add_test(tc_core, test_mul2704);
    tcase_add_test(tc_core, test_mul2705);
    tcase_add_test(tc_core, test_mul2706);
    tcase_add_test(tc_core, test_mul2707);
    tcase_add_test(tc_core, test_mul2708);
    tcase_add_test(tc_core, test_mul2709);
    tcase_add_test(tc_core, test_mul2710);
    tcase_add_test(tc_core, test_mul2711);
    tcase_add_test(tc_core, test_mul2712);
    tcase_add_test(tc_core, test_mul2713);
    tcase_add_test(tc_core, test_mul2714);
    tcase_add_test(tc_core, test_mul2715);
    tcase_add_test(tc_core, test_mul2716);
    tcase_add_test(tc_core, test_mul2717);
    tcase_add_test(tc_core, test_mul2718);
    tcase_add_test(tc_core, test_mul2719);
    tcase_add_test(tc_core, test_mul2720);
    tcase_add_test(tc_core, test_mul2721);
    tcase_add_test(tc_core, test_mul2722);
    tcase_add_test(tc_core, test_mul2723);
    tcase_add_test(tc_core, test_mul2724);
    tcase_add_test(tc_core, test_mul2725);
    tcase_add_test(tc_core, test_mul2726);
    tcase_add_test(tc_core, test_mul2727);
    tcase_add_test(tc_core, test_mul2728);
    tcase_add_test(tc_core, test_mul2729);
    tcase_add_test(tc_core, test_mul2730);
    tcase_add_test(tc_core, test_mul2731);
    tcase_add_test(tc_core, test_mul2732);
    tcase_add_test(tc_core, test_mul2733);
    tcase_add_test(tc_core, test_mul2734);
    tcase_add_test(tc_core, test_mul2735);
    tcase_add_test(tc_core, test_mul2736);
    tcase_add_test(tc_core, test_mul2737);
    tcase_add_test(tc_core, test_mul2738);
    tcase_add_test(tc_core, test_mul2739);
    tcase_add_test(tc_core, test_mul2740);
    tcase_add_test(tc_core, test_mul2741);
    tcase_add_test(tc_core, test_mul2742);
    tcase_add_test(tc_core, test_mul2743);
    tcase_add_test(tc_core, test_mul2744);
    tcase_add_test(tc_core, test_mul2745);
    tcase_add_test(tc_core, test_mul2746);
    tcase_add_test(tc_core, test_mul2747);
    tcase_add_test(tc_core, test_mul2748);
    tcase_add_test(tc_core, test_mul2749);
    tcase_add_test(tc_core, test_mul2750);
    tcase_add_test(tc_core, test_mul2751);
    tcase_add_test(tc_core, test_mul2752);
    tcase_add_test(tc_core, test_mul2753);
    tcase_add_test(tc_core, test_mul2754);
    tcase_add_test(tc_core, test_mul2755);
    tcase_add_test(tc_core, test_mul2756);
    tcase_add_test(tc_core, test_mul2757);
    tcase_add_test(tc_core, test_mul2758);
    tcase_add_test(tc_core, test_mul2759);
    tcase_add_test(tc_core, test_mul2760);
    tcase_add_test(tc_core, test_mul2761);
    tcase_add_test(tc_core, test_mul2762);
    tcase_add_test(tc_core, test_mul2763);
    tcase_add_test(tc_core, test_mul2764);
    tcase_add_test(tc_core, test_mul2765);
    tcase_add_test(tc_core, test_mul2766);
    tcase_add_test(tc_core, test_mul2767);
    tcase_add_test(tc_core, test_mul2768);
    tcase_add_test(tc_core, test_mul2769);
    tcase_add_test(tc_core, test_mul2770);
    tcase_add_test(tc_core, test_mul2771);
    tcase_add_test(tc_core, test_mul2772);
    tcase_add_test(tc_core, test_mul2773);
    tcase_add_test(tc_core, test_mul2774);
    tcase_add_test(tc_core, test_mul2775);
    tcase_add_test(tc_core, test_mul2776);
    tcase_add_test(tc_core, test_mul2777);
    tcase_add_test(tc_core, test_mul2778);
    tcase_add_test(tc_core, test_mul2779);
    tcase_add_test(tc_core, test_mul2780);
    tcase_add_test(tc_core, test_mul2781);
    tcase_add_test(tc_core, test_mul2782);
    tcase_add_test(tc_core, test_mul2783);
    tcase_add_test(tc_core, test_mul2784);
    tcase_add_test(tc_core, test_mul2785);
    tcase_add_test(tc_core, test_mul2786);
    tcase_add_test(tc_core, test_mul2787);
    tcase_add_test(tc_core, test_mul2788);
    tcase_add_test(tc_core, test_mul2789);
    tcase_add_test(tc_core, test_mul2790);
    tcase_add_test(tc_core, test_mul2791);
    tcase_add_test(tc_core, test_mul2792);
    tcase_add_test(tc_core, test_mul2793);
    tcase_add_test(tc_core, test_mul2794);
    tcase_add_test(tc_core, test_mul2795);
    tcase_add_test(tc_core, test_mul2796);
    tcase_add_test(tc_core, test_mul2797);
    tcase_add_test(tc_core, test_mul2798);
    tcase_add_test(tc_core, test_mul2799);
    tcase_add_test(tc_core, test_mul2800);
    tcase_add_test(tc_core, test_mul2801);
    tcase_add_test(tc_core, test_mul2802);
    tcase_add_test(tc_core, test_mul2803);
    tcase_add_test(tc_core, test_mul2804);
    tcase_add_test(tc_core, test_mul2809);
    tcase_add_test(tc_core, test_mul2810);
    tcase_add_test(tc_core, test_mul2811);
    tcase_add_test(tc_core, test_mul2812);
    tcase_add_test(tc_core, test_mul2813);
    tcase_add_test(tc_core, test_mul2814);
    tcase_add_test(tc_core, test_mul2815);
    tcase_add_test(tc_core, test_mul2816);
    tcase_add_test(tc_core, test_mul2817);
    tcase_add_test(tc_core, test_mul2818);
    tcase_add_test(tc_core, test_mul2819);
    tcase_add_test(tc_core, test_mul2820);
    tcase_add_test(tc_core, test_mul2821);
    tcase_add_test(tc_core, test_mul2822);
    tcase_add_test(tc_core, test_mul2823);
    tcase_add_test(tc_core, test_mul2824);
    tcase_add_test(tc_core, test_mul2829);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite * sub_suite8(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("sub9");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_sub2984);
    tcase_add_test(tc_core, test_sub2985);
    tcase_add_test(tc_core, test_sub2986);
    tcase_add_test(tc_core, test_sub2987);
    tcase_add_test(tc_core, test_sub2988);
    tcase_add_test(tc_core, test_sub2989);
    tcase_add_test(tc_core, test_sub2990);
    tcase_add_test(tc_core, test_sub2991);
    tcase_add_test(tc_core, test_sub2992);
    tcase_add_test(tc_core, test_sub2993);
    tcase_add_test(tc_core, test_sub2994);
    tcase_add_test(tc_core, test_sub2995);
    tcase_add_test(tc_core, test_sub2996);
    tcase_add_test(tc_core, test_sub2997);
    tcase_add_test(tc_core, test_sub2998);
    tcase_add_test(tc_core, test_sub2999);
    tcase_add_test(tc_core, test_sub3000);
    tcase_add_test(tc_core, test_sub3001);
    tcase_add_test(tc_core, test_sub3002);
    tcase_add_test(tc_core, test_sub3003);
    tcase_add_test(tc_core, test_sub3004);
    tcase_add_test(tc_core, test_sub3005);
    tcase_add_test(tc_core, test_sub3006);
    tcase_add_test(tc_core, test_sub3007);
    tcase_add_test(tc_core, test_sub3008);
    tcase_add_test(tc_core, test_sub3009);
    tcase_add_test(tc_core, test_sub3010);
    tcase_add_test(tc_core, test_sub3011);
    tcase_add_test(tc_core, test_sub3012);
    tcase_add_test(tc_core, test_sub3013);
    tcase_add_test(tc_core, test_sub3014);
    tcase_add_test(tc_core, test_sub3015);
    tcase_add_test(tc_core, test_sub3016);
    tcase_add_test(tc_core, test_sub3017);
    tcase_add_test(tc_core, test_sub3018);
    tcase_add_test(tc_core, test_sub3019);
    tcase_add_test(tc_core, test_sub3020);
    tcase_add_test(tc_core, test_sub3021);
    tcase_add_test(tc_core, test_sub3022);
    tcase_add_test(tc_core, test_sub3023);
    tcase_add_test(tc_core, test_sub3024);
    tcase_add_test(tc_core, test_sub3025);
    tcase_add_test(tc_core, test_sub3026);
    tcase_add_test(tc_core, test_sub3027);
    tcase_add_test(tc_core, test_sub3028);
    tcase_add_test(tc_core, test_sub3029);
    tcase_add_test(tc_core, test_sub3030);
    tcase_add_test(tc_core, test_sub3031);
    tcase_add_test(tc_core, test_sub3032);
    tcase_add_test(tc_core, test_sub3033);
    tcase_add_test(tc_core, test_sub3034);
    tcase_add_test(tc_core, test_sub3035);
    tcase_add_test(tc_core, test_sub3036);
    tcase_add_test(tc_core, test_sub3037);
    tcase_add_test(tc_core, test_sub3038);
    tcase_add_test(tc_core, test_sub3039);
    tcase_add_test(tc_core, test_sub3040);
    tcase_add_test(tc_core, test_sub3041);
    tcase_add_test(tc_core, test_sub3042);
    tcase_add_test(tc_core, test_sub3043);
    tcase_add_test(tc_core, test_sub3044);
    tcase_add_test(tc_core, test_sub3045);
    tcase_add_test(tc_core, test_sub3046);
    tcase_add_test(tc_core, test_sub3047);
    tcase_add_test(tc_core, test_sub3048);
    tcase_add_test(tc_core, test_sub3049);
    tcase_add_test(tc_core, test_sub3050);
    tcase_add_test(tc_core, test_sub3051);
    tcase_add_test(tc_core, test_sub3052);
    tcase_add_test(tc_core, test_sub3053);
    tcase_add_test(tc_core, test_sub3054);
    tcase_add_test(tc_core, test_sub3055);
    tcase_add_test(tc_core, test_sub3056);
    tcase_add_test(tc_core, test_sub3057);
    tcase_add_test(tc_core, test_sub3058);
    tcase_add_test(tc_core, test_sub3059);
    tcase_add_test(tc_core, test_sub3060);
    tcase_add_test(tc_core, test_sub3061);
    tcase_add_test(tc_core, test_sub3062);
    tcase_add_test(tc_core, test_sub3063);
    tcase_add_test(tc_core, test_sub3064);
    tcase_add_test(tc_core, test_sub3065);
    tcase_add_test(tc_core, test_sub3066);
    tcase_add_test(tc_core, test_sub3067);
    tcase_add_test(tc_core, test_sub3068);
    tcase_add_test(tc_core, test_sub3069);
    tcase_add_test(tc_core, test_sub3070);
    tcase_add_test(tc_core, test_sub3071);
    tcase_add_test(tc_core, test_sub3072);
    tcase_add_test(tc_core, test_sub3073);
    tcase_add_test(tc_core, test_sub3074);
    tcase_add_test(tc_core, test_sub3075);
    tcase_add_test(tc_core, test_sub3076);
    tcase_add_test(tc_core, test_sub3077);
    tcase_add_test(tc_core, test_sub3078);
    tcase_add_test(tc_core, test_sub3079);
    tcase_add_test(tc_core, test_sub3080);
    tcase_add_test(tc_core, test_sub3081);
    tcase_add_test(tc_core, test_sub3082);
    tcase_add_test(tc_core, test_sub3083);
    tcase_add_test(tc_core, test_sub3084);
    tcase_add_test(tc_core, test_sub3085);
    tcase_add_test(tc_core, test_sub3086);
    tcase_add_test(tc_core, test_sub3087);
    tcase_add_test(tc_core, test_sub3088);
    tcase_add_test(tc_core, test_sub3089);
    tcase_add_test(tc_core, test_sub3090);
    tcase_add_test(tc_core, test_sub3091);
    tcase_add_test(tc_core, test_sub3092);
    tcase_add_test(tc_core, test_sub3093);
    tcase_add_test(tc_core, test_sub3094);
    tcase_add_test(tc_core, test_sub3095);
    tcase_add_test(tc_core, test_sub3096);

    suite_add_tcase(s, tc_core);
    return s;
}