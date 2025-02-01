CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
GCOV_FLAGS = --coverage
CHECK_FLAGS = -lcheck -lm -lsubunit

CFILES = source/arithmetic.c source/binary_arithmetic.c source/binary_operators.c source/compare.c source/converter.c source/round.c source/ten_functions.c source/utils.c
OBJS = $(CFILES:.c=.o)

TEST_FILE = test/*.c 
LIB_FILE = s21_decimal.a

FILES_REPORT = *.gcno *.gcda gcov_test coverage.info gcov_test_lcov report_gcov report_lcov

all: $(LIB_FILE) test

rebuild: clean all

test: $(LIB_FILE)
	$(CC) $(FLAGS) $(TEST_FILE) -L. $(LIB_FILE) $(CHECK_FLAGS) -o test_exec
	./test_exec

gcov_report:
	$(CC) $(FLAGS) $(TEST_FILE) $(CFILES) $(CHECK_FLAGS) $(GCOV_FLAGS) -o gcov_test_lcov
	./gcov_test_lcov
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory report_lcov

$(LIB_FILE): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf *.o *.a report $(FILES_REPORT) test_exec source/*.o
