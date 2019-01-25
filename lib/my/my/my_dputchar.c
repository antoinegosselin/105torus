/*
** EPITECH PROJECT, 2018
** my_putchar_fd.c
** File description:
** Puts a char on the given fd
*/

#include <unistd.h>

int my_dputchar(char c, int fd)
{
    write(fd, &c, 1);
    return (1);
}