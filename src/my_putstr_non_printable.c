/*
** EPITECH PROJECT, 2019
** my_putstr_non_printable.c
** File description:
** my_putstr_non_printable.c
*/

#include "../include/my.h"

int my_putnbr_base_unsigned(int nb, char const *base);

int my_putstr_non_printable(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar(92);
            nb = str[i];
            if (nb >= 0 && nb <= 7)
                my_putstr("00");
            my_putnbr_base_unsigned(nb, "01234567");
        } else
            my_putchar(str[i]);
    }
}
