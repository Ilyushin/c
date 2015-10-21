#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "test_list.h"
#include "list.h"

void print_list(list_t *list);


int test_list_run() {

    struct book_t book1, book2, book3;

    book1.id = 1;
    strcpy(book1.autor, "Autor1");
    strcpy(book1.title, "Book 1");
    book1.prise = 1000.23;

    book2.id = 2;
    strcpy(book2.autor, "Autor2");
    strcpy(book2.title, "Book 2");
    book2.prise = 777.23;

    book3.id = 3;
    strcpy(book3.autor, "Autor3");
    strcpy(book3.title, "Book 3");
    book3.prise = 525.23;

    list_t* list_books = new_list(&book1);

    add_to_list(&list_books, &book2);
   add_to_list(&list_books, &book3);

    print_list(list_books);

    destroy_list(list_books);
}

void print_list(list_t *list){

    list_t* head = list;

    while (head) {
        book_t *value = (book_t *) head->value;
        printf("Title head of list of books - %s\n", value->title);
        head = head->next;
    }
}