/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Day 04 : Display the characters of a string.
*/

#include "my.h"

int my_putstr(char const *str)
{
    if (str == NULL)
        write(1, "(null)", 6);
    else
        for (int i = 0; str[i] != '\0'; i++)
            my_putchar(str[i]);
    return (0);
}
