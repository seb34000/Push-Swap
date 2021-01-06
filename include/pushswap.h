/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include "my.h"
#include "my_printf.h"
#include "list.h"
#include "pushswap.h"

void easy_sort(int_list_t *list);
void tcheck_number(int_list_t *list);
void get_list(int argc, char **argv, int_list_t **list);
int list_len(int_list_t *list);
void ez_sort(int_list_t *easy);
long long min_list(int_list_t *la);
void push_swap(int_list_t **list);


#endif /* !PUSHSWAP_H_ */
