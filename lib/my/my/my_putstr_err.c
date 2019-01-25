/*
** EPITECH PROJECT, 2018
** my_putstr_err.c
** File description:
** Puts a string (stderr)
*/

#include "my.h"

int my_putstr_err(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar_err(str[i]);
    return (0);
}