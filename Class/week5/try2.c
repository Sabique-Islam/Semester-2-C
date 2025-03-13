#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>
#include <ctype.h>

int main(){
    int A=10;

    int *Aptr = &A;

    printf("Address of A is %p\n",&A);
    printf("Value of A is %d\n",A);
    printf("Value of A is %d\n",*(&A));


    A=A+23;

    printf("Address of A is %p\n",&A);
    printf("Value of A is %d\n",A);
    printf("Value of A is %d\n",*(&A));

    printf("Dreference value of Aptr is %p\n",&Aptr);
    printf("Address of Aptr is %p\n",Aptr); // for %d :- warning: format '%d' expects argument of type 'int', but argument 2 has type 'int *' [-Wformat=]
    
}