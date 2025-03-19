#include <stdio.h>

int main() {    
    int dim;
    printf("Enter the dimension of the matrix (integer): ");
    scanf("%d", &dim);

    int mat1[dim][dim], mat2[dim][dim];
    int add[dim][dim];

    for(int i=0; i<dim; i++) {
        for(int j=0; j<dim; j++) {
            printf("Enter element [%d][%d] of matrix 1: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }

    }
    for(int i=0; i<dim; i++) {
        for(int j=0; j<dim; j++) {
            printf("Enter element [%d][%d] of matrix 2: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }

    }

    for(int i=0; i<dim; i++) {
        for(int j=0; j<dim; j++) {
            add[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Resulting Matrix:\n");
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

}