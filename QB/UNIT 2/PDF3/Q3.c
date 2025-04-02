/*

Write a function named int zeroCheck(int a, int b, int c); that is given three integers, 
and returns 1 if any of the integers is 0, otherwise it returns 0.

*/

#include <stdio.h>

int zeroCheck(int a, int b, int c ){
    if (a==0 || b==0 || c==0){
        return 0;
    }else{
        return 1;
    }
}

int main(void) {
    
    if (zeroCheck(1,2,1)){
        printf("Returning 1..\n");
    }else{
        printf("Returning 0..\n");
    }
    return 0;
}