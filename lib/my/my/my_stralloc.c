/*
** EPITECH PROJECT, 2018
** my_stralloc.c
** File description:
** Allocates a char *, then adds '\0's everywhere
*/

#include <stdlib.h>

char *my_stralloc(int size, char c)
{
    char *str = malloc(sizeof(char) * (size + 1));
    int i;

    if (str == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        str[i] = c;
    str[i] = '\0';
    return (str);
}