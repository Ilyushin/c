#include <string.h>
#include <stdio.h>
#include "test_list.h"
#include "list.h"

void print_head_list(list_t *list);

typedef struct book_t {
    int id;
    char autor[100];
    char title[100];
    double prise;
}book_t;

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

    list_t *list_books = new_list(&book1);

    int result = add_to_list(list_books, &book2);
    result = add_to_list(list_books, &book3);

    print_head_list(list_books);

}

void print_head_list(list_t *list){
    book_t *head = (book_t*)list->value;
    printf("Title head of list of books - %s\n",head->title);
}