#include <stdio.h>

int main(){
    int l,c,s, s1=1, l1=1;
    for(l=1;l<=4;l++){
        
        for(c=1;c<=l;c++)
            printf("1");
            
        for(s=5;s>=s1;s--)
            printf(" ");
            s1+=2;
        
        for(c=1;c<=l1;c++)
            printf("1");
        
        if(l!=3)
            l1++;
        
        printf("\n");
    };
};