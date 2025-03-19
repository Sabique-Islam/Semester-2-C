#include <stdio.h>

int main(){
    int dim;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &dim);

    int mat[dim][dim];

    for (int i=0; i<dim; i++){
        for (int j=0; j<dim; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            
        }
    }

    for(int i=0; i<dim; i++){
        if(i%2==0){
            for(int j=0; j<dim; j++){
                printf("%d ", mat[i][j]);
            }
        }
        else{
            for(int j=dim-1; j>=0; j--){
                printf("%d ", mat[i][j]);
            }
    }
    printf("\n");
}
}