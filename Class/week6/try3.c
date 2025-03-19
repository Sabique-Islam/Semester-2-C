#include <stdio.h>

int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

int main(){
    int *Sptr;
    char *Aptr[4];

    for(int i=0; i<3; i++){
        printf("\nBase Address of Row-->%d-->%p\n",i,A+i);
        for(int j=0; j<3; j++){
            printf("%d\t", A[i][j]);
        }
    }
    return 0;
}