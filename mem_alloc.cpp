#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

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

    return 0;

}

