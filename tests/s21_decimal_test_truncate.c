#include <stdlib.h>

#include "./../s21_decimal.h"
#include "./test.h"

int main(void) {
    int number_failed;
    SRunner *sr;

    sr = srunner_create(NULL);
    // srunner_add_suite(sr, truncate_suite0());
    srunner_add_suite(sr, truncate_suite1());
    srunner_add_suite(sr, truncate_suite2());
    srunner_add_suite(sr, truncate_suite3());
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
