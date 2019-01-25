/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** Duplicates a given string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1));

    my_strcpy(str, src);
    return (str);
}
