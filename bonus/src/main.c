/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Main function
*/

#include <math.h>
#include <stdlib.h>
#include "../include/my.h"

enum {
    A5,
    A4,
    A3,
    A2,
    A1,
    A0,
    N
};

float my_abs(float x)
{
    float new_x = x;

    if (x < 0)
        new_x = x * -1;
    return (new_x);
}

double my_pow(double *params, double x)
{
    double power = (params[A5] * pow(x, 5) + params[A4] * pow(x, 4) + params[A3] * pow(x, 3) + params[A2] * pow(x, 2) + params[A1] * x + params[A0]);

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
        derivate = (5 * (params[A5] * pow(x, 4))) + (4 * (params[A4] * pow(x, 3))) + (3 * (params[A3] * pow(x, 2))) + (2 * params[A2] * x) + params[A1];
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

int main(int argc, char *argv[])
{
    if (argc != 8)
        return (84);
    newton((double [7]){atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]), atof(argv[6]), (-1 * atof(argv[7]))});
    return (0);
}