/*
** EPITECH PROJECT, 2019
** my_put_adress.c
** File description:
** my_put_adress.c
*/

#include "../include/my.h"
#include "../include/my_printf.h"

int my_put_adress(int ptr)
{
    my_putstr("0x");
    my_putnbr_base_unsigned(ptr, "0123456789abcdef");
    return (0);
}