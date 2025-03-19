#include <stdio.h>

int main(){

    int row;
    int num=1;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}