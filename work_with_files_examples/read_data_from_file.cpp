#include <stdio.h>
#include "read_data_from_file.h"

char* data_file_to_array(char* path){

    char matrix[3][3];
    FILE *fp;
    int ch;
    unsigned long count;

    if ((fp = fopen(path, "r")) == NULL){
        printf("Could't open %s", path);
    }

    while ((ch = getc(fp)) != EOF){
        putc(ch, stdout);
        count++;
    }

    printf("File %s consists of %lu symbols", path, count);

    return &matrix[0][0];
}