//
// Created by john on 07.10.15.
//
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include "assign_processor_for_thread.h"



void *funct1(void *args)
{
#ifdef __linux__
    printf("Thread 1\n");
    printf("ID: %lu, CPU: %d\n", pthread_self(), sched_getcpu());
    return NULL;
#endif
}

void *funct2(void *args)
{
#ifdef __linux__
    printf("Thread 2\n");
    printf("ID: %lu, CPU: %d\n", pthread_self(), sched_getcpu());
    return NULL;
#endif
}

void assign_processor_for_thread_exam_run(){

#ifdef __linux__
    int numberOfProcessors = sysconf(_SC_NPROCESSORS_ONLN);
    printf("Number of processors: %d\n", numberOfProcessors);

    pthread_t thread1,thread2;
    char* err;

    pthread_attr_t attr;
    cpu_set_t cpus;
    pthread_attr_init(&attr);

    CPU_ZERO(&cpus);
    CPU_SET(2, &cpus);
    pthread_attr_setaffinity_np(&attr, sizeof(cpu_set_t), &cpus);

    if (pthread_create(&thread1, &attr, funct1, NULL) != 0)
    {
        err = "Can't create first thread";
    }

    CPU_ZERO(&cpus);
    CPU_SET(3, &cpus);
    pthread_attr_setaffinity_np(&attr, sizeof(cpu_set_t), &cpus);
    if (pthread_create(&thread2, &attr, funct2, NULL) != 0)
    {
        err = "Can't create second thread";
    }
    pthread_exit(NULL);
    printf("%c\n", err);
#endif
}