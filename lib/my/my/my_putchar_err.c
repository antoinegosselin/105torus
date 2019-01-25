/*
** EPITECH PROJECT, 2018
** my_putchar_err.c
** File description:
** Puts a char (stderr)
*/

#include <unistd.h>

void my_putchar_err(char c)
{
    write(2, &c, 1);
}