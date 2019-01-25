/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Gets the length of a given string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}