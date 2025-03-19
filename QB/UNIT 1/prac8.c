#include <stdio.h>

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i=1; i< (num+1); i++){
        for(int j=1; j<11; j++){
            printf("%d * %d = %d\t", i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}