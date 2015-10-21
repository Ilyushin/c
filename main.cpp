#include <create_threads.h>
#include <assign_processor_for_thread.h>
#include <stdio.h>
#include <stdlib.h>
#include "string_example.h"
#include "struct_example.h"
#include "submission_data/test_list.h"


int main(int argc, char *argv[])
{
    //create_thread_exam_run();
    //assign_processor_for_thread_exam_run();
    //string_exam_run();
    //struct_exam_run();
    test_list_run();

    //for example read data from a txt file
    /*if (argc != 3) {
        printf("Arguments are missing.");
        exit(EXIT_FAILURE);
    }
    else{
        char *path = argv[1];
        data_file_to_array(path);
    }*/

    return 0;
}
