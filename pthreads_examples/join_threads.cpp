#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

//TODO Add some calculations for examples
void *func(void *args)
{
    int* x = (int*)args;
    printf("Thread %d\n", *x);

    return NULL;
}

/*join_threads_exam_run()
 * num_threads - number of threads, which need to create
 * */
void join_threads_exam_run(int num_threads){

    int result = 0, i;

    /* allocation memory for a array of threads */
    pthread_t* threads;
    threads = (pthread_t*)malloc(num_threads * sizeof(pthread_t));

    /* fill an array of threads */
    for (i = 0; i<num_threads; i++)
    {
        result = pthread_create(threads+i, NULL, func, &i);
        if(result != 0) {
            fprintf(stderr, "pthread_create: error code %d\n", result);
            exit(-1);
        }
    }

    for (i = 0; i < num_threads; i++) {
        result = pthread_join(threads[i], NULL);
        if(result != 0) {
            fprintf(stderr, "pthread_join: error code %d\n", result);
            exit(-1);
        }
    }

}

