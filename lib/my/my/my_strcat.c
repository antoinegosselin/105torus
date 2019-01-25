/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** Concatenates two given strings
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char const *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int size = len_dest + my_strlen(src);
    char *return_str = malloc(sizeof(char) * (size + 1));

    if (return_str == NULL)
        return (NULL);
    my_strcpy(return_str, dest);
    my_strcpy(&return_str[len_dest], src);
    free((char *)dest);
    free((char *)src);
    return (return_str);
}