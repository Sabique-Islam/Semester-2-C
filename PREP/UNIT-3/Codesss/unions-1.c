// In Structure --> Every member has its own storage location
// In Union --> All members share the same storage location

/*
C adds padding to structures for memory alignment, 
but it depends on the specific members and 
the compiler's alignment requirements.
*/

/*
Union --> Size of the largest member
*/

#include <stdio.h>

union test{
    int roll; // 4 bytes
    char name; // 1 byte
    char d; // 1 byte
    long int marks; // 8 bytes
};

int main(){
    int s = sizeof(union test);
    printf("%d\n", s);
    return 0;
}