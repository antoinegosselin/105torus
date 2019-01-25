/*
** EPITECH PROJECT, 2018
** my_free_fields.c
** File description:
** Frees fields off a char**
*/

#include <stdlib.h>

void my_free_fields(char **array)
{
    for (int i = 0; array[i] != 0; i++)
        free(array[i]);
    free(array);
}