/*
** EPITECH PROJECT, 2019
** hashtag_case.c
** File description:
** hashtag_case.c
*/

#include "../include/my.h"
#include "../include/my_printf.h"

int flags(char const *str, int i, va_list ap)
{
    switch (str[i + 2]) {
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 'i':
    case 'd':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'u':
        my_putnbr_base_unsigned(va_arg(ap, int), "0123456789");
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    default:
        break;
    }
}

int hashtag_case(char const *str, int i, va_list ap)
{
    switch (str[i + 2]) {
    case 'o':
        my_putstr("0");
        my_putnbr_base_unsigned(va_arg(ap, int), "01234567");
        break;
    case 'x':
        my_putstr("0x");
        my_putnbr_base_unsigned(va_arg(ap, int), "0123456789abcdef");
        break;
    case 'X':
        my_putstr("0X");
        my_putnbr_base_unsigned(va_arg(ap, int), "0123456789ABCDEF");
        break;
    default:
        flags(str, i, ap);
        break;
    }
}