#include "buble_sort.h"

/* buble_sorting(int* items, int n)
 * items - elements of array
 * n - size of array
 * */
void buble_sorting(int* items, int n){
    for (int i = 1; i < n; i++) {
        for (int i = 1; i < n; i++) {
            if (items[i - 1] > items[i]) {
                int temp = items[i];
                items[i] = items[i - 1];
                items[i - 1] = temp;
            }
        }
    }
}
