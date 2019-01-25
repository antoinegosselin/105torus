/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** Compares two given strings (for n bytes)
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && i < n) {
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}