/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** list
*/

#ifndef LIST_H_
#define LIST_H_

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>

struct int_list_s {
    int value;
    struct int_list_s *next;
};

typedef struct int_list_s int_list_t;


/* FILE list_init.c */
// list_init: initialize a new list
int_list_t *list_init(void);
/* END */


/*FILE list_destroy.c */
// int_list_destroy : free all element of the list
void int_list_destroy(int_list_t **list);
//delete the first element of the list and return the element delete
int int_list_pop_front(int_list_t **list);
//delete the last element of the list and return the element delete
int int_list_pop_back(int_list_t **list);
/* END */


/* FILE list_len.c */
// list_len : return len of list debug
int list_len(int_list_t *list);
// int_list_size : return len of list
size_t int_list_size(int_list_t *list);
// int_list_value : return value of node
int int_list_value(int_list_t *list);
/* END */


/* FILE list_push.c */
// int_list_push_front : push value in front of the list
void int_list_push_front(int_list_t **list, int value);
// int_list_push_back : push value in back of the list
void int_list_push_back(int_list_t **list, int value);
/* END */


/* FILE list_find.c */
// int_list_get : get the element index
int_list_t *int_list_get(int_list_t *list, size_t index);
//return the first node who contained the value pass in settings
int_list_t *int_list_find_first(int_list_t *list, int value);
//return the last node who contained the value pass in settings
int_list_t *int_list_find_last(int_list_t *list, int value);
/* END */


/*FILE list_rotate.c */
// int_list_rotate_left : rotation left on all element in the list
void int_list_rotate_left(int_list_t **list);
// int_list_rotate_right : rotation right on all element in the list
void int_list_rotate_right(int_list_t **list);
/* END */


/* FILE list_func.c */
//put fonction give in setting on all the element in the list
void int_list_iterate(int_list_t *list, void *data, \
void (*iterator)(void *data, size_t index, int *value));
//give the result of funct in setting on all the element in the list
void int_list_apply(int_list_t *list, void *data, \
int (*func)(void *data, size_t index, int value));
/* END */



/* FILE list_print.c */
// int_list_print : print the value of list !!! my_printf is necessary !!!
void int_list_print(int_list_t *list);
/* END */


/* FILE list_clone.c */
// int_list_clone_rec : same clone in recursive
int_list_t *int_list_clone_rec(int_list_t *list);
// int_list_clone : clone la liste donnée en paramètre
int_list_t *int_list_clone(int_list_t *list);
/* END */


/* FILE list_sort.c */
//int_list_sort: sort list in params
void int_list_sort(int_list_t **list);
//swap: swap 2 element 'a' and 'b' in list
void swap(int_list_t *temp1, int_list_t *temp2);
/* END */

#endif /* !LIST_H_ */
