/*

Write a program to accept elements and print 2D Array using Pointers.

*/

#include <stdio.h>

int main(void) {
    
    int row, col;
    
    printf("Enter array dimension: (eg. 2 3) --> ");
    scanf("%d %d", &row, &col);
    
    int arr[row][col];
    
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            printf("Enter arr[%d][%d] element --> ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The matrix\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}