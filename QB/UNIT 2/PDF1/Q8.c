/*

Write a C program to find the largest element in an array.

*/

#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(void) {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxElement = largest(arr, n);
    printf("Largest element --> %d\n", maxElement);
    
    return 0;
}