#include <stdio.h>

void linear_search(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    linear_search(arr, size, target);

    return 0;
}