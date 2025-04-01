/*

Write a function to check whether a matrix is symmetric matrix or not.

*/

#include <stdio.h>

int main(){
    int arr[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if (arr[i][j] != arr[j][i]){
                printf("Not a symmetric matrix...\n");
                return 0;
            }
        }
    }
    printf("Symmetric matrix...\n");
    return 0;
}