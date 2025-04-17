#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char S[5] = {'P', 'E', 'S', 'U', '\0'};

char *Sptr = S;

int main(){
    printf("\n\n");
    printf("Sptr --> %s\n", Sptr);

    for(int i=0; i<100; i++){
        printf("%c", Sptr[i]);
    }

    printf("\n\n");
    return 0;
}
