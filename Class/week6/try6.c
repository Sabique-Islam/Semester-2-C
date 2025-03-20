#include <stdio.h>

#define C 100+200

int A = 100 +100 + C;
int B = 200 + 100 + C;

int main(){
    printf("Scope of A is a Global with a value --> %d\n", A);
    printf("Scope of B is a Global with1 a value --> %d\n", B);

    return 0;
}