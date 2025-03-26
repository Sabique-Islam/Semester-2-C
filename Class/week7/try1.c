#include <stdio.h>

//typedef int Integer;

// The issue is with the line:
// typedef typedef alias;

// Corrected code:
typedef int alias;

// Alias long MyMarks;
// Alias int Integer;

typedef long MyMarks;
typedef int Integer;

int A = 999;

Integer B = 1999;

MyMarks C = 21;

int main(){
    printf("A-->%d\n", A);
    printf("B-->%d\n", B);
    printf("C-->%ld\n", C);

    return 0;
}