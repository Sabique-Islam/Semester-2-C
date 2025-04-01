/*

Write a Function and test the function to find the sum of left diagonals of a matrix.

*/

#include <stdio.h>

int sum_left_diagonal(int arr[][3], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i][i];
    }
    return sum;
}

int main(void) {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Sum of left diagonal --> %d", sum_left_diagonal(arr, size));
}