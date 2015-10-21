//
// Created by Evgeny Ilyushin on 10/14/15.
//

#ifndef C_TEST_LIST_H
#define C_TEST_LIST_H

typedef struct book_t {
    int id;
    char autor[100];
    char title[100];
    double prise;
}book_t;


int test_list_run();
#endif //C_TEST_LIST_H
