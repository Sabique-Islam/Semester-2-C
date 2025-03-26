#include <stdio.h>

int main(){
    int n;
    printf("Dimension of Matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int sum = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter integers for: row --> %d, column --> %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        int sum = 0;
        
        for(int j=0; j<n; j++){
            sum += matrix[i][j];
        }
        printf("Sum of all the element in row --> %d = %d\n", i+1, sum);
    }
    
    return 0;
}