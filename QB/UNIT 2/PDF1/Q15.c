/*

Given an array, find any two elements of the given array whose difference is 0.
a = {12,33,44,66,12,9}

*/

#include <stdio.h>

int main(void) {
    int size;
    
    printf("Enter size of array --> ");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0; i<size; i++){
        printf("Enter element @ index: %d --> ", i);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if ((arr[i]-arr[j])==0){
                printf("%d - %d = 0\n", arr[i], arr[j]);
            }
        }
    }
}