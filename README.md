Для запуска конкретного make-файла используйте флаг `-f`:
`make -f Makefiletest rebuild`

## Исходники: 

### arithmetic.c

1. int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
2. int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
3. int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
4. int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
5. int s21_add_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
6. int s21_sub_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
7. int s21_mul_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌
8. int s21_div_util(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);❌

### binary_operators.c

1. int s21_bin_operator_and(int num_one, int num_two); ✅
2. int s21_bin_operator_or(int num_one, int num_two); ✅
3. int s21_bin_operator_xor(int num_one, int num_two);✅
4. void s21_bin_operators_cycle(s21_big_decimal num_one, 5.s21_big_decimal num_two,
                         s21_big_decimal* result,
                         int (*bin_operator)(int num_one, int num_two));✅
6. void s21_bin_and(s21_big_decimal num_one, s21_big_decimal num_two,  s21_big_decimal* result);✅
7. void s21_bin_or(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result);✅
8. void s21_bin_xor(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result);✅
9. void s21_bin_invert(s21_big_decimal* num);✅
10. void s21_bin_shift_left_one(s21_big_decimal* num);✅
11. void s21_bin_shift_left(s21_big_decimal* num, int shift); ✅

### utils.c

1. int is_null(s21_decimal num);❌
2. void null_decimal(s21_decimal* num);❌
3. int get_sign(s21_decimal num);❌
4. int get_scale(s21_decimal num);❌
5. int get_bit(s21_decimal num, int bit);❌
6. void set_sign(s21_decimal* num, int sign_value);❌
7. void set_scale(s21_decimal* num, int scale_value);❌
8. void set_bit(s21_decimal* num, int bit, int value);❌
9. void print_bin_num(int num, int symbol_count); ✅
10. void print_bin_decimal(s21_decimal num); ✅
11.void print_bin_big_decimal(s21_big_decimal num); ✅

## Заголовочные файлы:

### type.h
### binary_operators.h
### arithmetic.h

