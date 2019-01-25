/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** Gets a given string into an array composed of its words
*/

#include <stdlib.h>
#include "my.h"

static int my_bool_split(char const c)
{
    if (c == '\0')
        return (1);
    if (c == ' ')
        return (1);
    return (0);
}

static int my_count_nb_in_string(char const *str, int len)
{
    int nb_count = 0;

    for (int i = 0; i < len; i++) {
        if (str[0] != '\0' && !nb_count)
            nb_count++;
        if (my_bool_split(str[i]) == 1)
            nb_count++;
    }
    return (nb_count);
}

char **my_str_to_word_array(char const *str)
{
    int nb_count = my_count_nb_in_string(str, my_strlen(str));
    char **nb_array = malloc(sizeof(char *) * (nb_count + 1));
    int pos1 = 0;
    int pos2 = 0;
    int nbers_copied = 0;

    if (nb_array == NULL)
        return (NULL);
    while (nbers_copied < nb_count) {
        while (my_bool_split(str[pos1]) == 0)
            pos1++;
        nb_array[nbers_copied] = my_strndup(&str[pos2], (pos1 - pos2));
        if (nb_array[nbers_copied] == NULL)
            return (NULL);
        pos2 = pos1++;
        nbers_copied++;
    }
    nb_array[nbers_copied] = 0;
    return (nb_array);
}