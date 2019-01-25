/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** torus
*/

#ifndef TORUS_H
#define TORUS_H

enum {
    A4,
    A3,
    A2,
    A1,
    A0,
    N
};

enum {
    bisection_enum = 1,
    newton_enum,
    secant_enum
};

double my_pow(double *params, double x);
int newton(double *params);
int secant(double *params);
int bisection(double *params);
int check_error(int argc, char *argv[]);

#endif //TORUS_H