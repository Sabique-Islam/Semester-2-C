#include <stdio.h>

int main() {
    int l,s,c,spaces=0;

    for (l=1;l<=4;l++){
        
        for (c=4;c>=l;c--)
            printf("1");
        
        for (s=0;s<spaces;s++)
            printf(" ");
            
        spaces+=2;

        for (c=4;c>=l;c--)
            printf("1");

        printf("\n");
    }
}