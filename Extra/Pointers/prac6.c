#include <stdio.h>

void increment(int *a){
    *a = (*a)+1; // call by reference 
    printf("Address of 'a' in function 'increment' = %p\n", &a);
}

int main(){
    int a = 10;
    increment(&a);
    
    printf("a = %d\n", a);
    printf("Address of 'a' in main = %p\n", &a);
    
    return 0;
}