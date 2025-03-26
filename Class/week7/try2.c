#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char A[5] = {'P', 'E', 'S', '\0', 'U'};
char B[5] = {'P', 'E', 'S', 'U', '\0'};

int main(void){

    int size = sizeof(A)/sizeof(A[0]);
    printf("Size of A: %d\n", size);

    for(int i = 0; i < size; i++){
        printf("%c", A[i]);
    }
    printf("\n\n");

    for(int i = 0; i < 5; i++){
        printf("%c", B[i]);
    }
    printf("\n\n");

    printf("%s", A);
    printf("\n\n");
}