CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit
CFILES = src/*

OBJS = $(CFILES:.c=.o)

TEST_FILE = s21_arithmetic_operators.c
LIB_FILE = s21_decimal.a

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov report_gcov report_lcov
RM_FILES = test_add test_mul test_sub test_div
RM_MAIN_FILES = test_add_main test_mul_main test_sub_main test_div_main

all: $(LIB_FILE)

run: $(LIB_FILE)
	$(CC) $(FLAGS) s21_!sundaeka_main.c -L. $(LIB_FILE) -o s21_decimal
	./s21_decimal

reb: clean clang all run clean

test: $(LIB_FILE)
	$(CC) $(FLAGS) $(TEST_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test
	./test

test_add: clean $(CFILES)
	$(CC) tests/s21_decimal_test_add.c  tests/arithmetic/test_add.c $(CFILES) $(CHECK_FLAGS) -o test_add
	./test_add

test_sub: clean $(CFILES)
	$(CC) tests/s21_decimal_test_sub.c  tests/arithmetic/test_sub.c $(CFILES) $(CHECK_FLAGS) -o test_sub
	./test_sub
	
test_mul: clean $(CFILES)
	$(CC) tests/s21_decimal_test_mul.c  tests/arithmetic/test_mul.c $(CFILES) $(CHECK_FLAGS) -o test_mul
	./test_mul

test_div: clean $(CFILES)
	$(CC) tests/s21_decimal_test_div.c  tests/arithmetic/test_div.c $(CFILES) $(CHECK_FLAGS) -o test_div
	./test_div

test_negate: clean $(CFILES)
	$(CC) tests/s21_decimal_test_negate.c tests/_helpers/_get_sign.c tests/other/test_negate.c $(CFILES) $(CHECK_FLAGS) -o test_negate
	./test_negate

test_truncate: clean $(CFILES)
	$(CC) tests/s21_decimal_test_truncate.c tests/_helpers/_get_sign.c tests/other/test_truncate.c tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_truncate
	./test_truncate

test_compare: clean $(CFILES)
	$(CC) tests/s21_decimal_test_compare.c tests/_helpers/_get_sign.c tests/comparison/*  tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_compare
	./test_compare

test_floor: clean $(CFILES)
	$(CC) tests/s21_decimal_test_floor.c tests/_helpers/_get_sign.c tests/other/test_floor.c tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_compare
	./test_compare
	
test_round: clean $(CFILES)
	$(CC) tests/s21_decimal_test_round.c tests/_helpers/_get_sign.c tests/other/test_round.c tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_round
	./test_round


test_add_main: clean $(CFILES) 
	$(CC) main_files/s21_decimal_test_add_main.c $(CFILES) $(CHECK_FLAGS) -o test_add_main
	./test_add_main

test_sub_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_sub_main.c tests/_helpers/_debug.c tests/_helpers/_get_sign.c  $(CFILES) $(CHECK_FLAGS) -o test_sub_main
	./test_sub_main
	
test_mul_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_mul_main.c  tests/_helpers/_debug.c tests/_helpers/_get_sign.c $(CFILES) $(CHECK_FLAGS) -o test_mul_main
	./test_mul_main

test_div_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_div_main.c tests/_helpers/_debug.c tests/_helpers/_get_sign.c $(CFILES) $(CHECK_FLAGS) -o test_div_main
	./test_div_main

test_negate_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_negate_main.c tests/_helpers/_get_sign.c tests/_helpers/_debug.c tests/other/test_negate.c $(CFILES) $(CHECK_FLAGS) -o test_negate
	./test_negate

test_truncate_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_truncate_main.c tests/_helpers/_get_sign.c tests/_helpers/_debug.c tests/other/test_truncate.c tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_truncate
	./test_truncate

test_floor_main: clean $(CFILES)
	$(CC) main_files/s21_decimal_test_floor_main.c tests/_helpers/_get_sign.c tests/_helpers/_debug.c tests/other/test_floor.c tests/_helpers/_decimal_is_full_equal.c $(CFILES) $(CHECK_FLAGS) -o test_floor_main
	./test_floor_main


gcov_report:
	$(CC) $(FLAGS) $(TEST_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test
	./gcov_test
	mkdir -p report_gcov
	gcovr --html-details -o ./report_gcov/report.html

gcov_report_lcov:
	$(CC) $(FLAGS) $(TEST_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test_lcov
	./gcov_test_lcov
	lcov --capture --directory . --output-file coverage.info --rc branch_coverage=1
	genhtml --branch-coverage coverage.info --output-directory report_lcov

$(LIB_FILE): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf *.o *.a report $(FILES_REPORT) s21_decimal $(RM_FILES) $(RM_MAIN_FILES) 


clang:
	clang-format -i *.h *.c
