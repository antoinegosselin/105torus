/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** algos
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "torus.h"
#include "my.h"

float my_abs(float x)
{
    float new_x = x;

    if (x < 0)
        new_x = x * -1;
    return (new_x);
}

double my_pow(double *params, double x)
{
    double power = (params[A4] * pow(x, 4) + params[A3] * pow(x, 3) + params[A2] * pow(x, 2) + params[A1] * x + params[A0]);

    return (power);
}

int newton(double *params)
{
    double x = 0.5;
    double x1;
    double derivate;
    double compare;
    double power;

    printf("x = %.1f\n", x);
    for (int iteration = 0; iteration < 15; iteration++) {
        derivate = (4 * (params[A4] * pow(x, 3))) + (3 * (params[A3] * pow(x, 2))) + (2 * params[A2] * x) + params[A1];
        if (derivate == 0)
            exit(84);
        power = my_pow(params, x);
        x1 = x - (power / derivate);
        compare = ((x1 - x) < 0) ? ((-1 * (x1 - x)) / x1) : ((x1 - x) / x1);
        if (compare < pow(10, params[N]))
            return (0);
        printf("x = %.*f\n", (int)(-1 * params[N]), x1);
        x = x1;
    }
    return (84);
}

int secant(double *params)
{
    double xless1 = 0;
    double x = 1;
    double xplus1;
    double div;
    double compare;
    double ent;
    double japon;
    double decimal;
    int oui;

    for (int iteration = 0; iteration < 50; iteration++) {
        div = (my_pow(params, x)) - (my_pow(params, xless1));
        if (div == 0)
            exit(84);
        xplus1 = x - ((my_pow(params, x) * (x - xless1)) / (div));
        ent = xplus1 * pow(10, (-1 * params[N]));
        decimal = modf(ent, &japon);
        oui = (decimal * 100000);
        if ((-1 * params[N]) > 8) {
            if (oui == 0)
                printf("x = %.*g\n", (int)(-1 * params[N]), xplus1);
            else
                printf("x = %.*f\n", (int)(-1 * params[N]), xplus1);
        }
        else {
            if (iteration == 0)
                printf("x = %.*g\n", (int)(-1 * params[N]), xplus1);
            else
                printf("x = %.*f\n", (int)(-1 * params[N]), xplus1);
        }
        compare = ((xplus1 - x) < 0) ? ((-1 * (xplus1 - x)) / xplus1) : ((xplus1 - x) / xplus1);
        if (compare < pow(10, params[N]))
            return (0);
        xless1 = x;
        x = xplus1;
    }
    return (84);
}