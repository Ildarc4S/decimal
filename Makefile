CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit

CFILES = s21_arithmetic_operators.c s21_auxiliary_fncs.c s21_binary_operations.c s21_comparison.c s21_other_fncs.c s21_shift.c s21_!sundaeka_main.c
OBJS = $(CFILES:.c=.o)

TEST_FILE = s21_arithmetic_operators.c
LIB_FILE = s21_decimal.a

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov report_gcov report_lcov

all: $(LIB_FILE)

run: $(LIB_FILE)
	$(CC) $(FLAGS) s21_!sundaeka_main.c -L. $(LIB_FILE) -o s21_decimal
	./s21_decimal

reb: clean clang all run clean

test: $(LIB_FILE)
	$(CC) $(FLAGS) $(TEST_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test
	./test

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
	rm -rf *.o *.a report $(FILES_REPORT) s21_decimal test

clang:
	clang-format -i *.h *.c
