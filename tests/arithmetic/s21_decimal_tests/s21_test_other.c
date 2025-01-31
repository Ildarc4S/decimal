// #include "../../../include/.h"
#include <stdio.h>
#include <stdlib.h>
#include "test.h"

Suite *floor_suite1(void);
Suite *negate_suite3(void);
Suite *round_suite1(void);
Suite *truncate_suite2(void);

void test_floor(s21_decimal decimal, s21_decimal decimal_check);
void test_round(s21_decimal decimal, s21_decimal decimal_check);
void test_truncate(s21_decimal decimal, s21_decimal decimal_check);
void test_negate(s21_decimal decimal, s21_decimal decimal_check);


START_TEST(test_floor_ok69) {
    // 792281625142643375935439.50334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
    // 792281625142643375935439
    s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok70) {
    // -792281625142643375935439.50334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
    // -792281625142643375935440
    s21_decimal decimal_check = {{0x84230FD0, 0xAC471B47, 0xA7C5, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok71) {
    // 79228162514264337593543.950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
    // 79228162514264337593543
    s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok72) {
    // -79228162514264337593543.950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
    // -79228162514264337593544
    s21_decimal decimal_check = {{0x8D36B4C8, 0xF7A0B5ED, 0x10C6, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok73) {
    // 7922816251426433759354.3950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
    // 7922816251426433759354
    s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok74) {
    // -7922816251426433759354.3950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
    // -7922816251426433759355
    s21_decimal decimal_check = {{0xF485787B, 0x7F29ABCA, 0x1AD, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok75) {
    // 792281625142643375935.43950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
    // 792281625142643375935
    s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok76) {
    // -792281625142643375935.43950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
    // -792281625142643375936
    s21_decimal decimal_check = {{0x1873BF40, 0xF31DC461, 0x2A, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok77) {
    // 79228162514264337593.543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
    // 79228162514264337593
    s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok78) {
    // -79228162514264337593.543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
    // -79228162514264337594
    s21_decimal decimal_check = {{0xB5A52CBA, 0x4B82FA09, 0x4, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok79) {
    // 7922816251426433759.3543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
    // 7922816251426433759
    s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok80) {
    // -7922816251426433759.3543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
    // -7922816251426433760
    s21_decimal decimal_check = {{0x5EF6EAE0, 0x6DF37F67, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok81) {
    // 792281625142643375.93543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
    // 792281625142643375
    s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok82) {
    // -792281625142643375.93543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
    // -792281625142643376
    s21_decimal decimal_check = {{0xBCB24AB0, 0xAFEBFF0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok83) {
    // 79228162514264337.593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
    // 79228162514264337
    s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok84) {
    // -79228162514264337.593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
    // -79228162514264338
    s21_decimal decimal_check = {{0x12DEA112, 0x1197998, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok85) {
    // 7922816251426433.7593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
    // 7922816251426433
    s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok86) {
    // -7922816251426433.7593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
    // -7922816251426434
    s21_decimal decimal_check = {{0x68497682, 0x1C25C2, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok87) {
    // 792281625142643.37593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
    // 792281625142643
    s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok88) {
    // -792281625142643.37593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
    // -792281625142644
    s21_decimal decimal_check = {{0x70D42574, 0x2D093, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok89) {
    // 79228162514264.337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
    // 79228162514264
    s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok90) {
    // -79228162514264.337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
    // -79228162514265
    s21_decimal decimal_check = {{0xBE7B9D59, 0x480E, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok91) {
    // 7922816251426.4337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
    // 7922816251426
    s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok92) {
    // -7922816251426.4337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
    // -7922816251427
    s21_decimal decimal_check = {{0xACA5F623, 0x734, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok93) {
    // 792281625142.64337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
    // 792281625142
    s21_decimal decimal_check = {{0x77AA3236, 0xB8, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok94) {
    // -792281625142.64337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
    // -792281625143
    s21_decimal decimal_check = {{0x77AA3237, 0xB8, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok95) {
    // 79228162514.264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
    // 79228162514
    s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok96) {
    // -79228162514.264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
    // -79228162515
    s21_decimal decimal_check = {{0x725DD1D3, 0x12, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok97) {
    // 7922816251.4264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
    // 7922816251
    s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok98) {
    // -7922816251.4264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
    // -7922816252
    s21_decimal decimal_check = {{0xD83C94FC, 0x1, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok99) {
    // 792281625.14264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
    // 792281625
    s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok100) {
    // -792281625.14264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
    // -792281626
    s21_decimal decimal_check = {{0x2F39421A, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok101) {
    // 79228162.514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
    // 79228162
    s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok102) {
    // -79228162.514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
    // -79228163
    s21_decimal decimal_check = {{0x4B8ED03, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok103) {
    // 7922816.2514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
    // 7922816
    s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok104) {
    // -7922816.2514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
    // -7922817
    s21_decimal decimal_check = {{0x78E481, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok105) {
    // 792281.62514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
    // 792281
    s21_decimal decimal_check = {{0xC16D9, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok106) {
    // -792281.62514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
    // -792282
    s21_decimal decimal_check = {{0xC16DA, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok107) {
    // 79228.162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
    // 79228
    s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok108) {
    // -79228.162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
    // -79229
    s21_decimal decimal_check = {{0x1357D, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok109) {
    // 7922.8162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
    // 7922
    s21_decimal decimal_check = {{0x1EF2, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok110) {
    // -7922.8162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
    // -7923
    s21_decimal decimal_check = {{0x1EF3, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok111) {
    // 792.28162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
    // 792
    s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok112) {
    // -792.28162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
    // -793
    s21_decimal decimal_check = {{0x319, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok113) {
    // 79.228162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
    // 79
    s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok114) {
    // -79.228162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
    // -80
    s21_decimal decimal_check = {{0x50, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok115) {
    // 7.9228162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
    // 7
    s21_decimal decimal_check = {{0x7, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok116) {
    // -7.9228162514264337593543950334
    s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
    // -8
    s21_decimal decimal_check = {{0x8, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok117) {
    // 52818775009509558395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 52818775009509558395695966890
    s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok118) {
    // -52818775009509558395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -52818775009509558395695966890
    s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok119) {
    // 5281877500950955839569596689.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // 5281877500950955839569596689
    s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x11111111, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok120) {
    // -5281877500950955839569596689.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // -5281877500950955839569596689
    s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok121) {
    // 5281877500950955.8395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
    // 5281877500950955
    s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok122) {
    // -5281877500950955.8395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
    // -5281877500950956
    s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok123) {
    // 5.2818775009509558395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
    // 5
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok124) {
    // -5.2818775009509558395695966890
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
    // -6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok125) {
    // 52818775009509558392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
    // 52818775009509558392832655360
    s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok126) {
    // -52818775009509558392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
    // -52818775009509558392832655360
    s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok127) {
    // 5281877500950955839283265536.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
    // 5281877500950955839283265536
    s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok128) {
    // -5281877500950955839283265536.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
    // -5281877500950955839283265536
    s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok129) {
    // 5281877500950955.8392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
    // 5281877500950955
    s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok130) {
    // -5281877500950955.8392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
    // -5281877500950956
    s21_decimal decimal_check = {{0xF030F9AC, 0x12C3D6, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok131) {
    // 5.2818775009509558392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
    // 5
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok132) {
    // -5.2818775009509558392832655360
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
    // -6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok133) {
    // 52818774997211729016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};
    // 52818774997211729016086244010
    s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok134) {
    // -52818774997211729016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};
    // -52818774997211729016086244010
    s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok135) {
    // 5281877499721172901608624401.0
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};
    // 5281877499721172901608624401
    s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok136) {
    // -5281877499721172901608624401.0
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};
    // -5281877499721172901608624401
    s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok137) {
    // 5281877499721172.9016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};
    // 5281877499721172
    s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok138) {
    // -5281877499721172.9016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};
    // -5281877499721173
    s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok139) {
    // 5.2818774997211729016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
    // 5
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok140) {
    // -5.2818774997211729016086244010
    s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
    // -6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok141) {
    // 52818774997211729013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};
    // 52818774997211729013222932480
    s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok142) {
    // -52818774997211729013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};
    // -52818774997211729013222932480
    s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok143) {
    // 5281877499721172901322293248.0
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};
    // 5281877499721172901322293248
    s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok144) {
    // -5281877499721172901322293248.0
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};
    // -5281877499721172901322293248
    s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok145) {
    // 5281877499721172.9013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};
    // 5281877499721172
    s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok146) {
    // -5281877499721172.9013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};
    // -5281877499721173
    s21_decimal decimal_check = {{0xF01E35D5, 0x12C3D6, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok147) {
    // 5.2818774997211729013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
    // 5
    s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok148) {
    // -5.2818774997211729013222932480
    s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
    // -6
    s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok149) {
    // 12297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
    // 12297829382473034410
    s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok150) {
    // -12297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
    // -12297829382473034410
    s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok151) {
    // 1229782938247303441.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
    // 1229782938247303441
    s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok152) {
    // -1229782938247303441.0
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
    // -1229782938247303441
    s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok153) {
    // 122978293.82473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
    // 122978293
    s21_decimal decimal_check = {{0x7547FF5, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok154) {
    // -122978293.82473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
    // -122978294
    s21_decimal decimal_check = {{0x7547FF6, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok155) {
    // 1.2297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
    // 1
    s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok156) {
    // -1.2297829382473034410
    s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok157) {
    // 12297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
    // 12297829379609722880
    s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok158) {
    // -12297829379609722880
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
    // -12297829379609722880
    s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok159) {
    // 1229782937960972288.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
    // 1229782937960972288
    s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x0}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_floor_ok160) {
    // -1229782937960972288.0
    s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
    // -1229782937960972288
    s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x80000000}};

    test_floor(decimal, decimal_check);
}

START_TEST(test_negate_ok965) {
    // -16345822771297715.35137753127
    s21_decimal decimal = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0x800B0000}};
    // 16345822771297715.35137753127
    s21_decimal decimal_check = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0xB0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok966) {
    // 16345822771297715.35137753127
    s21_decimal decimal = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0xB0000}};
    // -16345822771297715.35137753127
    s21_decimal decimal_check = {{0xEECBC827, 0xCC6BCF7F, 0x5481842, 0x800B0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok967) {
    // -72.901924197290007046614505467
    s21_decimal decimal = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x801B0000}};
    // 72.901924197290007046614505467
    s21_decimal decimal_check = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x1B0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok968) {
    // 72.901924197290007046614505467
    s21_decimal decimal = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x1B0000}};
    // -72.901924197290007046614505467
    s21_decimal decimal_check = {{0x924557FB, 0xA75D6FC7, 0xEB8F0EED, 0x801B0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok969) {
    // -282236638347022354.0187283394
    s21_decimal decimal = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0x800A0000}};
    // 282236638347022354.0187283394
    s21_decimal decimal_check = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0xA0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok970) {
    // 282236638347022354.0187283394
    s21_decimal decimal = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0xA0000}};
    // -282236638347022354.0187283394
    s21_decimal decimal_check = {{0x33FBFC2, 0x39B55CFA, 0x91E9B54, 0x800A0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok971) {
    // 48288007672417452531842304033
    s21_decimal decimal = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x0}};
    // -48288007672417452531842304033
    s21_decimal decimal_check = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x80000000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok972) {
    // -48288007672417452531842304033
    s21_decimal decimal = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x80000000}};
    // 48288007672417452531842304033
    s21_decimal decimal_check = {{0xCBEC4821, 0x2BED059E, 0x9C06E75D, 0x0}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok973) {
    // 64006437557224887691199710.512
    s21_decimal decimal = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x30000}};
    // -64006437557224887691199710.512
    s21_decimal decimal_check = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x80030000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok974) {
    // -64006437557224887691199710.512
    s21_decimal decimal = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x80030000}};
    // 64006437557224887691199710.512
    s21_decimal decimal_check = {{0xE6050530, 0xA14AFA9D, 0xCED0E25C, 0x30000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok975) {
    // 46642666123238344382848119685
    s21_decimal decimal = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x0}};
    // -46642666123238344382848119685
    s21_decimal decimal_check = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x80000000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok976) {
    // -46642666123238344382848119685
    s21_decimal decimal = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x80000000}};
    // 46642666123238344382848119685
    s21_decimal decimal_check = {{0x1D2B3385, 0x110998EA, 0x96B5E8BD, 0x0}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok977) {
    // -78057463950659013.5127323377
    s21_decimal decimal = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0x800A0000}};
    // 78057463950659013.5127323377
    s21_decimal decimal_check = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0xA0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok978) {
    // 78057463950659013.5127323377
    s21_decimal decimal = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0xA0000}};
    // -78057463950659013.5127323377
    s21_decimal decimal_check = {{0xC45732F1, 0xFF3BD529, 0x285AD1B, 0x800A0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok979) {
    // -166067859.03204182917936128463
    s21_decimal decimal = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x80140000}};
    // 166067859.03204182917936128463
    s21_decimal decimal_check = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x140000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok980) {
    // 166067859.03204182917936128463
    s21_decimal decimal = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x140000}};
    // -166067859.03204182917936128463
    s21_decimal decimal_check = {{0xED2521CF, 0xB678D50C, 0x35A8CFB3, 0x80140000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok981) {
    // -2252784754217328866832980136
    s21_decimal decimal = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x80000000}};
    // 2252784754217328866832980136
    s21_decimal decimal_check = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x0}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok982) {
    // 2252784754217328866832980136
    s21_decimal decimal = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x0}};
    // -2252784754217328866832980136
    s21_decimal decimal_check = {{0xD8C98A8, 0x3BB520F5, 0x74775BA, 0x80000000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok983) {
    // -427579323754187997327165.64258
    s21_decimal decimal = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x80050000}};
    // 427579323754187997327165.64258
    s21_decimal decimal_check = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x50000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok984) {
    // 427579323754187997327165.64258
    s21_decimal decimal = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x50000}};
    // -427579323754187997327165.64258
    s21_decimal decimal_check = {{0x2B956F22, 0x9EF12A57, 0x8A28885E, 0x80050000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok985) {
    // -465443016545191895908.96236286
    s21_decimal decimal = {{0xD40B56FE, 0x88531CB2, 0x96648B40, 0x80080000}};
    // 465443016545191895908.96236286
    s21_decimal decimal_check = {{0xD40B56FE, 0x88531CB2, 0x96648B40, 0x80000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok986) {
    // 465443016545191895908.96236286
    s21_decimal decimal = {{0xD40B56FE, 0x88531CB2, 0x96648B40, 0x80000}};
    // -465443016545191895908.96236286
    s21_decimal decimal_check = {{0xD40B56FE, 0x88531CB2, 0x96648B40, 0x80080000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok987) {
    // 2992553232.8473012093242990234
    s21_decimal decimal = {{0x41D65E9A, 0x2A70ACE4, 0x60B1D1F6, 0x130000}};
    // -2992553232.8473012093242990234
    s21_decimal decimal_check = {{0x41D65E9A, 0x2A70ACE4, 0x60B1D1F6, 0x80130000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok988) {
    // -2992553232.8473012093242990234
    s21_decimal decimal = {{0x41D65E9A, 0x2A70ACE4, 0x60B1D1F6, 0x80130000}};
    // 2992553232.8473012093242990234
    s21_decimal decimal_check = {{0x41D65E9A, 0x2A70ACE4, 0x60B1D1F6, 0x130000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok989) {
    // -3016389385188214739.2787710551
    s21_decimal decimal = {{0xFB320257, 0x3DDC0940, 0x6176FCFA, 0x800A0000}};
    // 3016389385188214739.2787710551
    s21_decimal decimal_check = {{0xFB320257, 0x3DDC0940, 0x6176FCFA, 0xA0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok990) {
    // 3016389385188214739.2787710551
    s21_decimal decimal = {{0xFB320257, 0x3DDC0940, 0x6176FCFA, 0xA0000}};
    // -3016389385188214739.2787710551
    s21_decimal decimal_check = {{0xFB320257, 0x3DDC0940, 0x6176FCFA, 0x800A0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok991) {
    // 33815043.65286234113249073658
    s21_decimal decimal = {{0x1C6359FA, 0xF4A4027C, 0xAED1D66, 0x140000}};
    // -33815043.65286234113249073658
    s21_decimal decimal_check = {{0x1C6359FA, 0xF4A4027C, 0xAED1D66, 0x80140000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok992) {
    // -33815043.65286234113249073658
    s21_decimal decimal = {{0x1C6359FA, 0xF4A4027C, 0xAED1D66, 0x80140000}};
    // 33815043.65286234113249073658
    s21_decimal decimal_check = {{0x1C6359FA, 0xF4A4027C, 0xAED1D66, 0x140000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok993) {
    // -655398781067771.83794689059460
    s21_decimal decimal = {{0xE2C9AA84, 0x63E0C758, 0xD3C55107, 0x800E0000}};
    // 655398781067771.83794689059460
    s21_decimal decimal_check = {{0xE2C9AA84, 0x63E0C758, 0xD3C55107, 0xE0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok994) {
    // 655398781067771.83794689059460
    s21_decimal decimal = {{0xE2C9AA84, 0x63E0C758, 0xD3C55107, 0xE0000}};
    // -655398781067771.83794689059460
    s21_decimal decimal_check = {{0xE2C9AA84, 0x63E0C758, 0xD3C55107, 0x800E0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok995) {
    // 1893515916082631238.3416469102
    s21_decimal decimal = {{0x51EB866E, 0xED244119, 0x3D2ECBEA, 0xA0000}};
    // -1893515916082631238.3416469102
    s21_decimal decimal_check = {{0x51EB866E, 0xED244119, 0x3D2ECBEA, 0x800A0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok996) {
    // -1893515916082631238.3416469102
    s21_decimal decimal = {{0x51EB866E, 0xED244119, 0x3D2ECBEA, 0x800A0000}};
    // 1893515916082631238.3416469102
    s21_decimal decimal_check = {{0x51EB866E, 0xED244119, 0x3D2ECBEA, 0xA0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok997) {
    // -50688490238048905980647854344
    s21_decimal decimal = {{0xB1205108, 0xCE1E0202, 0xA3C88951, 0x80000000}};
    // 50688490238048905980647854344
    s21_decimal decimal_check = {{0xB1205108, 0xCE1E0202, 0xA3C88951, 0x0}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok998) {
    // 50688490238048905980647854344
    s21_decimal decimal = {{0xB1205108, 0xCE1E0202, 0xA3C88951, 0x0}};
    // -50688490238048905980647854344
    s21_decimal decimal_check = {{0xB1205108, 0xCE1E0202, 0xA3C88951, 0x80000000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok999) {
    // -5694011593981989243301.7721765
    s21_decimal decimal = {{0xD1B953A5, 0x2D2C928A, 0xB7FBC28E, 0x80070000}};
    // 5694011593981989243301.7721765
    s21_decimal decimal_check = {{0xD1B953A5, 0x2D2C928A, 0xB7FBC28E, 0x70000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1000) {
    // 5694011593981989243301.7721765
    s21_decimal decimal = {{0xD1B953A5, 0x2D2C928A, 0xB7FBC28E, 0x70000}};
    // -5694011593981989243301.7721765
    s21_decimal decimal_check = {{0xD1B953A5, 0x2D2C928A, 0xB7FBC28E, 0x80070000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1001) {
    // 7391817384113353885252676556.8
    s21_decimal decimal = {{0xD4363600, 0x3C647D46, 0xEED7AE29, 0x10000}};
    // -7391817384113353885252676556.8
    s21_decimal decimal_check = {{0xD4363600, 0x3C647D46, 0xEED7AE29, 0x80010000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1002) {
    // -7391817384113353885252676556.8
    s21_decimal decimal = {{0xD4363600, 0x3C647D46, 0xEED7AE29, 0x80010000}};
    // 7391817384113353885252676556.8
    s21_decimal decimal_check = {{0xD4363600, 0x3C647D46, 0xEED7AE29, 0x10000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1003) {
    // 67381264773976866357.851509099
    s21_decimal decimal = {{0x37B8D16B, 0xA369F4E6, 0xD9B879D2, 0x90000}};
    // -67381264773976866357.851509099
    s21_decimal decimal_check = {{0x37B8D16B, 0xA369F4E6, 0xD9B879D2, 0x80090000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1004) {
    // -67381264773976866357.851509099
    s21_decimal decimal = {{0x37B8D16B, 0xA369F4E6, 0xD9B879D2, 0x80090000}};
    // 67381264773976866357.851509099
    s21_decimal decimal_check = {{0x37B8D16B, 0xA369F4E6, 0xD9B879D2, 0x90000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1005) {
    // 3880207503319540203.1112505076
    s21_decimal decimal = {{0x4B9DC6F4, 0x6594B4BA, 0x7D6052FE, 0xA0000}};
    // -3880207503319540203.1112505076
    s21_decimal decimal_check = {{0x4B9DC6F4, 0x6594B4BA, 0x7D6052FE, 0x800A0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1006) {
    // -3880207503319540203.1112505076
    s21_decimal decimal = {{0x4B9DC6F4, 0x6594B4BA, 0x7D6052FE, 0x800A0000}};
    // 3880207503319540203.1112505076
    s21_decimal decimal_check = {{0x4B9DC6F4, 0x6594B4BA, 0x7D6052FE, 0xA0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1007) {
    // -52231370183613270.792051465171
    s21_decimal decimal = {{0x12159BD3, 0x3F977FBD, 0xA8C4C6DB, 0x800C0000}};
    // 52231370183613270.792051465171
    s21_decimal decimal_check = {{0x12159BD3, 0x3F977FBD, 0xA8C4C6DB, 0xC0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1008) {
    // 52231370183613270.792051465171
    s21_decimal decimal = {{0x12159BD3, 0x3F977FBD, 0xA8C4C6DB, 0xC0000}};
    // -52231370183613270.792051465171
    s21_decimal decimal_check = {{0x12159BD3, 0x3F977FBD, 0xA8C4C6DB, 0x800C0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1009) {
    // 762012.47518574196197311629136
    s21_decimal decimal = {{0xFDDBC750, 0x4985467C, 0xF63831D1, 0x170000}};
    // -762012.47518574196197311629136
    s21_decimal decimal_check = {{0xFDDBC750, 0x4985467C, 0xF63831D1, 0x80170000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1010) {
    // -762012.47518574196197311629136
    s21_decimal decimal = {{0xFDDBC750, 0x4985467C, 0xF63831D1, 0x80170000}};
    // 762012.47518574196197311629136
    s21_decimal decimal_check = {{0xFDDBC750, 0x4985467C, 0xF63831D1, 0x170000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1011) {
    // 528160336985692.03305796312337
    s21_decimal decimal = {{0x783F9D11, 0xE71F058C, 0xAAA8662B, 0xE0000}};
    // -528160336985692.03305796312337
    s21_decimal decimal_check = {{0x783F9D11, 0xE71F058C, 0xAAA8662B, 0x800E0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1012) {
    // -528160336985692.03305796312337
    s21_decimal decimal = {{0x783F9D11, 0xE71F058C, 0xAAA8662B, 0x800E0000}};
    // 528160336985692.03305796312337
    s21_decimal decimal_check = {{0x783F9D11, 0xE71F058C, 0xAAA8662B, 0xE0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1013) {
    // 53331962353.888666415154074761
    s21_decimal decimal = {{0x8381489, 0x599DA089, 0xAC532A50, 0x120000}};
    // -53331962353.888666415154074761
    s21_decimal decimal_check = {{0x8381489, 0x599DA089, 0xAC532A50, 0x80120000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1014) {
    // -53331962353.888666415154074761
    s21_decimal decimal = {{0x8381489, 0x599DA089, 0xAC532A50, 0x80120000}};
    // 53331962353.888666415154074761
    s21_decimal decimal_check = {{0x8381489, 0x599DA089, 0xAC532A50, 0x120000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1015) {
    // 21469522554935341566486.374228
    s21_decimal decimal = {{0x23BBE754, 0xD07AAACA, 0x455F2C3D, 0x60000}};
    // -21469522554935341566486.374228
    s21_decimal decimal_check = {{0x23BBE754, 0xD07AAACA, 0x455F2C3D, 0x80060000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1016) {
    // -21469522554935341566486.374228
    s21_decimal decimal = {{0x23BBE754, 0xD07AAACA, 0x455F2C3D, 0x80060000}};
    // 21469522554935341566486.374228
    s21_decimal decimal_check = {{0x23BBE754, 0xD07AAACA, 0x455F2C3D, 0x60000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1017) {
    // -48282841899130.570326498609779
    s21_decimal decimal = {{0x32F40A73, 0xA632221, 0x9C02A178, 0x800F0000}};
    // 48282841899130.570326498609779
    s21_decimal decimal_check = {{0x32F40A73, 0xA632221, 0x9C02A178, 0xF0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1018) {
    // 48282841899130.570326498609779
    s21_decimal decimal = {{0x32F40A73, 0xA632221, 0x9C02A178, 0xF0000}};
    // -48282841899130.570326498609779
    s21_decimal decimal_check = {{0x32F40A73, 0xA632221, 0x9C02A178, 0x800F0000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1019) {
    // -743355137752.71190832768620564
    s21_decimal decimal = {{0xC2E01814, 0x66150693, 0xF030E554, 0x80110000}};
    // 743355137752.71190832768620564
    s21_decimal decimal_check = {{0xC2E01814, 0x66150693, 0xF030E554, 0x110000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_negate_ok1020) {
    // 743355137752.71190832768620564
    s21_decimal decimal = {{0xC2E01814, 0x66150693, 0xF030E554, 0x110000}};
    // -743355137752.71190832768620564
    s21_decimal decimal_check = {{0xC2E01814, 0x66150693, 0xF030E554, 0x80110000}};

    test_negate(decimal, decimal_check);
}

START_TEST(test_round_ok246) {
    // -18446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};
    // -18446744073709551617
    s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok247) {
    // 1844674407370955161.7
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};
    // 1844674407370955162
    s21_decimal decimal_check = {{0x9999999A, 0x19999999, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok248) {
    // -1844674407370955161.7
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};
    // -1844674407370955162
    s21_decimal decimal_check = {{0x9999999A, 0x19999999, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok249) {
    // 1844674407.3709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0xA0000}};
    // 1844674407
    s21_decimal decimal_check = {{0x6DF37F67, 0x0, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok250) {
    // -1844674407.3709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800A0000}};
    // -1844674407
    s21_decimal decimal_check = {{0x6DF37F67, 0x0, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok251) {
    // 1.8446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok252) {
    // -1.8446744073709551617
    s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok253) {
    // 18446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
    // 18446744073709551616
    s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok254) {
    // -18446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};
    // -18446744073709551616
    s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok255) {
    // 1844674407370955161.6
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};
    // 1844674407370955162
    s21_decimal decimal_check = {{0x9999999A, 0x19999999, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok256) {
    // -1844674407370955161.6
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};
    // -1844674407370955162
    s21_decimal decimal_check = {{0x9999999A, 0x19999999, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok257) {
    // 184467440.73709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0xB0000}};
    // 184467441
    s21_decimal decimal_check = {{0xAFEBFF1, 0x0, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok258) {
    // -184467440.73709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800B0000}};
    // -184467441
    s21_decimal decimal_check = {{0xAFEBFF1, 0x0, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok259) {
    // 1.8446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok260) {
    // -1.8446744073709551616
    s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok261) {
    // 4294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};
    // 4294967297
    s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x0}};

    test_round(decimal, decimal_check);
}

START_TEST(test_round_ok262) {
    // -4294967297
    s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};
    // -4294967297
    s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000000}};

    test_round(decimal, decimal_check);
}

START_TEST(test_truncate_ok666) {
    // -285.75367348799914688751734686
    s21_decimal decimal = {{0x8BFA0F9E, 0xF4FEA973, 0x5C54FD67, 0x801A0000}};
    // -285
    s21_decimal decimal_check = {{0x11D, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok667) {
    // -294337633.23167245972108598632
    s21_decimal decimal = {{0xA8B1DD68, 0xF858C391, 0x5F1B09D2, 0x80140000}};
    // -294337633
    s21_decimal decimal_check = {{0x118B3C61, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok668) {
    // 294337633.23167245972108598632
    s21_decimal decimal = {{0xA8B1DD68, 0xF858C391, 0x5F1B09D2, 0x140000}};
    // 294337633
    s21_decimal decimal_check = {{0x118B3C61, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok669) {
    // -199389824762093573248565729.89
    s21_decimal decimal = {{0xCE3BC3D, 0xE49077A5, 0x406D23C5, 0x80020000}};
    // -199389824762093573248565729
    s21_decimal decimal_check = {{0x6916C1E1, 0xF15ECB7, 0xA4EE70, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok670) {
    // 199389824762093573248565729.89
    s21_decimal decimal = {{0xCE3BC3D, 0xE49077A5, 0x406D23C5, 0x20000}};
    // 199389824762093573248565729
    s21_decimal decimal_check = {{0x6916C1E1, 0xF15ECB7, 0xA4EE70, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok671) {
    // 24926833321041066052322067.634
    s21_decimal decimal = {{0xCE0004B2, 0xFE2AB6BB, 0x508AFE45, 0x30000}};
    // 24926833321041066052322067
    s21_decimal decimal_check = {{0x17808313, 0x578CD7BC, 0x149E76, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok672) {
    // -24926833321041066052322067.634
    s21_decimal decimal = {{0xCE0004B2, 0xFE2AB6BB, 0x508AFE45, 0x80030000}};
    // -24926833321041066052322067
    s21_decimal decimal_check = {{0x17808313, 0x578CD7BC, 0x149E76, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok673) {
    // -74598258212432518399940479.216
    s21_decimal decimal = {{0x9555C8F0, 0xE0B0D013, 0xF10A3BA0, 0x80030000}};
    // -74598258212432518399940479
    s21_decimal decimal_check = {{0x4480577F, 0xAE4E0035, 0x3DB4CB, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok674) {
    // 74598258212432518399940479.216
    s21_decimal decimal = {{0x9555C8F0, 0xE0B0D013, 0xF10A3BA0, 0x30000}};
    // 74598258212432518399940479
    s21_decimal decimal_check = {{0x4480577F, 0xAE4E0035, 0x3DB4CB, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok675) {
    // -40611103467088.081458801075149
    s21_decimal decimal = {{0x2FEEE3CD, 0x4D7246A1, 0x8338B7AA, 0x800F0000}};
    // -40611103467088
    s21_decimal decimal_check = {{0x82656650, 0x24EF, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok676) {
    // 40611103467088.081458801075149
    s21_decimal decimal = {{0x2FEEE3CD, 0x4D7246A1, 0x8338B7AA, 0xF0000}};
    // 40611103467088
    s21_decimal decimal_check = {{0x82656650, 0x24EF, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok677) {
    // -2.6024178308480731804266209026
    s21_decimal decimal = {{0x41151F02, 0xF5D2C738, 0x5416B21C, 0x801C0000}};
    // -2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok678) {
    // 2.6024178308480731804266209026
    s21_decimal decimal = {{0x41151F02, 0xF5D2C738, 0x5416B21C, 0x1C0000}};
    // 2
    s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok679) {
    // 411936538322804235.39096857465
    s21_decimal decimal = {{0x86A6AB79, 0xE0F35639, 0x851A9780, 0xB0000}};
    // 411936538322804235
    s21_decimal decimal_check = {{0x5CBC1E0B, 0x5B77E19, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok680) {
    // -411936538322804235.39096857465
    s21_decimal decimal = {{0x86A6AB79, 0xE0F35639, 0x851A9780, 0x800B0000}};
    // -411936538322804235
    s21_decimal decimal_check = {{0x5CBC1E0B, 0x5B77E19, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok681) {
    // -57.808791587198779581129071039
    s21_decimal decimal = {{0x547899BF, 0x61506CE1, 0xBACA4FC7, 0x801B0000}};
    // -57
    s21_decimal decimal_check = {{0x39, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok682) {
    // 57.808791587198779581129071039
    s21_decimal decimal = {{0x547899BF, 0x61506CE1, 0xBACA4FC7, 0x1B0000}};
    // 57
    s21_decimal decimal_check = {{0x39, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok683) {
    // -62951289.164843933254142541677
    s21_decimal decimal = {{0x98FE3F6D, 0xAA12CDCB, 0xCB6815FF, 0x80150000}};
    // -62951289
    s21_decimal decimal_check = {{0x3C08F79, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok684) {
    // 62951289.164843933254142541677
    s21_decimal decimal = {{0x98FE3F6D, 0xAA12CDCB, 0xCB6815FF, 0x150000}};
    // 62951289
    s21_decimal decimal_check = {{0x3C08F79, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok685) {
    // -12324957495.166324975666774143
    s21_decimal decimal = {{0xAE60C07F, 0x9A40295B, 0x27D2F744, 0x80120000}};
    // -12324957495
    s21_decimal decimal_check = {{0xDE9FED37, 0x2, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok686) {
    // 12324957495.166324975666774143
    s21_decimal decimal = {{0xAE60C07F, 0x9A40295B, 0x27D2F744, 0x120000}};
    // 12324957495
    s21_decimal decimal_check = {{0xDE9FED37, 0x2, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok687) {
    // -7257576754613577.3740212465972
    s21_decimal decimal = {{0x36D8B134, 0x2A8A075E, 0xEA814492, 0x800D0000}};
    // -7257576754613577
    s21_decimal decimal_check = {{0x44638D49, 0x19C8BA, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok688) {
    // 7257576754613577.3740212465972
    s21_decimal decimal = {{0x36D8B134, 0x2A8A075E, 0xEA814492, 0xD0000}};
    // 7257576754613577
    s21_decimal decimal_check = {{0x44638D49, 0x19C8BA, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok689) {
    // -1232742343418612582408.7288995
    s21_decimal decimal = {{0x9527ECA3, 0x6CB6E55B, 0x27D50173, 0x80070000}};
    // -1232742343418612582408
    s21_decimal decimal_check = {{0x89008808, 0xD3BC95FD, 0x42, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok690) {
    // 1232742343418612582408.7288995
    s21_decimal decimal = {{0x9527ECA3, 0x6CB6E55B, 0x27D50173, 0x70000}};
    // 1232742343418612582408
    s21_decimal decimal_check = {{0x89008808, 0xD3BC95FD, 0x42, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok691) {
    // -35174237327632.627971939180419
    s21_decimal decimal = {{0xF7451F83, 0x4E979D4A, 0x71A7727A, 0x800F0000}};
    // -35174237327632
    s21_decimal decimal_check = {{0xA3EBD110, 0x1FFD, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok692) {
    // 35174237327632.627971939180419
    s21_decimal decimal = {{0xF7451F83, 0x4E979D4A, 0x71A7727A, 0xF0000}};
    // 35174237327632
    s21_decimal decimal_check = {{0xA3EBD110, 0x1FFD, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok693) {
    // -13.612136755406679224635471243
    s21_decimal decimal = {{0x3ED9B58B, 0x1E7C60BB, 0x2BFBB214, 0x801B0000}};
    // -13
    s21_decimal decimal_check = {{0xD, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok694) {
    // 13.612136755406679224635471243
    s21_decimal decimal = {{0x3ED9B58B, 0x1E7C60BB, 0x2BFBB214, 0x1B0000}};
    // 13
    s21_decimal decimal_check = {{0xD, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok695) {
    // -202291388542142794.90509854007
    s21_decimal decimal = {{0x4155D537, 0xA999C35D, 0x415D26C6, 0x800B0000}};
    // -202291388542142794
    s21_decimal decimal_check = {{0x332CC94A, 0x2CEAEF2, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok696) {
    // 202291388542142794.90509854007
    s21_decimal decimal = {{0x4155D537, 0xA999C35D, 0x415D26C6, 0xB0000}};
    // 202291388542142794
    s21_decimal decimal_check = {{0x332CC94A, 0x2CEAEF2, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok697) {
    // -34795.191025063591749094056934
    s21_decimal decimal = {{0x1C89A3E6, 0x1233D892, 0x706DE84D, 0x80180000}};
    // -34795
    s21_decimal decimal_check = {{0x87EB, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok698) {
    // 34795.191025063591749094056934
    s21_decimal decimal = {{0x1C89A3E6, 0x1233D892, 0x706DE84D, 0x180000}};
    // 34795
    s21_decimal decimal_check = {{0x87EB, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok699) {
    // -1920082581912058322107263659.7
    s21_decimal decimal = {{0xF0742AB5, 0x548F8762, 0x3E0A8D05, 0x80010000}};
    // -1920082581912058322107263659
    s21_decimal decimal_check = {{0xE4D86AAB, 0x55418D89, 0x634414D, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok700) {
    // 1920082581912058322107263659.7
    s21_decimal decimal = {{0xF0742AB5, 0x548F8762, 0x3E0A8D05, 0x10000}};
    // 1920082581912058322107263659
    s21_decimal decimal_check = {{0xE4D86AAB, 0x55418D89, 0x634414D, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok701) {
    // -4855095355.4870004223861095893
    s21_decimal decimal = {{0xD25C7DD5, 0x58A7890, 0x9CE06852, 0x80130000}};
    // -4855095355
    s21_decimal decimal_check = {{0x2162E03B, 0x1, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok702) {
    // 4855095355.4870004223861095893
    s21_decimal decimal = {{0xD25C7DD5, 0x58A7890, 0x9CE06852, 0x130000}};
    // 4855095355
    s21_decimal decimal_check = {{0x2162E03B, 0x1, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok703) {
    // 39971257349617087819.386393374
    s21_decimal decimal = {{0xE2B3131E, 0xC587AF42, 0x812772FA, 0x90000}};
    // 39971257349617087819
    s21_decimal decimal_check = {{0x5DA5F54B, 0x2AB66EC8, 0x2, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok704) {
    // -39971257349617087819.386393374
    s21_decimal decimal = {{0xE2B3131E, 0xC587AF42, 0x812772FA, 0x80090000}};
    // -39971257349617087819
    s21_decimal decimal_check = {{0x5DA5F54B, 0x2AB66EC8, 0x2, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok705) {
    // 428647.37957423972876277859943
    s21_decimal decimal = {{0xC8654667, 0xD2B33151, 0x8A80E154, 0x170000}};
    // 428647
    s21_decimal decimal_check = {{0x68A67, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok706) {
    // -428647.37957423972876277859943
    s21_decimal decimal = {{0xC8654667, 0xD2B33151, 0x8A80E154, 0x80170000}};
    // -428647
    s21_decimal decimal_check = {{0x68A67, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok707) {
    // 54812.333974318938565362456710
    s21_decimal decimal = {{0x86321886, 0xB2A8516C, 0xB11BB332, 0x180000}};
    // 54812
    s21_decimal decimal_check = {{0xD61C, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok708) {
    // -54812.333974318938565362456710
    s21_decimal decimal = {{0x86321886, 0xB2A8516C, 0xB11BB332, 0x80180000}};
    // -54812
    s21_decimal decimal_check = {{0xD61C, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok709) {
    // 2206203.1322878209706824613417
    s21_decimal decimal = {{0xBCBCBE29, 0x7C4286CA, 0x474948DA, 0x160000}};
    // 2206203
    s21_decimal decimal_check = {{0x21A9FB, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok710) {
    // -2206203.1322878209706824613417
    s21_decimal decimal = {{0xBCBCBE29, 0x7C4286CA, 0x474948DA, 0x80160000}};
    // -2206203
    s21_decimal decimal_check = {{0x21A9FB, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok711) {
    // 6288177403562580986674.470776
    s21_decimal decimal = {{0x3B2ADF78, 0x1888FFCF, 0x1451755C, 0x60000}};
    // 6288177403562580986674
    s21_decimal decimal_check = {{0x31C74B32, 0xE1FDE059, 0x154, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok712) {
    // -6288177403562580986674.470776
    s21_decimal decimal = {{0x3B2ADF78, 0x1888FFCF, 0x1451755C, 0x80060000}};
    // -6288177403562580986674
    s21_decimal decimal_check = {{0x31C74B32, 0xE1FDE059, 0x154, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok713) {
    // 8451506.032239598045622617686
    s21_decimal decimal = {{0x5F6C656, 0xBE29140, 0x1B4EEC04, 0x150000}};
    // 8451506
    s21_decimal decimal_check = {{0x80F5B2, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok714) {
    // -8451506.032239598045622617686
    s21_decimal decimal = {{0x5F6C656, 0xBE29140, 0x1B4EEC04, 0x80150000}};
    // -8451506
    s21_decimal decimal_check = {{0x80F5B2, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok715) {
    // 7770.8380291459007967954723539
    s21_decimal decimal = {{0x672FE2D3, 0x9DD1ACC1, 0xFB16DD98, 0x190000}};
    // 7770
    s21_decimal decimal_check = {{0x1E5A, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok716) {
    // -7770.8380291459007967954723539
    s21_decimal decimal = {{0x672FE2D3, 0x9DD1ACC1, 0xFB16DD98, 0x80190000}};
    // -7770
    s21_decimal decimal_check = {{0x1E5A, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok717) {
    // -3.2879532166044124591016647703
    s21_decimal decimal = {{0xEBC01C17, 0x3C92064E, 0x6A3D4FC2, 0x801C0000}};
    // -3
    s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok718) {
    // 3.2879532166044124591016647703
    s21_decimal decimal = {{0xEBC01C17, 0x3C92064E, 0x6A3D4FC2, 0x1C0000}};
    // 3
    s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok719) {
    // -612734861108.88116523880872121
    s21_decimal decimal = {{0x6ECAF8B9, 0xDBF8B808, 0xC5FC3D61, 0x80110000}};
    // -612734861108
    s21_decimal decimal_check = {{0xA9D7FF34, 0x8E, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok720) {
    // 612734861108.88116523880872121
    s21_decimal decimal = {{0x6ECAF8B9, 0xDBF8B808, 0xC5FC3D61, 0x110000}};
    // 612734861108
    s21_decimal decimal_check = {{0xA9D7FF34, 0x8E, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok721) {
    // 2619179011288566074118613.8498
    s21_decimal decimal = {{0x5A68B182, 0x15709A71, 0x54A1574B, 0x40000}};
    // 2619179011288566074118613
    s21_decimal decimal_check = {{0xB4AB11D5, 0xFA8CA1CE, 0x22AA1, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok722) {
    // -2619179011288566074118613.8498
    s21_decimal decimal = {{0x5A68B182, 0x15709A71, 0x54A1574B, 0x80040000}};
    // -2619179011288566074118613
    s21_decimal decimal_check = {{0xB4AB11D5, 0xFA8CA1CE, 0x22AA1, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok723) {
    // -49201250269138105646152.84170
    s21_decimal decimal = {{0xDC2CA5CA, 0x276D60A8, 0xFE5D500, 0x80050000}};
    // -49201250269138105646152
    s21_decimal decimal_check = {{0x8D2BBC48, 0x3482D862, 0xA6B, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok724) {
    // 49201250269138105646152.84170
    s21_decimal decimal = {{0xDC2CA5CA, 0x276D60A8, 0xFE5D500, 0x50000}};
    // 49201250269138105646152
    s21_decimal decimal_check = {{0x8D2BBC48, 0x3482D862, 0xA6B, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok725) {
    // 807850117980773387502851.9201
    s21_decimal decimal = {{0xE2BE921, 0x7A8CEBD7, 0x1A1A612A, 0x40000}};
    // 807850117980773387502851
    s21_decimal decimal_check = {{0xFC7E8503, 0xA4849225, 0xAB11, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok726) {
    // -807850117980773387502851.9201
    s21_decimal decimal = {{0xE2BE921, 0x7A8CEBD7, 0x1A1A612A, 0x80040000}};
    // -807850117980773387502851
    s21_decimal decimal_check = {{0xFC7E8503, 0xA4849225, 0xAB11, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok727) {
    // 13075303383249419419197.768264
    s21_decimal decimal = {{0xCA5A0248, 0xB388AE53, 0x2A3FA330, 0x60000}};
    // 13075303383249419419197
    s21_decimal decimal_check = {{0x94DEBE3D, 0xD0492F23, 0x2C4, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok728) {
    // -13075303383249419419197.768264
    s21_decimal decimal = {{0xCA5A0248, 0xB388AE53, 0x2A3FA330, 0x80060000}};
    // -13075303383249419419197
    s21_decimal decimal_check = {{0x94DEBE3D, 0xD0492F23, 0x2C4, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok729) {
    // 305553932278903.3566526031604
    s21_decimal decimal = {{0xBE4CC6F4, 0x98196B31, 0x9DF7B9E, 0xD0000}};
    // 305553932278903
    s21_decimal decimal_check = {{0x5197DC77, 0x115E6, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok730) {
    // -305553932278903.3566526031604
    s21_decimal decimal = {{0xBE4CC6F4, 0x98196B31, 0x9DF7B9E, 0x800D0000}};
    // -305553932278903
    s21_decimal decimal_check = {{0x5197DC77, 0x115E6, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok731) {
    // 789517492628.1382151257360128
    s21_decimal decimal = {{0x674C8700, 0x5C829A58, 0x1982BC52, 0x100000}};
    // 789517492628
    s21_decimal decimal_check = {{0xD2E8E194, 0xB7, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok732) {
    // -789517492628.1382151257360128
    s21_decimal decimal = {{0x674C8700, 0x5C829A58, 0x1982BC52, 0x80100000}};
    // -789517492628
    s21_decimal decimal_check = {{0xD2E8E194, 0xB7, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok733) {
    // 520.98892143226430055697618810
    s21_decimal decimal = {{0x94B0177A, 0x49E87C14, 0xA857318A, 0x1A0000}};
    // 520
    s21_decimal decimal_check = {{0x208, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok734) {
    // -520.98892143226430055697618810
    s21_decimal decimal = {{0x94B0177A, 0x49E87C14, 0xA857318A, 0x801A0000}};
    // -520
    s21_decimal decimal_check = {{0x208, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok735) {
    // 5335647229141514076083373419
    s21_decimal decimal = {{0x57EC56B, 0xDF610C3E, 0x113D8B3F, 0x0}};
    // 5335647229141514076083373419
    s21_decimal decimal_check = {{0x57EC56B, 0xDF610C3E, 0x113D8B3F, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok736) {
    // -5335647229141514076083373419
    s21_decimal decimal = {{0x57EC56B, 0xDF610C3E, 0x113D8B3F, 0x80000000}};
    // -5335647229141514076083373419
    s21_decimal decimal_check = {{0x57EC56B, 0xDF610C3E, 0x113D8B3F, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok737) {
    // -5269067624756.5685405230173482
    s21_decimal decimal = {{0x735A0D2A, 0xDDF74292, 0xAA40B4B2, 0x80100000}};
    // -5269067624756
    s21_decimal decimal_check = {{0xCCE77134, 0x4CA, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok738) {
    // 5269067624756.5685405230173482
    s21_decimal decimal = {{0x735A0D2A, 0xDDF74292, 0xAA40B4B2, 0x100000}};
    // 5269067624756
    s21_decimal decimal_check = {{0xCCE77134, 0x4CA, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok739) {
    // 50370.946653331974089137155142
    s21_decimal decimal = {{0x80FB6C46, 0x95AED177, 0xA2C1DED9, 0x180000}};
    // 50370
    s21_decimal decimal_check = {{0xC4C2, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok740) {
    // -50370.946653331974089137155142
    s21_decimal decimal = {{0x80FB6C46, 0x95AED177, 0xA2C1DED9, 0x80180000}};
    // -50370
    s21_decimal decimal_check = {{0xC4C2, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok741) {
    // -39808071435301.069481000861696
    s21_decimal decimal = {{0xB9108000, 0xA16D998A, 0x80A07704, 0x800F0000}};
    // -39808071435301
    s21_decimal decimal_check = {{0x89F50425, 0x2434, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok742) {
    // 39808071435301.069481000861696
    s21_decimal decimal = {{0xB9108000, 0xA16D998A, 0x80A07704, 0xF0000}};
    // 39808071435301
    s21_decimal decimal_check = {{0x89F50425, 0x2434, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok743) {
    // -6944785102.0189124291010957144
    s21_decimal decimal = {{0x30CB0F58, 0x86E539AD, 0xE065EA7B, 0x80130000}};
    // -6944785102
    s21_decimal decimal_check = {{0x9DF102CE, 0x1, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok744) {
    // 6944785102.0189124291010957144
    s21_decimal decimal = {{0x30CB0F58, 0x86E539AD, 0xE065EA7B, 0x130000}};
    // 6944785102
    s21_decimal decimal_check = {{0x9DF102CE, 0x1, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok745) {
    // 4876.9765302457221224033822431
    s21_decimal decimal = {{0xBF6626DF, 0xA069D1BD, 0x9D956782, 0x190000}};
    // 4876
    s21_decimal decimal_check = {{0x130C, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok746) {
    // -4876.9765302457221224033822431
    s21_decimal decimal = {{0xBF6626DF, 0xA069D1BD, 0x9D956782, 0x80190000}};
    // -4876
    s21_decimal decimal_check = {{0x130C, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok747) {
    // 38430574975851.465588425424939
    s21_decimal decimal = {{0x8F2D002B, 0xEF2BBB83, 0x7C2D06CB, 0xF0000}};
    // 38430574975851
    s21_decimal decimal_check = {{0xD0C51B6B, 0x22F3, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok748) {
    // -38430574975851.465588425424939
    s21_decimal decimal = {{0x8F2D002B, 0xEF2BBB83, 0x7C2D06CB, 0x800F0000}};
    // -38430574975851
    s21_decimal decimal_check = {{0xD0C51B6B, 0x22F3, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok749) {
    // -260282670.14621516841317671392
    s21_decimal decimal = {{0xB901A1E0, 0x2A0DBDA5, 0x541A13EE, 0x80140000}};
    // -260282670
    s21_decimal decimal_check = {{0xF83992E, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok750) {
    // 260282670.14621516841317671392
    s21_decimal decimal = {{0xB901A1E0, 0x2A0DBDA5, 0x541A13EE, 0x140000}};
    // 260282670
    s21_decimal decimal_check = {{0xF83992E, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok751) {
    // -6887260106024034614364.5102815
    s21_decimal decimal = {{0x3C29F2DF, 0xB645C2C8, 0xDE8A1490, 0x80070000}};
    // -6887260106024034614364
    s21_decimal decimal_check = {{0x31C1BC5C, 0x5BEF3029, 0x175, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok752) {
    // 6887260106024034614364.5102815
    s21_decimal decimal = {{0x3C29F2DF, 0xB645C2C8, 0xDE8A1490, 0x70000}};
    // 6887260106024034614364
    s21_decimal decimal_check = {{0x31C1BC5C, 0x5BEF3029, 0x175, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok753) {
    // -380.65590194416679159224018009
    s21_decimal decimal = {{0x16632459, 0x49565B09, 0x7AFF1E43, 0x801A0000}};
    // -380
    s21_decimal decimal_check = {{0x17C, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok754) {
    // 380.65590194416679159224018009
    s21_decimal decimal = {{0x16632459, 0x49565B09, 0x7AFF1E43, 0x1A0000}};
    // 380
    s21_decimal decimal_check = {{0x17C, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok755) {
    // -504455714.16095311079688355170
    s21_decimal decimal = {{0xC65BBD62, 0x14855E29, 0xA2FF9942, 0x80140000}};
    // -504455714
    s21_decimal decimal_check = {{0x1E116222, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok756) {
    // 504455714.16095311079688355170
    s21_decimal decimal = {{0xC65BBD62, 0x14855E29, 0xA2FF9942, 0x140000}};
    // 504455714
    s21_decimal decimal_check = {{0x1E116222, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok757) {
    // 47012.147086725297949511471129
    s21_decimal decimal = {{0xA26B5019, 0x3B5615EF, 0x97E78960, 0x180000}};
    // 47012
    s21_decimal decimal_check = {{0xB7A4, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok758) {
    // -47012.147086725297949511471129
    s21_decimal decimal = {{0xA26B5019, 0x3B5615EF, 0x97E78960, 0x80180000}};
    // -47012
    s21_decimal decimal_check = {{0xB7A4, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok759) {
    // 309292422894071.68958464124693
    s21_decimal decimal = {{0x88F5E715, 0x2CDFC557, 0x63F011D0, 0xE0000}};
    // 309292422894071
    s21_decimal decimal_check = {{0xC0FF91F7, 0x1194C, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok760) {
    // -309292422894071.68958464124693
    s21_decimal decimal = {{0x88F5E715, 0x2CDFC557, 0x63F011D0, 0x800E0000}};
    // -309292422894071
    s21_decimal decimal_check = {{0xC0FF91F7, 0x1194C, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok761) {
    // -13557.48242636311603474486618
    s21_decimal decimal = {{0x1696555A, 0x801FC3C6, 0x46172DB, 0x80170000}};
    // -13557
    s21_decimal decimal_check = {{0x34F5, 0x0, 0x0, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok762) {
    // 13557.48242636311603474486618
    s21_decimal decimal = {{0x1696555A, 0x801FC3C6, 0x46172DB, 0x170000}};
    // 13557
    s21_decimal decimal_check = {{0x34F5, 0x0, 0x0, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok763) {
    // 581040608149733468071159010.54
    s21_decimal decimal = {{0xFEDF687E, 0x4A8BFDB7, 0xBBBE8D78, 0x20000}};
    // 581040608149733468071159010
    s21_decimal decimal_check = {{0x7ADE64E2, 0x7BA01EB2, 0x1E0A022, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok764) {
    // -581040608149733468071159010.54
    s21_decimal decimal = {{0xFEDF687E, 0x4A8BFDB7, 0xBBBE8D78, 0x80020000}};
    // -581040608149733468071159010
    s21_decimal decimal_check = {{0x7ADE64E2, 0x7BA01EB2, 0x1E0A022, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok765) {
    // 6650079295467296275893.2037512
    s21_decimal decimal = {{0x1EDDFF88, 0xAC5A9D89, 0xD6E02AA9, 0x70000}};
    // 6650079295467296275893
    s21_decimal decimal_check = {{0xEC263DB5, 0x8063AD98, 0x168, 0x0}};

    test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_ok766) {
    // -6650079295467296275893.2037512
    s21_decimal decimal = {{0x1EDDFF88, 0xAC5A9D89, 0xD6E02AA9, 0x80070000}};
    // -6650079295467296275893
    s21_decimal decimal_check = {{0xEC263DB5, 0x8063AD98, 0x168, 0x80000000}};

    test_truncate(decimal, decimal_check);
}

Suite *floor_suite1(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("floor_suite1");
    tc_core = tcase_create("Core");


    tcase_add_test(tc_core, test_floor_ok69);
    tcase_add_test(tc_core, test_floor_ok70);
    tcase_add_test(tc_core, test_floor_ok71);
    tcase_add_test(tc_core, test_floor_ok72);
    tcase_add_test(tc_core, test_floor_ok73);
    tcase_add_test(tc_core, test_floor_ok74);
    tcase_add_test(tc_core, test_floor_ok75);
    tcase_add_test(tc_core, test_floor_ok76);
    tcase_add_test(tc_core, test_floor_ok77);
    tcase_add_test(tc_core, test_floor_ok78);
    tcase_add_test(tc_core, test_floor_ok79);
    tcase_add_test(tc_core, test_floor_ok80);
    tcase_add_test(tc_core, test_floor_ok81);
    tcase_add_test(tc_core, test_floor_ok82);
    tcase_add_test(tc_core, test_floor_ok83);
    tcase_add_test(tc_core, test_floor_ok84);
    tcase_add_test(tc_core, test_floor_ok85);
    tcase_add_test(tc_core, test_floor_ok86);
    tcase_add_test(tc_core, test_floor_ok87);
    tcase_add_test(tc_core, test_floor_ok88);
    tcase_add_test(tc_core, test_floor_ok89);
    tcase_add_test(tc_core, test_floor_ok90);
    tcase_add_test(tc_core, test_floor_ok91);
    tcase_add_test(tc_core, test_floor_ok92);
    tcase_add_test(tc_core, test_floor_ok93);
    tcase_add_test(tc_core, test_floor_ok94);
    tcase_add_test(tc_core, test_floor_ok95);
    tcase_add_test(tc_core, test_floor_ok96);
    tcase_add_test(tc_core, test_floor_ok97);
    tcase_add_test(tc_core, test_floor_ok98);
    tcase_add_test(tc_core, test_floor_ok99);
    tcase_add_test(tc_core, test_floor_ok100);
    tcase_add_test(tc_core, test_floor_ok101);
    tcase_add_test(tc_core, test_floor_ok102);
    tcase_add_test(tc_core, test_floor_ok103);
    tcase_add_test(tc_core, test_floor_ok104);
    tcase_add_test(tc_core, test_floor_ok105);
    tcase_add_test(tc_core, test_floor_ok106);
    tcase_add_test(tc_core, test_floor_ok107);
    tcase_add_test(tc_core, test_floor_ok108);
    tcase_add_test(tc_core, test_floor_ok109);
    tcase_add_test(tc_core, test_floor_ok110);
    tcase_add_test(tc_core, test_floor_ok111);
    tcase_add_test(tc_core, test_floor_ok112);
    tcase_add_test(tc_core, test_floor_ok113);
    tcase_add_test(tc_core, test_floor_ok114);
    tcase_add_test(tc_core, test_floor_ok115);
    tcase_add_test(tc_core, test_floor_ok116);
    tcase_add_test(tc_core, test_floor_ok117);
    tcase_add_test(tc_core, test_floor_ok118);
    tcase_add_test(tc_core, test_floor_ok119);
    tcase_add_test(tc_core, test_floor_ok120);
    tcase_add_test(tc_core, test_floor_ok121);
    tcase_add_test(tc_core, test_floor_ok122);
    tcase_add_test(tc_core, test_floor_ok123);
    tcase_add_test(tc_core, test_floor_ok124);
    tcase_add_test(tc_core, test_floor_ok125);
    tcase_add_test(tc_core, test_floor_ok126);
    tcase_add_test(tc_core, test_floor_ok127);
    tcase_add_test(tc_core, test_floor_ok128);
    tcase_add_test(tc_core, test_floor_ok129);
    tcase_add_test(tc_core, test_floor_ok130);
    tcase_add_test(tc_core, test_floor_ok131);
    tcase_add_test(tc_core, test_floor_ok132);
    tcase_add_test(tc_core, test_floor_ok133);
    tcase_add_test(tc_core, test_floor_ok134);
    tcase_add_test(tc_core, test_floor_ok135);
    tcase_add_test(tc_core, test_floor_ok136);
    tcase_add_test(tc_core, test_floor_ok137);
    tcase_add_test(tc_core, test_floor_ok138);
    tcase_add_test(tc_core, test_floor_ok139);
    tcase_add_test(tc_core, test_floor_ok140);
    tcase_add_test(tc_core, test_floor_ok141);
    tcase_add_test(tc_core, test_floor_ok142);
    tcase_add_test(tc_core, test_floor_ok143);
    tcase_add_test(tc_core, test_floor_ok144);
    tcase_add_test(tc_core, test_floor_ok145);
    tcase_add_test(tc_core, test_floor_ok146);
    tcase_add_test(tc_core, test_floor_ok147);
    tcase_add_test(tc_core, test_floor_ok148);
    tcase_add_test(tc_core, test_floor_ok149);
    tcase_add_test(tc_core, test_floor_ok150);
    tcase_add_test(tc_core, test_floor_ok151);
    tcase_add_test(tc_core, test_floor_ok152);
    tcase_add_test(tc_core, test_floor_ok153);
    tcase_add_test(tc_core, test_floor_ok154);
    tcase_add_test(tc_core, test_floor_ok155);
    tcase_add_test(tc_core, test_floor_ok156);
    tcase_add_test(tc_core, test_floor_ok157);
    tcase_add_test(tc_core, test_floor_ok158);
    tcase_add_test(tc_core, test_floor_ok159);
    tcase_add_test(tc_core, test_floor_ok160);

        suite_add_tcase(s, tc_core);
    return s;
}

Suite *negate_suite3(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("negate_suite3");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_negate_ok965);
    tcase_add_test(tc_core, test_negate_ok966);
    tcase_add_test(tc_core, test_negate_ok967);
    tcase_add_test(tc_core, test_negate_ok968);
    tcase_add_test(tc_core, test_negate_ok969);
    tcase_add_test(tc_core, test_negate_ok970);
    tcase_add_test(tc_core, test_negate_ok971);
    tcase_add_test(tc_core, test_negate_ok972);
    tcase_add_test(tc_core, test_negate_ok973);
    tcase_add_test(tc_core, test_negate_ok974);
    tcase_add_test(tc_core, test_negate_ok975);
    tcase_add_test(tc_core, test_negate_ok976);
    tcase_add_test(tc_core, test_negate_ok977);
    tcase_add_test(tc_core, test_negate_ok978);
    tcase_add_test(tc_core, test_negate_ok979);
    tcase_add_test(tc_core, test_negate_ok980);
    tcase_add_test(tc_core, test_negate_ok981);
    tcase_add_test(tc_core, test_negate_ok982);
    tcase_add_test(tc_core, test_negate_ok983);
    tcase_add_test(tc_core, test_negate_ok984);
    tcase_add_test(tc_core, test_negate_ok985);
    tcase_add_test(tc_core, test_negate_ok986);
    tcase_add_test(tc_core, test_negate_ok987);
    tcase_add_test(tc_core, test_negate_ok988);
    tcase_add_test(tc_core, test_negate_ok989);
    tcase_add_test(tc_core, test_negate_ok990);
    tcase_add_test(tc_core, test_negate_ok991);
    tcase_add_test(tc_core, test_negate_ok992);
    tcase_add_test(tc_core, test_negate_ok993);
    tcase_add_test(tc_core, test_negate_ok994);
    tcase_add_test(tc_core, test_negate_ok995);
    tcase_add_test(tc_core, test_negate_ok996);
    tcase_add_test(tc_core, test_negate_ok997);
    tcase_add_test(tc_core, test_negate_ok998);
    tcase_add_test(tc_core, test_negate_ok999);
    tcase_add_test(tc_core, test_negate_ok1000);
    tcase_add_test(tc_core, test_negate_ok1001);
    tcase_add_test(tc_core, test_negate_ok1002);
    tcase_add_test(tc_core, test_negate_ok1003);
    tcase_add_test(tc_core, test_negate_ok1004);
    tcase_add_test(tc_core, test_negate_ok1005);
    tcase_add_test(tc_core, test_negate_ok1006);
    tcase_add_test(tc_core, test_negate_ok1007);
    tcase_add_test(tc_core, test_negate_ok1008);
    tcase_add_test(tc_core, test_negate_ok1009);
    tcase_add_test(tc_core, test_negate_ok1010);
    tcase_add_test(tc_core, test_negate_ok1011);
    tcase_add_test(tc_core, test_negate_ok1012);
    tcase_add_test(tc_core, test_negate_ok1013);
    tcase_add_test(tc_core, test_negate_ok1014);
    tcase_add_test(tc_core, test_negate_ok1015);
    tcase_add_test(tc_core, test_negate_ok1016);
    tcase_add_test(tc_core, test_negate_ok1017);
    tcase_add_test(tc_core, test_negate_ok1018);
    tcase_add_test(tc_core, test_negate_ok1019);
    tcase_add_test(tc_core, test_negate_ok1020);

    suite_add_tcase(s, tc_core);
    return s;
}

Suite *round_suite1(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("round_suite1");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_round_ok246);
    tcase_add_test(tc_core, test_round_ok247);
    tcase_add_test(tc_core, test_round_ok248);
    tcase_add_test(tc_core, test_round_ok249);
    tcase_add_test(tc_core, test_round_ok250);
    tcase_add_test(tc_core, test_round_ok251);
    tcase_add_test(tc_core, test_round_ok252);
    tcase_add_test(tc_core, test_round_ok253);
    tcase_add_test(tc_core, test_round_ok254);
    tcase_add_test(tc_core, test_round_ok255);
    tcase_add_test(tc_core, test_round_ok256);
    tcase_add_test(tc_core, test_round_ok257);
    tcase_add_test(tc_core, test_round_ok258);
    tcase_add_test(tc_core, test_round_ok259);
    tcase_add_test(tc_core, test_round_ok260);
    tcase_add_test(tc_core, test_round_ok261);
    tcase_add_test(tc_core, test_round_ok262);

      suite_add_tcase(s, tc_core);
    return s;
}

Suite *truncate_suite2(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("truncate_suite2");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_truncate_ok666);
    tcase_add_test(tc_core, test_truncate_ok667);
    tcase_add_test(tc_core, test_truncate_ok668);
    tcase_add_test(tc_core, test_truncate_ok669);
    tcase_add_test(tc_core, test_truncate_ok670);
    tcase_add_test(tc_core, test_truncate_ok671);
    tcase_add_test(tc_core, test_truncate_ok672);
    tcase_add_test(tc_core, test_truncate_ok673);
    tcase_add_test(tc_core, test_truncate_ok674);
    tcase_add_test(tc_core, test_truncate_ok675);
    tcase_add_test(tc_core, test_truncate_ok676);
    tcase_add_test(tc_core, test_truncate_ok677);
    tcase_add_test(tc_core, test_truncate_ok678);
    tcase_add_test(tc_core, test_truncate_ok679);
    tcase_add_test(tc_core, test_truncate_ok680);
    tcase_add_test(tc_core, test_truncate_ok681);
    tcase_add_test(tc_core, test_truncate_ok682);
    tcase_add_test(tc_core, test_truncate_ok683);
    tcase_add_test(tc_core, test_truncate_ok684);
    tcase_add_test(tc_core, test_truncate_ok685);
    tcase_add_test(tc_core, test_truncate_ok686);
    tcase_add_test(tc_core, test_truncate_ok687);
    tcase_add_test(tc_core, test_truncate_ok688);
    tcase_add_test(tc_core, test_truncate_ok689);
    tcase_add_test(tc_core, test_truncate_ok690);
    tcase_add_test(tc_core, test_truncate_ok691);
    tcase_add_test(tc_core, test_truncate_ok692);
    tcase_add_test(tc_core, test_truncate_ok693);
    tcase_add_test(tc_core, test_truncate_ok694);
    tcase_add_test(tc_core, test_truncate_ok695);
    tcase_add_test(tc_core, test_truncate_ok696);
    tcase_add_test(tc_core, test_truncate_ok697);
    tcase_add_test(tc_core, test_truncate_ok698);
    tcase_add_test(tc_core, test_truncate_ok699);
    tcase_add_test(tc_core, test_truncate_ok700);
    tcase_add_test(tc_core, test_truncate_ok701);
    tcase_add_test(tc_core, test_truncate_ok702);
    tcase_add_test(tc_core, test_truncate_ok703);
    tcase_add_test(tc_core, test_truncate_ok704);
    tcase_add_test(tc_core, test_truncate_ok705);
    tcase_add_test(tc_core, test_truncate_ok706);
    tcase_add_test(tc_core, test_truncate_ok707);
    tcase_add_test(tc_core, test_truncate_ok708);
    tcase_add_test(tc_core, test_truncate_ok709);
    tcase_add_test(tc_core, test_truncate_ok710);
    tcase_add_test(tc_core, test_truncate_ok711);
    tcase_add_test(tc_core, test_truncate_ok712);
    tcase_add_test(tc_core, test_truncate_ok713);
    tcase_add_test(tc_core, test_truncate_ok714);
    tcase_add_test(tc_core, test_truncate_ok715);
    tcase_add_test(tc_core, test_truncate_ok716);
    tcase_add_test(tc_core, test_truncate_ok717);
    tcase_add_test(tc_core, test_truncate_ok718);
    tcase_add_test(tc_core, test_truncate_ok719);
    tcase_add_test(tc_core, test_truncate_ok720);
    tcase_add_test(tc_core, test_truncate_ok721);
    tcase_add_test(tc_core, test_truncate_ok722);
    tcase_add_test(tc_core, test_truncate_ok723);
    tcase_add_test(tc_core, test_truncate_ok724);
    tcase_add_test(tc_core, test_truncate_ok725);
    tcase_add_test(tc_core, test_truncate_ok726);
    tcase_add_test(tc_core, test_truncate_ok727);
    tcase_add_test(tc_core, test_truncate_ok728);
    tcase_add_test(tc_core, test_truncate_ok729);
    tcase_add_test(tc_core, test_truncate_ok730);
    tcase_add_test(tc_core, test_truncate_ok731);
    tcase_add_test(tc_core, test_truncate_ok732);
    tcase_add_test(tc_core, test_truncate_ok733);
    tcase_add_test(tc_core, test_truncate_ok734);
    tcase_add_test(tc_core, test_truncate_ok735);
    tcase_add_test(tc_core, test_truncate_ok736);
    tcase_add_test(tc_core, test_truncate_ok737);
    tcase_add_test(tc_core, test_truncate_ok738);
    tcase_add_test(tc_core, test_truncate_ok739);
    tcase_add_test(tc_core, test_truncate_ok740);
    tcase_add_test(tc_core, test_truncate_ok741);
    tcase_add_test(tc_core, test_truncate_ok742);
    tcase_add_test(tc_core, test_truncate_ok743);
    tcase_add_test(tc_core, test_truncate_ok744);
    tcase_add_test(tc_core, test_truncate_ok745);
    tcase_add_test(tc_core, test_truncate_ok746);
    tcase_add_test(tc_core, test_truncate_ok747);
    tcase_add_test(tc_core, test_truncate_ok748);
    tcase_add_test(tc_core, test_truncate_ok749);
    tcase_add_test(tc_core, test_truncate_ok750);
    tcase_add_test(tc_core, test_truncate_ok751);
    tcase_add_test(tc_core, test_truncate_ok752);
    tcase_add_test(tc_core, test_truncate_ok753);
    tcase_add_test(tc_core, test_truncate_ok754);
    tcase_add_test(tc_core, test_truncate_ok755);
    tcase_add_test(tc_core, test_truncate_ok756);
    tcase_add_test(tc_core, test_truncate_ok757);
    tcase_add_test(tc_core, test_truncate_ok758);
    tcase_add_test(tc_core, test_truncate_ok759);
    tcase_add_test(tc_core, test_truncate_ok760);
    tcase_add_test(tc_core, test_truncate_ok761);
    tcase_add_test(tc_core, test_truncate_ok762);
    tcase_add_test(tc_core, test_truncate_ok763);
    tcase_add_test(tc_core, test_truncate_ok764);
    tcase_add_test(tc_core, test_truncate_ok765);
    tcase_add_test(tc_core, test_truncate_ok766);

       suite_add_tcase(s, tc_core);
    return s;
}