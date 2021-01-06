/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_init
*/

#include "../include/list.h"

int_list_t *list_init(void)
{
    int_list_t *list = malloc(sizeof(*list));

    if (list != NULL) {
        list->value = 0;
        list->next = NULL;
    }

    return (list);
}