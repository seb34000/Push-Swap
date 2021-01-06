/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_print
*/

#include "../include/list.h"
#include "../include/my_printf.h"

void int_list_print(int_list_t *list)
{
    int_list_t *tmp = list;

    if (!list)
        return ;
    while (tmp) {
        my_printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    my_putchar('\n');
}