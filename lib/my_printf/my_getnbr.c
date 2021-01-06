/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "../include/my_printf.h"

int my_getnbr(char *str, int i)
{
    int nb = 0;

    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10;
        nb = nb + str[i] - '0';
    }
return (nb);
}

int how_nbr(int nb)
{
    int i = 0;

    for (; nb >= 10; i++) {
        nb = nb / 10;
    }
    if (nb == 0)
        return (0);
return (i + 1);
}