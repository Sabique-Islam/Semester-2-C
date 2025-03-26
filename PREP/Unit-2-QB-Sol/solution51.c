#include <stdio.h>

int main(){
    int n;
    printf("Dimension of Matrix: ");
    scanf("%d", &n);
    
    int matrix1[n][n];
    int matrix2[n][n];
    
    int check = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Matrix 1 --> \nEnter integers for: row --> %d, column --> %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Matrix 2 --> \nEnter integers for: row --> %d, column --> %d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix1[i][j]==matrix2[i][j]){
                check+=1;
            }
        }
    }
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(matrix1[i][j] != matrix2[i][j]){
    //                 printf("Unequal matrices...\n");
    //                 return 0;
    //             }
    //     }
    // }
    // printf("Both matrices are same...\n");
    
    if (check == n*n){
        printf("Both matrices are same...\n");
    }else{
        printf("Unequal matrices...\n");
    }
    
    return 0;
}