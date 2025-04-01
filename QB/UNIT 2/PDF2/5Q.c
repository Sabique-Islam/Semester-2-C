/*

Write a program in C to accept two matrices and check whether they are equal using functions.

*/

#include <stdio.h>

void equal_check(int arr1[][3], int arr2[][3], int size1, int size2){
    int check = 0;
    if (size1 != size2){
        printf("Unequal Matrices...\n");
    }else{
        for(int i=0; i<size1; i++){
            for(int j=0; j<size2; j++){
                if(arr1[i][j] == arr2[i][j]){
                    check += 1;
                }
            }
        }
    }
    if (check == size1*size2){
        printf("Equal Matrices...\n");
    }else{
        printf("Unequal Matrices...\n");
    }
}

int main(void) {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    equal_check(arr1, arr2, size1, size2);
}

/* AI CODE -->

#include <stdio.h>

void equal_check(int arr1[][3], int arr2[][3], int rows1, int cols1, int rows2, int cols2) {
    // Check if dimensions are different
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Unequal Matrices... (Different Sizes)\n");
        return;
    }

    // Check element-wise equality
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                printf("Unequal Matrices...\n");
                return;
            }
        }
    }

    // If no mismatches found
    printf("Equal Matrices...\n");
}

int main(void) {
    // Example matrices
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Different size (2x3)

    int rows1 = sizeof(arr1) / sizeof(arr1[0]);
    int cols1 = sizeof(arr1[0]) / sizeof(arr1[0][0]);

    int rows2 = sizeof(arr2) / sizeof(arr2[0]);
    int cols2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);

    equal_check(arr1, arr2, rows1, cols1, rows2, cols2);

    return 0;
}

*/