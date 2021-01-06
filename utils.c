/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** utils
*/

#include "include/pushswap.h"
#include "include/list.h"
#include "include/my_printf.h"
#include "include/my.h"

long long min_list(int_list_t *la)
{
    int_list_t *tmp = la;
    long long min = tmp->value;

    while (tmp != NULL) {
        if (tmp->value < min)
            min = tmp->value;
        tmp = tmp->next;
    }
    return (min);
}