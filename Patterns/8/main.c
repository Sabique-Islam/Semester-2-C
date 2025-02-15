#include <stdio.h>

int main(){
    int l,s,c;
    for(l=1;l<=7;l++){
        if(l<=4){
            for(s=2;s<=l;s++)
                printf(" ");
            for(c=4;c>=l;c--)
                printf("1");
        }
        else{
            for(s=6;s>=l;s--) //starting from 6 cuz there's no space in 7th line.
                printf(" ");
            for(c=4;c<=l;c++) //c=4 cuz when l=5, only two "1"s are printed in 5th line and so on
                printf("1");
        };
        printf("\n");
    };
};