#include <stdio.h>

int main(){

    int A[5] = {1,2,3,4,5};
    int *aptr[5];

    for(int i=0; i<5; i++){
        aptr[i] = A+1;
    }

    for(int i=0; i<5; i++){
        printf("\nValue of aptr[%d]-->%p\n", i, aptr[i]); // all addresses are same :)
        printf("Dereferenced Value of aptr[%d]-->%d\n", i, *aptr[i]);
        printf("\n");
    }

    return 0;
}