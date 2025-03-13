#include <stdio.h>

int N;

int main(){

    printf("\nThe size of N is --> %ld bytes", sizeof(N));

    N=(2+3)/(6*2);

    printf("\nN = %d", N);
    printf("\nThe size of N is --> %ld bytes", sizeof(N));
    printf("\n");
    
    return 0;
}