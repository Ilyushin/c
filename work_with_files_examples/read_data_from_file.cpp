#include <stdio.h>
#include <stdlib.h>
#include "read_data_from_file.h"

#define new_line '\n'
#define space ' '

static char** allocate_matrix(int nrows, int ncols);
unsigned long get_count_characters(FILE *fp, int* nrows, int* ncols);

char** data_file_to_array(char* path){

    char **matrix;
    FILE *fp;
    int ch, nrows, ncols;
    unsigned long count;

    //open the file for reading
    if ((fp = fopen(path, "rt")) == NULL){
        printf("Could't open %s", path);
    }

    /*allocation memory for the matrix*/
    count = get_count_characters(fp, &nrows, &ncols);
    matrix = allocate_matrix(nrows, ncols);

    ncols = 0;
    nrows = 0;
    while ((ch = getc(fp)) != EOF){

        if (ch == (int)space)
            continue;

        if (ch == (int)new_line) {
            ncols = 0;
            nrows++;
            continue;
        }

        matrix[nrows][ncols] = ch;

        ncols++;

        count++;
    }
    fclose(fp);

    printf("File %s consists of %lu symbols", path, count);

    return matrix;
}

static char** allocate_matrix(int nrows, int ncols)
{
    int i;
    char **matrix;

    /*  allocate array of pointers  */
    matrix = (char **) malloc( nrows*sizeof(char*));

    if(matrix==NULL)
        return NULL; /* Allocation failed */

    /*  Allocate column for each name  */
    for(i = 0; i < nrows; i++)
        matrix[i] = (char *) malloc( ncols*sizeof(char));

    if(matrix[i-1] == NULL)
        return NULL; /* Allocation failed */

    return matrix;
}

unsigned long get_count_characters(FILE *fp, int* nrows, int* ncols){

    int ch;
    unsigned long count = 0;
    bool calc_col = true;

    *ncols = 0;
    while ((ch = getc(fp)) != EOF){

        if (ch == new_line) {
            *nrows++;
            calc_col = false;
        }
        if (calc_col && ch != space)
            *ncols++;

        count++;
    }

    /*reset the write pointer at 0 position from the beginning*/
    fseek( fp, 0, SEEK_SET );

    return count;
}