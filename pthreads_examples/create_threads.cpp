#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *func1(void *args)
{
    printf("Thread 1\n");

    return NULL;
}

void *func2(void *args)
{
    printf("Thread 2");

    return NULL;
}

void create_thread_exam_run();

void create_thread_exam_run(){

    pthread_t thread1,thread2;
    char* err;

    if (pthread_create(&thread1, NULL, func1, NULL) != 0)
    {
        err = "Can't create first thread";
    }

    if (pthread_create(&thread2, NULL, func2, NULL) != 0)
    {
        err = "Can't create second thread";
    }
    pthread_exit(NULL);
    printf("%c", err);
}
