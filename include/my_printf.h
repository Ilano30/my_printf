/*
** EPITECH PROJECT, 2019
** my_printf.h
** File description:
** my_printf.h
*/

#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__

#include <stdarg.h>

int my_putnbr_base_unsigned(int n, char const *base);
int my_printf_function_1(char const *str, int i, va_list ap);
int my_printf_function_2(char const *str, int i, va_list ap);
int my_putstr_non_printable(char *str);
int my_put_adress(int ptr);
int hashtag_case(char const *str, int i, va_list ap);
int my_printf(char const *str, ...);

#endif /*__MY_PRINTF_H__*/
