/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** my_strcpy
*/

#include "../include/my.h"

char *my_strcpy_te(char *dest, char  *src)
{
    int i = 0;
    int size = my_strlen_rec(src);

    while (size > i) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}