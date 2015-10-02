#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void mem_alloc_exam_run(){

    char *name;

    /* allocate memory dynamically */
    name = (char *)malloc( 30 * sizeof(char) );

    if( name == NULL )
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( name, "Test allocation memory.");
    }

    printf("Name = %s\n", name );

    /* release memory using free() function */
    free(name);

}

