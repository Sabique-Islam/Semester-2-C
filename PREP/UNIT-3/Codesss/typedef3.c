#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    // int* a, b; // here --> a : Pointer, b : Integer
    int c = 100;
    // a = &c;
    // b = &c;

    // Fix -->

    typedef int* intptr;
    intptr a, b;
    a = &c;
    b = &c;

    printf("%d %d\n", *a, *b);
    return 0;
}