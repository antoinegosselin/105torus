/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** Prints N is number is negative, P otherwise
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}