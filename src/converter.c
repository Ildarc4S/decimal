#include "../include/converter.h"
#include "../include/utils.h"
#include "../include/compare.h"
#include "../include/round.h"
#include "math.h"


int s21_from_float_to_decimal(float src, s21_decimal *dst) {}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
    int result_code = 0;
    
    if (dst == NULL) {
        result_code = 1;
    } else {
        int sign = 0; 
        if (src < 0) {
            sign = 1;
            if (src != 0x80000000) {
                src = -src;
            }
        }
        
        s21_null_decimal(dst);
        dst->bits[0] = src;
        s21_set_sign(dst, sign);
    }

    return result_code;
}
int s21_from_decimal_to_int(s21_decimal src, int *dst) {
    int result_code = 0;
    if (dst == NULL) {
        result_code = 1;
    } else {
        *dst = 0;
        s21_decimal min_int_decimal = {{0x80000000, 0x00000000, 0x00000000, 0x80000000}}; // -2147483648
        s21_decimal max_int_decimal = {{0x7FFFFFFF, 0x00000000, 0x00000000, 0x00000000}}; // 2147483647
        s21_decimal trunc_decimal = {{0, 0, 0, 0}};

        s21_truncate(src, &trunc_decimal);
        if (s21_is_less(trunc_decimal, min_int_decimal)){
            result_code = 1;
        } else if (s21_is_greater(trunc_decimal, max_int_decimal)){
            result_code = 1;
        } else{
            *dst = trunc_decimal.bits[0];
            // // printf("Sign:");
            // for (int j = 0; j < DECIMAL_LENGTH-1; j++) {
            //     for (int i = 31; i >= 0; i--) {
            //         if (s21_is_set_bit(trunc_decimal.bits[j], i) != 0) {
            //             *dst += pow(2, 31*j + i);
            //         }
            //     }
            // }
            if (s21_get_sign(trunc_decimal)) {
                *dst = -*dst;
            }
        }
    }
    return result_code;
    
}
int s21_from_decimal_to_float(s21_decimal src, float *dst) {}
