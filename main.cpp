#include <stdio.h>
#include <stdlib.h>
#include "work_with_files_examples/read_data_from_file.h"


int main(int argc, char *argv[])
{
    //create_thread_exam_run();
    //assign_processor_for_thread_exam_run();
    //string_exam_run();
    //struct_exam_run();
    //test_list_run();

    /*for example read data from a txt file*/
    if (argc != 3) {
        printf("Arguments are missing.");
        exit(EXIT_FAILURE);
    }
    else{
        char *path = argv[1];
        char** data_file_to_array(path);
    }

    return 0;
}
