#include <stdio.h>

int sumarray(int *arr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=*arr;
        arr++;
    }
    return sum;
}

int main(void){
    int size;

    printf("Enter size: " );
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Sum of array elements: %d\n", sumarray(arr, size));
}