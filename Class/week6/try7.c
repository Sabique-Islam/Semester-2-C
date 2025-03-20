#include <stdio.h>
#include <stdlib.h>

int A = 100;
int B = 200;


int* Greetings(void){
    int *Aptr = (int*)malloc(10*sizeof(int));

    printf("Value of A in the context of function greetings-->%d\n", A);
    return (Aptr);
}
int* Parent;

int main(){
    int *ptr = Greetings();
    printf("Value of A in the context of main-->%d\n", A);

    Parent = Greetings();
    printf("Value of Parent-->%d\n", Parent);

    return 0;
}