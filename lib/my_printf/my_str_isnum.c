/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** str isnum
*/

#include "../include/my_printf.h"

int my_str_isnum(char str)
{
    if (str >= 48 && str <= 57) {
        return (0);
    } else
        return (1);
}