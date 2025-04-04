// pointer to pointer

#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    
    printf("%d\n", *p); // 6
    printf("%d\n", *q); 
    printf("%d\n", *(*q)); // 6
    printf("%d\n", *(*r));
    printf("%d\n", *(*(*r))); // 6
    
    ***r = 10;
    printf("x = %d\n", x); // 10
    
    **q = *p + 2;
    printf("x = %d\n", x); // 12
    
    return 0;
}