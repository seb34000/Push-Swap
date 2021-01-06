/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_find element or get element
*/

#include "../include/list.h"

int_list_t *int_list_get(int_list_t *list, size_t index)
{
    size_t i = 0;
    int_list_t *error = NULL;

    if (list == NULL)
        return (error);

    while (i < index) {
        i++;
        list = list->next;
    }
    return (list);
}

int_list_t *int_list_find_first(int_list_t *list, int value)
{
    int_list_t *error = NULL;

    if (list == NULL)
        return (error);

    while (list->value != value) {
        list = list->next;
        if (list->next == NULL)
            return (error);
    }
    return (list);
}

int_list_t *int_list_find_last(int_list_t *list, int value)
{
    int_list_t *node = NULL;

    if (!list)
        return (NULL);
    while (list) {
        if (list->value == value)
            node = list;
        list = list->next;
    }
    return (node);
}