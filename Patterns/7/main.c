#include <stdio.h>
int main(){
    int i,j,k,l;
    for(i=1;i<=4;i++){
        for(j=4;j>=i;j--)
            printf("1");
        printf("\n");
    };
    for(k=1;k<=3;k++){
        for(l=1;l<=k+1;l++)
            printf("1");
        printf("\n");
    };
};