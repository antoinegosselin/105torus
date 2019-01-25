/*
** EPITECH PROJECT, 2018
** my_fputstr.c
** File description:
** Puts a string on the given stream
*/

#include <stdio.h>
#include "my.h"

int my_fputstr(char const *str, FILE *stream)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len += my_fputchar(str[i], stream);
    return (len);
}