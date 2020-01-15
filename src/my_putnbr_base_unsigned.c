/*
** EPITECH PROJECT, 2019
** my_putnbr_base_unsigned.c
** File description:
** my_putnbr_base_unsigned.c
*/

#include "../include/my.h"

int my_putnbr_base_unsigned(int n, char const *base)
{
    int len_base = my_strlen(base);

    if (n)
        my_putnbr_base_unsigned(n / len_base, base);
    else
        return (0);
    my_putchar(base[n % len_base]);
    return (0);
}
