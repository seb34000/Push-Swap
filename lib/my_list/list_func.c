/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_func
*/

#include "../include/list.h"

void int_list_iterate(int_list_t *list, void *data, void (*iterator)\
(void *data, size_t index, int *value))
{
    size_t index = 0;
    int_list_t *node = list;
    while (node != NULL) {
        iterator(data, index, &(node->value));
        node = node->next;
        index += 1;
    }
}

void int_list_apply(int_list_t *list, void *data, int (*func)\
(void *data, size_t index, int value))
{
    size_t index = 0;
    int_list_t *node = list;
    while (node != NULL) {
        node->value = func(data, index, (node->value));
        node = node->next;
        index += 1;
    }
}