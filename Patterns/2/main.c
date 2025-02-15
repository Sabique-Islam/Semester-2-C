#include <stdio.h>

int main(){
    int l,c;
    for(l=1; l<=5; l++){
        for(c=1;c<=l;c++){
            printf("%d",c);
        };
        printf("\n");
    };
};