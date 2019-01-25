/*
** EPITECH PROJECT, 2018
** my_fputchar.c
** File description:
** Puts a char on the given stream
*/

#include <unistd.h>
#include <stdio.h>

int my_fputchar(char const c, FILE *stream)
{
    fwrite(&c, sizeof(char), 1, stream);
    return (1);
}