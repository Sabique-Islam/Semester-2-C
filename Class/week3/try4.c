#include <stdio.h>
#include <limits.h>

char C1 = 'A';
char C2 = 'B'; 

int main(){
    printf("\n99/2-->%d", 99/2);

    if ((10+25-99/2) <= 1291){
        printf("\nTrue.");
    }
    else
        printf("\nFalse.");

    return 0;
}