#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list_t* new_list(book_t *elem) {

    struct list_t* new_list;

    /* allocate memory for the new list */
    new_list = (list_t*)malloc(sizeof(list_t));

    new_list->next = NULL;
    new_list->value = elem;

    return new_list;
}

/*add_to_list(list_t *list, void *elem)
 * Add a new element to a list
 * list - pointer to a list
 * elem - pointer to a new element of list
 * */
void add_to_list(list_t **list, book_t *elem) {

    if (elem == NULL)
        printf("New element is empty!\n");
    else if (list == NULL)
        printf("List is empty!\n");
    else {

        //create a new element of the list
        struct list_t* new_elem;
        new_elem = (list_t*)malloc(sizeof(list_t));

        //assign a pointer to a value into the new element of the list
        new_elem->value = elem;

        //assign a pointer to the list into the new element of the list
        new_elem->next = *list;

        //assign a new value to a head of the list
        *list = new_elem;
    }
}

void del_from_list(book_t *elem) {

}

void destroy_list(list_t* list){
    while (list) {
        struct list_t *node = list;
        list = list->next;
        free(node);
    }
}
