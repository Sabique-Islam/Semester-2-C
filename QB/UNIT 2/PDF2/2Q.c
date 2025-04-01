/*

Write a C program to read a 2D Arrays(Matrix) and print the sum of each row,

*/

#include <stdio.h>

int main(void) {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j=0; j<size; j++){
            sum += arr[i][j];
        }
        printf("Sum of all the element in row : %d --> %d\n", i, sum);
    }
}