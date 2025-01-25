#include <stdlib.h>

#include "./../include/s21_decimal.h"
#include "./test.h"

int main(void) {
  int number_failed;
  SRunner *sr;

  sr = srunner_create(NULL);
  srunner_add_suite(sr, div_suite1());
//   srunner_add_suite(sr, div_suite2());
//   srunner_add_suite(sr, div_suite3());
//   srunner_add_suite(sr, div_suite4());
//   srunner_add_suite(sr, div_suite5());
//   srunner_add_suite(sr, div_suite6());
//   srunner_add_suite(sr, div_suite7());
//   srunner_add_suite(sr, div_suite8());
//   srunner_add_suite(sr, div_suite9());
//   srunner_add_suite(sr, div_suite10());
//   srunner_add_suite(sr, div_suite11());
//   srunner_add_suite(sr, div_suite12());
//   srunner_add_suite(sr, div_suite13());
//   srunner_add_suite(sr, div_suite14());
//   srunner_add_suite(sr, div_suite15());
//   srunner_add_suite(sr, div_suite16());
//   srunner_add_suite(sr, div_suite17());
//   srunner_add_suite(sr, div_suite18());

  srunner_set_fork_status(sr, CK_NOFORK);
  // Используем данный блок для вывода подробно про каждый тест с разбиением по
  // блокам
  srunner_set_log(sr, "-");
  srunner_run_all(
      sr, CK_SILENT);  // CK_SILENT || CK_MINIMAL || CK_NORMAL || CK_VERBOSE
  // Либо данный блок вместо предыдущего для вывода только ошибок и общего
  // результата
//   srunner_run_all(sr, CK_NORMAL);

  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
