#include <stdio.h>
#include <string.h>

void examp_concat_string(char *str1, char *str2);

void string_exam_run(){
    char arr_str[] = "Это массив символов с автоматическим определением размера.";
    char *point_str = "Это указатель на строку.";
    printf("%s\n", arr_str);
    printf("%s\n", point_str);

    examp_concat_string(arr_str," ");
    examp_concat_string(arr_str,point_str);

    printf("%s\n", arr_str);
}

void examp_concat_string(char *str1, char *str2){
    strcat(str1, str2);
}