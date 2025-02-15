#include <stdio.h>

int main(){
    int num=1,l,c;
    for(l=1; l<=4;l++){
        for(c=1;c<=l;c++){
            printf("%d",num);
            num++;
        };
        printf("\n");
    };
};