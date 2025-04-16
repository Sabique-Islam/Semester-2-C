#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char String1[20] = "PESU"; 
//char String1[] = "PESU";
char String2[] = "EC Campus";

int main(){
    printf("\n\n");
    printf("String1 --> %s, with length --> %ld\n", String1, strlen(String1));
    printf("String2 --> %s, with length --> %ld\n", String2, strlen(String2));

    strcat(String1, String2);
    printf("String1 --> %s, with length --> %ld\n", String1, strlen(String1));
    printf("String2 --> %s, with length --> %ld\n", String2, strlen(String2));

    printf("\n\n");
    return 0;
}
