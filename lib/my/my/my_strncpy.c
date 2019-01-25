/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** Copies a string into another (n bytes)
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;
    int j;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (j = i; j <= n; j++)
        dest[j] = '\0';
    return (dest);
}