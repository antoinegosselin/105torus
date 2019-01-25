/*
** EPITECH PROJECT, 2018
** test_
** File description:
** Criterion tests for
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "torus.h"

static void redirect_criterion(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(newton, subject)
{
    char *argv[8] = {"./105torus", "2", "-1", "0", "6", "-5", "1", "12"};

    redirect_criterion();
    newton((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.522727272727\nx = 0.522740003514\nx = 0.522740003526\n");
}

Test(newton, subject2)
{
    char *argv[8] = {"./105torus", "2", "-6", "7", "8", "-4", "2", "6"};

    redirect_criterion();
    newton((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.567308\nx = 0.565648\nx = 0.565647\n");
}

Test(newton, subject3)
{
    char *argv[8] = {"./105torus", "2", "-8", "9", "10", "11", "12", "8"};

    redirect_criterion();
    newton((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.46616541\nx = 0.46453144\nx = 0.46452782\n");
}

Test(newton, subject4)
{
    char *argv[8] = {"./105torus", "2", "-4", "9", "2", "-3", "1", "15"};

    redirect_criterion();
    newton((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.425675675675676\nx = 0.426217549755873\nx = 0.426217573064974\n");
}