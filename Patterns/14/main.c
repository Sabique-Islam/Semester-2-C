#include <stdio.h>

int  main(){
    int l,s,c;
    
    for(l=1;l<=4;l++){
        
        for(s=1;s<=l-1;s++)
            printf(" ");
        
        for(c=4;c>=l;c--)
            printf("* ");
            
        printf("\n");
    }
    
    for(l=1;l<=3;l++){
        
        for(s=2;s>=l;s--)
            printf(" ");
        
        for(c=1;c<=l+1;c++)
            printf("* ");
        
        printf("\n");
    }
};