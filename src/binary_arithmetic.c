#include "../include/binary_arithmetic.h"
#include "../include/ten_functions.h"

void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp_decimal = num_two;
  s21_big_decimal res_decimal = num_one;

  int decimal_is_null = 1;
  while (!s21_is_null(temp_decimal)) {
    decimal_is_null = 0;
    s21_big_decimal temp;
    s21_null_big_decimal(&temp);
    s21_bin_and(res_decimal, temp_decimal, &temp);
    s21_bin_shift_left_one(&temp);
    s21_bin_xor(res_decimal, temp_decimal, &res_decimal);
    temp_decimal = temp;
  }
  *result = res_decimal;
}

void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal singular = {{1, 0, 0, 0, 0, 0}};
  s21_bin_invert(&num_two);
  s21_binary_add(num_two, singular, &num_two);
  s21_binary_add(num_one, num_two, result);
}

void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
  s21_big_decimal temp = num_one;
  int max_bit_index = s21_get_max_bit(num_two);
  for (int i = 0; i <= max_bit_index; i++) {
    if (s21_is_set_bit(num_two.bits[i / 32], i % 32)) {
      s21_binary_add(*result, temp, result);
    }
    s21_bin_shift_left_one(&temp);
  }
}

// void s21_binary_div_cel(s21_big_decimal num_one, s21_big_decimal num_two,
//                     s21_big_decimal* result, s21_big_decimal* remainder) {
//     s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
//     *remainder = num_one;
//     s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};

//     int l1 = s21_get_max_bit(num_one);
//     int l2 = s21_get_max_bit(num_two);

//     int dif = l1 - l2 + 1;

//     while (dif >= 0) {
//         s21_big_decimal temp = num_two;
//         s21_bin_shift_left(&temp, dif);

//         if (s21_big_sravnivatel(*remainder, temp) >= 0) {
//             s21_binary_sub(*remainder, temp, remainder);
//             s21_binary_add(res, one, &res);
//         }

//         if (dif != 0) {
//             s21_bin_shift_left_one(&res);
//         }
//         dif--;
//     }

//     *result = res; 
// }
// 30 / 8 = 

void s21_binary_div_cel(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result, s21_big_decimal* remainder) {
    s21_big_decimal res = num_one;
    s21_null_big_decimal(result);
    *remainder = num_one;
    s21_big_decimal one = {{1, 0, 0, 0, 0, 0, 0}};

    
    while (s21_big_sravnivatel(res, num_two) >= 0) {
      int q = 0;
      num_one = res;
      s21_big_decimal temp = num_two;
      while (s21_big_sravnivatel(num_one, temp) >= 0) {
        temp = num_two;
        s21_bin_shift_left(&temp, q+1);
        // s21_print_bin_big_decimal(temp);
        q++;
      }
      s21_big_decimal tk = {{1, 0, 0, 0, 0, 0, 0}};
      s21_bin_shift_left(&tk, q);
      s21_binary_add(*result, tk, result);  

      s21_big_decimal t = num_two;
      s21_bin_shift_left(&t, q > 0 ? q-1 : q);

      s21_null_big_decimal(&res);
      s21_binary_sub(num_one, t, &res);
    }
    *remainder = res;
}

void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two,
                    s21_big_decimal* result) {
    static int test_num = 1;
    printf("%d\n", test_num++);
    s21_big_decimal res, rem, temp;

    s21_null_big_decimal(&res);
    s21_null_big_decimal(&rem);
    s21_null_big_decimal(&temp);
    int bit_count = 0;
    int scale = s21_get_big_decimal_scale(num_one) - s21_get_big_decimal_scale(num_two);
    do {
      s21_mul_to_ten(&res);
      scale++;
      bit_count++;
      s21_binary_div_cel(num_one, num_two, &temp, &num_one);
      s21_binary_add(res, temp, &res);
      s21_mul_to_ten(&num_one);
    } while(!s21_is_null(num_one) && bit_count <= 96);
    s21_set_scale(&res, scale-1);
    *result = res;
    printf("PRINT\n");
    s21_print_bin_big_decimal(res);
}
