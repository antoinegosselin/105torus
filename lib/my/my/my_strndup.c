/*
** EPITECH PROJECT, 2018
** my_strndup.c
** File description:
** Duplicates a given string (n bytes)
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(char const *src, int n)
{
    int len = my_strlen(src);
    int size = (len > n) ? n : len;
    char *str = malloc(sizeof(char) * (size + 1));

    if (str == NULL)
        return (NULL);
    my_strncpy(str, src, n);
    return (str);
}