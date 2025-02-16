#include <stdio.h>

int main(void){
    int x[3][4];
    printf("Enter matrix data: ");

    for(int i = 0; i<3; i++)
        for(int j = 0; j<4; j++)
            scanf("%d",&x[i][j]);

    for(int j = 0; j<4; j++){
        for(int i = 0; i<3; i++){
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

}