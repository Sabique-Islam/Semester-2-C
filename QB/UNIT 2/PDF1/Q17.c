/*

Program to find the addition of pair of elements in a given array. 
input: 2 3 4 5 67 ,output: 5 9 13 
input: 2 3 4 5 6 , output: 5 9 6

*/

#include <stdio.h>

int main(void) {
    int size;
    
    printf("Enter size of array --> ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements -->\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size-1; i+=2){
        printf("%d ", arr[i] + arr[i+1]);
    }
    
    if (size % 2 != 0) {
        printf("%d", arr[size - 1]);
    }
}