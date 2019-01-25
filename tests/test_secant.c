/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** test_secant
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

Test(secant, subject)
{
    char *argv[8] = {"./105torus", "3", "-1", "0", "6", "-5", "1", "12"};

    redirect_criterion();
    secant((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.529411764706\nx = 0.522748529888\nx = 0.522739998945\nx = 0.522740003526\nx = 0.522740003526\n");
}

Test(secant, subject2)
{
    char *argv[8] = {"./105torus", "3", "-1", "0", "6", "-5", "2", "10"};

    redirect_criterion();
    secant((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.3333333333\nx = 0.4653465347\nx = 0.5035248022\nx = 0.4999415114\nx = 0.4999999052\nx = 0.5000000000\nx = 0.5000000000\n");
}