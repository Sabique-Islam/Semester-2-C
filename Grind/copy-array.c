// Create a copy of an array

#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length){
    int *c = malloc(length * sizeof(int));
    int i;
    
    for (i=0; i<length; i++){
        c[i] = array[i];
    }
    
    return c;
}

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *arr_copy = array_copy(arr,9);
    
    for (int i=0; i<9; i++){
        printf("arr_copy[%d]=%d\n", i, arr_copy[i]);
    }
    
    // for(int i=0; i<9; i++){
    //     copy[i] = a[i];
    //     //printf("%d\n",copy[i]);
    // }
    // //printf("hello\n");
    
    // for (int i=0; i<9; i++){
    //     printf("Copy[%d]=%d\n",i,copy[i]);
    // }
    
    return 0;
}