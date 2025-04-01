/*

Write a C program print or display the lower triangular of a given matrix.

The matrix
1 2 3
4 5 6
7 8 9

Setting zero in lower triangular matrix
1 2 3
0 5 6
0 0 9

*/

#include <stdio.h>

int main(void) {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int arr_modified[3][3];
    
    printf("The matrix\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr_modified[i][j] = arr[i][j];
        }
    }
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if (i > j){
                arr_modified[i][j] = 0;
            }
        }
    }
    
    printf("The modified matrix\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", arr_modified[i][j]);
        }
        printf("\n");
    }
}