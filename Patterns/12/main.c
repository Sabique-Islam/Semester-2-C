#include <stdio.h>

int main(){
    int l,s,c;
    for(l=1;l<=4;l++){

        for(s=3;s>=l;s--)
        printf(" ");

        for(c=1;c<=l;c++)
            printf("* ");
        
        printf("\n");
    }
}