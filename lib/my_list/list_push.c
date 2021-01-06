/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_push front and back
*/

#include "../include/list.h"

void int_list_push_front(int_list_t **list, int value)
{
    int_list_t *new;

    if (list == NULL)
        return ;
    new = malloc(sizeof(int_list_t));
    new->value = value;
    new->next = (*list);
    (*list) = new;
}

void int_list_push_back(int_list_t **list, int value)
{
    int_list_t *new;
    int_list_t *tmp = *list;

    if (list == NULL)
        return ;
    new = malloc(sizeof(int_list_t));
    new->value = value;
    new->next = NULL;

    if ((*list) == NULL)
        (*list) = new;
    else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
}