/*
** EPITECH PROJECT, 2018
** my_putstr_fd.c
** File description:
** Puts an std on the given fd
*/

#include "my.h"

int my_dputstr(char const *str, int fd)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len += my_dputchar(str[i], fd);
    return (len);
}