#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    int a; 
    int *p;
    
    a=10;
    p = &a;
    
    printf("a = %d\n", a);
    *p = 20; // dereferencing
    printf("a = %d\n", a);
    
    /*
    if
    int b = 20;
    *p = b (address of p wont change to point at b)
    unless
    p = &b
    */

    return 0;
}