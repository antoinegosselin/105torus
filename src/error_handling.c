/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** File about error handling
*/

#include <string.h>
#include <stdlib.h>
#include "my.h"

static int display_usage(int return_val)
{
    printf("USAGE\n");
    printf("\t./105torus opt a0 a1 a2 a3 a4 n\n");
    printf("DESCRIPTION\n");
    printf("\topt\t\tsurface option:\n\t\t\t\t1 for the bisention method\n\t\t\t\t2 for Newton's method\n\t\t\t\t3 for the secant method\n");
    printf("\ta[0-4]\tcoefficients of the equation\n");
    printf("\tn\t\tprecision (the application of the polynomial to the solution should\n");
    printf("\t\t\tbe smaller than 10^-n)\n");
    return (return_val);
}

int check_error(int argc, char *argv[])
{
    if (argc == 2 && strcmp(argv[1], "-h"))
        exit(display_usage(0));
    if (argc != 8)
        exit(display_usage(84));
    if (strcmp(argv[1], "1") != 0 && strcmp(argv[1], "2") != 0 && strcmp(argv[1], "3") != 0)
        exit(display_usage(84));
    for (int i = 2; i < 7; i++) {
        if (argv[i][0] == '-' && my_strlen(argv[i]) > 1) {
            if (my_str_isnum(&argv[i][1]) == 0)
                exit(display_usage(84));
        } else {
            if (my_str_isnum(argv[i]) == 0)
                exit(display_usage(84));
        }
    }
    if (my_str_isnum(argv[7]) == 0)
        exit(display_usage(84));
    return (atoi(argv[1]));
}