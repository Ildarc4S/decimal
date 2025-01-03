#include "s21_test.h"

/**
 * нужно добавить цветовую индексацию
 * и хороший подсчет и вывод результатов теста
 */

int main(void) {
  Suite *div_test = div_test_fun();

  SRunner *suite_runner = srunner_create(div_test_fun);

  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  if (failed_count != 0) {
    // Сигнализируем о том, что тестирование прошло неудачно.
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}