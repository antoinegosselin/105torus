/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Swaps two ints
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}