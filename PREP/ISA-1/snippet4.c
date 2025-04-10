#include <stdio.h>

int main() {
    int arr[7] = {3,4,8,2,3,4,5};
    int *ptr_arr[7];
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        ptr_arr[i] = &arr[i];
    }

    int temp = *ptr_arr[0];
    *ptr_arr[0] = *ptr_arr[size-1];
    *ptr_arr[size-1] = temp;

    printf("Updated array --> ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr_arr[i]);
    }

    return 0;
}