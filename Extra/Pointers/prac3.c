#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int a=10;
    int *p;
    p = &a;
    
    //pointer arithmetic
    printf("Size of integer: %d bytes\n", sizeof(int));
    printf("Address of p: %d\n", p);
    printf("Address of p+1: %d\n", p+1); // increment of 4, cuz size of integer is 4 bytes
    printf("Address of p+2: %d\n", p+2); 
    
    printf("(Value @ address p) + 1 : %d\n", *p+1); // 10+1
    printf("Value @ address p+1: %d\n", *(p+1)); // garbage value since no value is allocated at this address.
    
    return 0;
}