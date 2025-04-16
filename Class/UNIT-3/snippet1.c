#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char S[5] = {'P', 'E', 'S', 'U', '\0'};

int main(){
    printf("\n\n");

    S[3] = 'B'; //  Change the value of the 4th element
    printf("S --> %s\n", S);

    printf("\n\n");
    return 0;
}
