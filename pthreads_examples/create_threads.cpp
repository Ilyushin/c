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

int main(){

    pthread_t thread1,thread2;

    if (pthread_create(&thread1, NULL, func1, NULL) != 0)
    {
        return EXIT_FAILURE;
    }

    if (pthread_create(&thread2, NULL, func2, NULL) != 0)
    {
        return EXIT_FAILURE;
    }
    pthread_exit(NULL);
}
