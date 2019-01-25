/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header for libmy.a
*/

#pragma once

#include <stdio.h>

/* my_char_is */
int my_char_isnum(char const c);
int my_char_islower(char const c);
int my_char_isupper(char const c);
int my_char_isalphanum(char const c);
int my_char_isprintable(char const c);
int my_char_isin(char const c, char const *src);

/* my_str_is */
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);

/* my_put */
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putchar_err(char c);
int my_putstr(char const *str);
int my_dputchar(char c, int fd);
int my_showstr(char const *str);
int my_putstr_err(char const *str);
int my_dputstr(char const *str, int fd);
int my_fputchar(char const c, FILE *stream);
int my_fputstr(char const *str, FILE *stream);

/* my_str */
char *my_revstr(char *str);
char *my_stralloc(int size);
char *my_strupcase(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpycat(char *dest, char const *str);
char *my_strstr(char *str, char const *to_find);
char *my_strcat(char const *dest, char const *src);
char *my_strncpy(char *dest, const char *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpycat(char *dest, char const *str, int nb);
char *my_strncat(char const *dest, const char *src, int n);
char *my_str_addchar(char const *str, char const c, int index);
/* almost same but lesser useful */
char *my_strcapitalize(char *str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);

/* array stuff */
int my_arraylen(char **array);
void my_free_fields(char **array);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);

/* int stuff */
int my_isneg(int n);
int my_getnbr(char const *str);
void my_sort_int_array(int *array, int size);
