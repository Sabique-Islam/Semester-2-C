//  Program to swap first and last elements of the array of integers using array of pointers and display the array of integers using array of pointers.

#include <stdio.h>

int main() {
    int arr[7] = {3,4,8,2,3,4,5};
    
    int arr_copy[7];
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        if(i==0){
            arr_copy[i] = arr[size-1];
        }else if(i==size-1){
            arr_copy[size-1] = arr[0];
        }else{
            arr_copy[i] = arr[i];
        }
    }
    
    printf("Updated array --> ");
    for(int i=0; i<size; i++){
        printf("%d ", arr_copy[i]);
    }
    return 0;
}