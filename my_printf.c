/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** My_printf : Main Function.
*/

#include "include/my.h"
#include "include/my_printf.h"

int my_printf(char const *str, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%' && str[i + 1] == '#') {
            hashtag_case(str, i, ap);
            i = i + 3;
        } else if (str[i] == '%') {
            my_printf_function_1(str, i, ap);
            my_printf_function_2(str, i, ap);
            i = i + 2;
        } else {
            my_putchar(str[i]);
            i++;
        }
    }
    va_end(ap);
    return (0);
}
