/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_len
*/

#include "../include/list.h"
#include <stdio.h>

size_t int_list_size(int_list_t *list)
{
    size_t size = 0;
    int_list_t *tmp = list;

    while (tmp) {
        size++;
        tmp = tmp->next;
    }
    return (size);
}

int int_list_value(int_list_t *list)
{
    return (list->value);
}

int list_len(int_list_t *list)
{
    int len = 0;
    while (list) {
        len++;
        list = list->next;
    }
    return (len - 1);
}
