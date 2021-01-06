/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_clone
*/

#include "../include/list.h"

int_list_t *int_list_clone_rec(int_list_t *list)
{
    int_list_t *new_list = malloc(sizeof(int_list_t));

    if (!list) {
        free (new_list);
        return (NULL);
    } else {
        new_list->value = list->value;
        new_list->next = int_list_clone_rec(list->next);
        return (new_list);
    }
}

int_list_t *int_list_clone(int_list_t *list)
{
    int_list_t *node = malloc(sizeof(int_list_t *));
    int_list_t *first_node = NULL;

    if (list == NULL)
        return (NULL);
    node->value = list->value;
    node->next = NULL;
    first_node = node;
    list = list->next;
    while (list != NULL) {
        node->next = malloc(sizeof(int_list_t *));
        node = node->next;
        node->value = list->value;
        node->next = NULL;
        list = list->next;
    }
    return (first_node);
}