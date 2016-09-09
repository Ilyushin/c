#include <stdio.h>
#include <stdlib.h>
#include <create_threads.h>
#include <assign_processor_for_thread.h>
#include <join_threads.h>
#include "work_with_files_examples/read_data_from_file.h"
#include "algorithms/sorting/buble_sort.h"
#include "algorithms/sorting/insertion_sort.h"
#include "algorithms/sorting/selection_sorting.h"


int main(int argc, char *argv[])
{
    //create_thread_exam_run();
    //assign_processor_for_thread_exam_run();
    //join_threads_exam_run(4);
    //string_exam_run();
    //struct_exam_run();
    //test_list_run();

    /*for example read data from a txt file*/
    /*if (argc != 3) {
        printf("Arguments are missing.");
        exit(EXIT_FAILURE);
    }
    else{

        //TODO Read date from a second file and implement multiplication of matix.
        char *path = argv[1];
        char** data_file_to_array(path);
    }*/

    /*test buble sorting*/
    int set_number[7] = {7,6,5,4,3,2,1};
    for (int i=0;i<7;i++)
        printf("%d", set_number[i]);

    //buble_sort(&set_number[0], 7);
    //insertion_sort(&set_number[0], 7);
    selection_sorting(&set_number[0], 7);

    printf("\n--------------------------\n");
    for (int i=0;i<7;i++)
        printf("%d", set_number[i]);

    return 0;
}
