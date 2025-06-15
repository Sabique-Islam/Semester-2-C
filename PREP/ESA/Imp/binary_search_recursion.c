#include <stdio.h>

void binary_search_recursion(int arr[], int left, int right, int target){
    if (left > right) {
        printf("Element not found\n");
        return;
    }
    int mid = (left + right) / 2;

    if (arr[mid] == target) {
        printf("Element found at index %d\n", mid);
        return;
    } 
    else if (arr[mid] < target) {
        binary_search_recursion(arr, mid + 1, right, target);
    } 
    else {
        binary_search_recursion(arr, left, mid - 1, target);
    }
}

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    binary_search_recursion(arr, 0, size - 1, target);
    return 0;
}