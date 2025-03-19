#include <stdio.h>

int main(){
    int A[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        printf("Address of A[%d]-->%p\n", i, &A[i]);
        printf("Value of A[%d]-->%d\n", i, A[i]);
        printf("Dereferenced A[%d]-->%d\n", i, *(A+1));
    }
}