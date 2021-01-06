/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** pushswap
*/

#include "include/pushswap.h"
#include "include/list.h"
#include "include/my_printf.h"
#include "include/my.h"

void get_list(int argc, char **argv, int_list_t **list)
{
    int i = 1;
    while (i < argc) {
        int_list_push_back(list, my_atoi(argv[i]));
        i++;
    }
}

void ez_sort(int_list_t *easy)
{
    if (easy->value > easy->next->value)
        my_printf("sa\n");
    else
        my_printf("\n");
}

int no_sort(int_list_t *list)
{
    int_list_t *test = list;
    int tmp = 0;

    while (test->next) {
        tmp = test->value;
        test = test->next;
        if (tmp > test->value)
            return (1);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int_list_t *list = NULL;
    int_list_t *easy = list;
    size_t size = 2;

    if (argc <= 2) {
        my_printf("\n");
        return (0);
    } else {
        get_list(argc, argv, &list);
    }
    easy = list;
    if (int_list_size(list) == size) {
        ez_sort(easy);
        return (0);
    } else {
        (no_sort(list) == 1) ? push_swap(&list) : my_printf("\n");
    }
    int_list_destroy(&list);
}