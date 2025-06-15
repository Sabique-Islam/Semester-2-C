#include <stdio.h>

void binary_search(int arr[], int size, int target){
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (right+left)/2;

        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            return;
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    printf("Element not found\n");
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    binary_search(arr, size, target);

    return 0;
}