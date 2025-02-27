#include <stdio.h>

int A;
int B;

int main(){
    A=979989;
    B=399728;

    printf("\nA-->%d", A);
    printf("\nB-->%d", B);

    if(A>B){
        printf("\nGreat Guess.");

        if ((A%23)>=10){
            printf("\nModulus True.");
        }

        else{
            printf("\nModulus False.");
        }
    }
    return 0;
}