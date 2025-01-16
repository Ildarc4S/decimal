Для запуска конкретного make-файла используйте флаг `-f`  
`make -f Makefiletest rebuild`  
На данный момент тестирую нормализацию. Для его сборки используй:  
`make -f MakefileTestNormalization rebuild`


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

1. void s21_binary_add(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result); ✅              
2. void s21_binary_sub(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result);✅
3. void s21_binary_mul(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result);✅
4. void s21_binary_div(s21_big_decimal num_one, s21_big_decimal num_two, s21_big_decimal* result);✅
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
void s21_decimal_to_big_decimal(s21_decimal num, s21_big_decimal* result);✅
void s21_big_decimal_to_decimal(s21_big_decimal num, s21_decimal* result);✅ 

int s21_is_null(s21_big_decimal num);✅
void s21_null_decimal(s21_decimal* num);✅
void s21_single_decimal(s21_decimal* num);✅
int s21_is_set_bit(int num, int index);✅ 

int s21_get_sign(s21_decimal num);✅
int s21_get_big_decimal_scale(s21_big_decimal num);✅
int s21_get_decimal_scale(s21_decimal num);✅
int s21_get_bit(s21_decimal num, int bit);
int s21_get_max_bit(s21_big_decimal num);✅ 

void s21_set_sign(s21_decimal* num, int sign_value);
void s21_set_decimal_sign(s21_decimal* num, int sign_value);✅
void s21_set_big_decimal_sign(s21_big_decimal* num, int sign_value);✅
void s21_set_scale(s21_big_decimal* num, int scale_value);✅
void s21_set_decimal_scale(s21_decimal* num, int scale_value);
void s21_set_bit(s21_decimal* num, int bit, int value);✅

int s21_negate(s21_decimal value, s21_decimal *result);✅

void s21_print_bin_num(int num, int symbol_count);✅
void s21_print_bin_decimal(s21_decimal num);✅
void s21_print_bin_big_decimal(s21_big_decimal num);✅

void s21_normalization(s21_big_decimal* num_one, s21_big_decimal* num_two);✅

### compare.c
1. int s21_is_less(s21_decimal, s21_decimal);✅
2. int s21_is_less_or_equal(s21_decimal, s21_decimal);✅
3. int s21_is_greater(s21_decimal, s21_decimal);✅
4. int s21_is_greater_or_equal(s21_decimal, s21_decimal);✅
5. int s21_is_equal(s21_decimal, s21_decimal);✅
6. int s21_is_not_equal(s21_decimal, s21_decimal);✅

### round.c
1. int s21_floor(s21_decimal value, s21_decimal *result);❌
2. int s21_round(s21_decimal value, s21_decimal *result);❌
3. void s21_banck_round(s21_decimal value, s21_decimal *result);❌
4. int s21_truncate(s21_decimal value, s21_decimal *result);❌

### converter.c

1. int s21_from_int_to_decimal(int src, s21_decimal *dst);❌
2. int s21_from_float_to_decimal(float src, s21_decimal *dst);❌
3. int s21_from_decimal_to_int(s21_decimal src, int *dst);❌
4. int s21_from_decimal_to_float(s21_decimal src, float *dst);❌

## Заголовочные файлы:

### type.h
### compare.h
### converter.h
### round.h
### utils.h
### binary_operators.h
### arithmetic.h

