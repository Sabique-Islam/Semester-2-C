#include <stdio.h>

int  main(){
    char k='z';
    int l,s;
    int s1=-2;
    char c;
    
    for(l=1;l<=26;l++){

        for(c='a';c<=k;c++)
            printf("%c",c);
            k-=1;
            
        for(s=0;s<=s1;s++)
            printf(" ");
            s1+=2;
            
        if(l==1)
            c--;
            
        for(c=c-1;c>='a';c--)
            printf("%c",c);
        
        printf("\n");
    };
};