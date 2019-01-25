/*
** EPITECH PROJECT, 2018
** Concatenates two given string without changing the pointer (n bytes)
** File description:
** my_strncpycat.c
*/

#include "my.h"

char *my_strncpycat(char *dest, char const *str, int nb)
{
    int len = my_strlen(dest);
    int i;

    for (i = 0; str[i] != '\0' && i < nb; i++)
        dest[len + i] = str[i];
    dest[len + i] = '\0';
    return (dest);
}