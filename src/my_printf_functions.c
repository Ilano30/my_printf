/*
** EPITECH PROJECT, 2019
** my_printf_functions.c
** File description:
** my_printf_functions.c
*/

#include "../include/my.h"
#include "../include/my_printf.h"

int my_printf_function_1(char const *str, int i, va_list ap)
{
    switch (str[i + 1]) {
    case 'c':
    case 'C':
        my_putchar(va_arg(ap, int));
        break;
    case 'd':
    case 'i':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'o':
        my_putnbr_base_unsigned(va_arg(ap, int), "01234567");
        break;
    case 'u':
        my_putnbr_base_unsigned(va_arg(ap, unsigned int), "0123456789");
        break;
    case 'x':
        my_putnbr_base_unsigned(va_arg(ap, int), "0123456789abcdef");
        break;
    }
}

int my_printf_function_2(char const *str, int i, va_list ap)
{
    switch (str[i + 1]) {
    case 'X':
        my_putnbr_base_unsigned(va_arg(ap, int), "0123456789ABCDEF");
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'S':
        my_putstr_non_printable(va_arg(ap, char *));
        break;
    case 'b':
        my_putnbr_base_unsigned(va_arg(ap, int), "01");
        break;
    case '%':
        my_putchar('%');
        break;
    case 'p':
        my_put_adress(va_arg(ap, int));
        break;
    }
}
