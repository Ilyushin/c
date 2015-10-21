#ifndef C_LIST_H
#define C_LIST_H

#include "test_list.h"

typedef struct list_t{
    list_t* next;
    book_t* value;
}list_t;

list_t* new_list(book_t *elem);

void add_to_list(list_t **list, book_t *elem);

void del_from_list(book_t *elem);

void destroy_list(list_t* list);
#endif //C_LIST_H
