/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** test_bisection
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

Test(bisection, a)
{
    char *argv[8] = {"./105torus", "1", "-4", "9", "2", "-3", "1", "5"};

    redirect_criterion();
    bisection((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.25\nx = 0.375\nx = 0.4375\nx = 0.40625\nx = 0.42188\nx = 0.42969\nx = 0.42578\nx = 0.42773\nx = 0.42676\nx = 0.42627\nx = 0.42603\nx = 0.42615\nx = 0.42621\nx = 0.42624\nx = 0.42622\nx = 0.42622\nx = 0.42622\nx = 0.42622\n");
}

Test(bisection, b)
{
    char *argv[8] = {"./105torus", "1", "1", "0", "0", "0", "-5", "5"};

    redirect_criterion();
    bisection((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    fflush(stdout);
    cr_assert_stdout_eq_str("x = 0.5\nx = 0.75\nx = 0.625\nx = 0.6875\nx = 0.65625\nx = 0.67188\nx = 0.66406\nx = 0.66797\nx = 0.66992\nx = 0.66895\nx = 0.66846\nx = 0.66870\nx = 0.66882\nx = 0.66876\nx = 0.66873\nx = 0.66875\nx = 0.66874\n");
}