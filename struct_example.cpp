#include <stdio.h>

struct people{
    char* name;
    char* last_name;
    int age;
};

void struct_exam_run();
people* get_arr();

void struct_exam_run() {
    people* arr = get_arr();

    printf("%s", arr[0].name);
}

people* get_arr(){
    people arr[7];
    arr[0].name = "Vasy";
    arr[0].last_name = "Petrov";
    arr[0].age = 23;
    return &arr[0];
}
