/*
** EPITECH PROJECT, 2018
** my_strcpycat.c
** File description:
** Concatenates two strings together, without changing the pointer
*/

#include "my.h"

char *my_strcpycat(char *dest, char const *str)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; str[i] != '\0'; i++)
        dest[len + i] = str[i];
    dest[len + i] = '\0';
    return (dest);
}
