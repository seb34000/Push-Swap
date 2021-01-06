/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** algo
*/

#include "include/pushswap.h"
#include "include/list.h"
#include "include/my_printf.h"
#include "include/my.h"

void put_la_short(int_list_t **lb)
{
    size_t test = 1;

    if (int_list_size(*lb) == test) {
        //int_list_push_front(la, (*lb)->value);
        //int_list_pop_front(lb);
        write(1, "pa\n", 3);
    } else if (int_list_size(*lb) != test) {
        //int_list_push_front(la, (*lb)->value);
        //int_list_pop_front(lb);
        write(1, "pa ", 3);
    }
}

void put_la(int_list_t **la, int_list_t **lb)
{
    size_t test = 1;

    if (int_list_size(*lb) == test) {
        int_list_push_front(la, (*lb)->value);
        int_list_pop_front(lb);
        write(1, "pa\n", 3);
    } else if (int_list_size(*lb) != test) {
        int_list_push_front(la, (*lb)->value);
        int_list_pop_front(lb);
        write(1, "pa ", 3);
    }
}

void put_lb(int_list_t **la, int_list_t **lb)
{
    size_t test = 1;

    if (int_list_size(*la) == test) {
        int_list_push_front(lb, (*la)->value);
        int_list_pop_front(la);
        write(1, "pb ", 3);
    } else if (int_list_size(*la) != test) {
        int_list_push_front(lb, (*la)->value);
        int_list_pop_front(la);
        write(1, "pb ", 3);
    }
}

bool get_good_rotate(int_list_t **la, long long min)
{
    unsigned long i = 0;
    size_t sze = int_list_size(*la);
    float size = (float)sze / 2.0;
    bool test = false;
    int_list_t *tmp = *la;

    while (tmp->value != min && tmp) {
        tmp = tmp->next;
        i++;
    }
    if (tmp->value == min) {
        test = (i < size) ? true : false;
    }
    return (test);
}

void rot_right(int_list_t **la, long long min)
{
    size_t test = 1;

    while ((*la)->value != min) {
        if (int_list_size(*la) == test) {
            int_list_rotate_right(la);
            write(1, "rra\n", 4);
        } else { 
            int_list_rotate_right(la);
            write(1, "rra ", 4);
        }
    }
}

void rot_left(int_list_t **la, long long min)
{
    size_t test = 1;

    while ((*la)->value != min) {
        if (int_list_size(*la) == test) {
            int_list_rotate_left(la);
            write(1, "ra\n", 3);
        } else { 
            int_list_rotate_left(la);
            write(1, "ra ", 3);
        }
    }
}

void push_swap(int_list_t **list)
{
    int_list_t *la = int_list_clone_rec(*list);
    int_list_t *lb = NULL;
    long long min = min_list(la);

    do {
        min = min_list(la);
        while (la->value != min) {
            (get_good_rotate(&la, min)) ? rot_left(&la, min) : \
            rot_right(&la, min);
        }
        if (la->value == min)
            put_lb(&la, &lb);
    } while (la);
    while (lb) {
        put_la(&la, &lb);

    }
}