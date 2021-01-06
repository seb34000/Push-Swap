/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen_rec(char *str)
{
    if (!*str)
        return (0);
    return (my_strlen_rec(str+1) + 1);
}