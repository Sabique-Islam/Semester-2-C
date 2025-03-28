#include <stdio.h>

int main() {
    int check = 0;
    
    int row, col;
    
    printf("Enter the dimensions: ");
    scanf("%d %d", &row, &col);
    
    int matrix[row][col];
    
    if (row != col){
        printf("Not a symmetric matrix");
    }
    
    else{
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                printf("Enter the numbers: ");
                scanf("%d", &matrix[i][j]);
            }
        }
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==matrix[j][i]){
                    check +=1;
                }
            }        
        }
        
        if (check == row*col){
            printf("Symmetric matrix");
        }else{
            printf("Non-symmetric matrix");
        }
    }
    
    return 0;
}


/*

AI CODE:

#include <stdio.h>

int main() {
    int row, col;
    
    printf("Enter the dimensions: ");
    scanf("%d %d", &row, &col);
    
    // Check if it's a square matrix
    if (row != col) {
        printf("Not a symmetric matrix\n");
        return 0; // Exit since symmetry is impossible
    }

    int matrix[row][col];

    // Input the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {  // Only check lower triangle
            if (matrix[i][j] != matrix[j][i]) {
                printf("Non-symmetric matrix\n");
                return 0; // Exit early since it's not symmetric
            }
        }
    }

    printf("Symmetric matrix\n");
    return 0;
}

*/