/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Main function
*/

#include <stdlib.h>
#include "my.h"
#include "torus.h"

int main(int argc, char *argv[])
{
    int mode = check_error(argc, argv);

    if (mode == bisection_enum)
        bisection((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    else if (mode == newton_enum)
        newton((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    else if (mode == secant_enum)
        secant((double [6]){atof(argv[6]), atof(argv[5]), atof(argv[4]), atof(argv[3]), atof(argv[2]), (-1 * atof(argv[7]))});
    return (0);
}