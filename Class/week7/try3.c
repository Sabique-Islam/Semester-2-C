#include <stdio.h>
#include <string.h>

// char A[8] = "Tuesday";
// char B[9] = "Wednesday";

char A[] = "Tuesday";
char B[] = "Wednesday";

int main(){

    printf("A --> %s, Length --> %ld\n", A, strlen(A));
    printf("B --> %s, Lenght --> %ld\n", B, strlen(B));
}