/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** Works on the bisection method
*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "torus.h"

static int check_solution(double *params, double xn)
{
    double result = my_pow(params, xn);

    if (((result < 0) ? -result : result) < powf(10, params[N]))
        return (1);
    else
        return (0);
}

static int recursive(double *params, double x0, double x1, int decimals)
{
    double xn = (x0 + x1) / 2;

    if (decimals > 50)
        exit(84);
    if (check_solution(params, xn) == 1) {
        printf("x = %.*f\n", (decimals < -1 * params[N]) ? decimals : (int)(-1 * params[N]), xn);
        return (0);
    }
    if (my_pow(params, xn) * my_pow(params, x0) < 0) {
        printf("x = %.*f\n", (decimals < -1 * params[N]) ? decimals : (int)(-1 * params[N]), xn);
        return (recursive(params, x0, xn, ++decimals));
    } else {
        printf("x = %.*f\n", (decimals < -1 * params[N]) ? decimals : (int)(-1 * params[N]), xn);
        return (recursive(params, xn, x1, ++decimals));
    }
    return (0);
}

int bisection(double *params)
{
    if (check_solution(params, 0.0) == 1)
        return (0);
    if (check_solution(params, 1.0) == 1)
        return (0);
    return (recursive(params, 0.0, 1.0, 1));
}