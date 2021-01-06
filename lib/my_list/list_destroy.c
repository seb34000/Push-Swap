/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_destroy, and delete element front or back
*/

#include "../include/list.h"

void int_list_destroy(int_list_t **list)
{
    int_list_t *current = *list;
    int_list_t *next;

    if (list != NULL) {
        while (current != NULL) {
            next = current->next;
            free(current);
            current = next;
        }
    }
    *list = NULL;
}

int int_list_pop_front(int_list_t **list)
{
    int value = 0;
    int_list_t *save = NULL;

    if (list == NULL)
        return (-1);
    value = (*list)->value;
    save = (*list);
    (*list) = NULL;
    (*list) = save->next;
    return (value);
}

int int_list_pop_back(int_list_t **list)
{
    int value = 0;
    int_list_t *node = (*list);

    if (node == NULL)
        return (0);
    if (node->next == NULL) {
        value = node->value;
        free(*list);
        (*list) = NULL;
    } else {
        for (;node->next->next != NULL; node = node->next);
        value = node->next->value;
        free(node->next);
        node->next = NULL;
    }
    return (value);
}