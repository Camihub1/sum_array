#include <stdio.h>

int sum_array(int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int total = sum_array(array, size);
    printf("Die Summe der Elemente im Array ist: %d\n", total);
    return 0;
