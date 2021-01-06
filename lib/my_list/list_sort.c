/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list_sort
*/

#include "../include/list.h"

void swap(int_list_t *temp1, int_list_t *temp2)
{
    int a = 0;

    if (temp2->value < temp1->value) {
        a = temp1->value;
        temp1->value = temp2->value;
        temp2->value = a;
    }
}

void int_list_sort(int_list_t **list)
{
    int a;

    int_list_t *temp1;
    int_list_t *temp2;

    for (temp1 = *list; temp1 != NULL; temp1 = temp1->next) {
        for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next) {
            swap(temp1, temp2);
        }
    }
}