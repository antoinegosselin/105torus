/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** Concatenates two strings together (n bytes)
*/

#include <stdlib.h>
#include "my.h"

char *my_strncat(char const *dest, const char *src, int n)
{
    int len_dest = my_strlen(dest);
    int size = len_dest + my_strlen(src);
    char *return_str = malloc(sizeof(char) * (size + 1));

    if (return_str == NULL)
        return (NULL);
    my_strcpy(return_str, dest);
    my_strncpy(&return_str[len_dest], src, n);
    free((char *)dest);
    free((char *)src);
    return (return_str);
}