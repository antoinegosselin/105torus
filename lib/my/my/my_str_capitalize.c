/*
** EPITECH PROJECT, 2018
** my_str_capitalize.c
** File description:
** Puts uppercase letters in the biggining of each word, lowercase otherwise
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int length = my_strlen(str);

    for (int i = 0; i < length; i++) {
        if (i == 0 && my_char_islower(str[i]))
            str[i] -= 32;
        if (i != 0 && str[i - 1] == ' ' && my_char_islower(str[i]))
            str[i] -= 32;
        if (i != 0 && str[i - 1] == '+' && my_char_islower(str[i]))
            str[i] -= 32;
        if (i != 0 && str[i - 1] == '-' && my_char_islower(str[i]))
            str[i] -= 32;
        if (i && my_char_isalphanum(str[i - 1]) && my_char_islower(str[i]))
            str[i] -= 32;
    }
    return (str);
}