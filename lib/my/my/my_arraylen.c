/*
** EPITECH PROJECT, 2018
** my_arraylen.c
** File description:
** Returns the length of a char **
*/

int my_arraylen(char **array)
{
    int i = 0;

    while (array[i] != 0)
        i++;
    return (i);
}