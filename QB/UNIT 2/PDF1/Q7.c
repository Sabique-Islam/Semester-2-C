/*

Write a C program to search an element using linear and binary techniques.

*/

#include <stdio.h>

void linear(int arr[], int size, int search){
    for(int i=0; i<size; i++){
        if (arr[i] == search){
            printf("Element @ index --> %d = %d\n", i, search);
            return;
        }
    }
    printf("Element not found...\n");
}

void binary(int arr[], int left, int right, int search) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == search) {
            printf("Element @ index --> %d = %d\n", mid, search);
            return;
        }
        if (arr[mid] < search) {
            left = mid+1;  // Search in right half
        } else {
            right = mid-1; // Search in left half
        }
    }
    printf("Element not found in the array.\n");
}


int main(void) {
    int arr1[5] = {3,4,1,5,2};
    int arr2[5] = {1,2,3,4,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int search;
    printf("Enter the element to be searched --> ");
    scanf("%d", &search);
    
    printf("With linear search -->\n");
    linear(arr1, size1, search);
    printf("\n");
    printf("With binary search (sorted array) -->\n");
    binary(arr2, 0, size2-1, search);
}