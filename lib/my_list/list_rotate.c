/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_rotate
*/

#include "../include/list.h"

void int_list_rotate_left(int_list_t **list)
{
    int_list_t *current = (*list);
    int_list_t *save = NULL;
    int_list_t *new_first = NULL;

    if (!(*list))
        return ;
    if ((*list)->next == NULL)
        return ;

    save = current;
    new_first = current->next;
    while (current->next) {
        current = current->next;
    }
    save->next = NULL;
    current->next = save;
    (*list) = new_first;
}

void int_list_rotate_right(int_list_t **list)
{
    int_list_t *current = (*list);
    int_list_t *save = NULL;
    int_list_t *new_first = NULL;
    int_list_t *save2 = NULL;

    if (!(*list))
        return ;
    if ((*list)->next == NULL)
        return ;

    new_first = current;
    while (current->next) {
        save2 = current;
        current = current->next;
    }
    save2->next = NULL;
    save = current;
    current->next = new_first;
    (*list) = save;
}