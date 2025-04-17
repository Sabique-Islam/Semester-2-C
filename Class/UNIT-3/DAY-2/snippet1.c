#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h> // for offsetof

int A; // Scalar Type
int B = 100; // Scalar Type

int Numbers[5] = {1,2,3,4,5}; // Vector Type


// Struct in C

struct Student
{
    char SRN[13]; //eg: PES1UG22CS001
    char Name[20]; 
    int Marks[4];
};

int main(){
    printf("\n\n");

    printf("Size of Student --> %ld\n", sizeof(struct Student)); //13+20+16 = 49 bytes

    // Print offsets to understand padding
    printf("Offset of SRN: %ld\n", offsetof(struct Student, SRN));
    printf("Offset of Name: %ld\n", offsetof(struct Student, Name));
    printf("Offset of Marks: %ld\n", offsetof(struct Student, Marks));

    // Print sizes of individual members
    printf("Size of SRN: %ld\n", sizeof(((struct Student*)0)->SRN));
    printf("Size of Name: %ld\n", sizeof(((struct Student*)0)->Name));
    printf("Size of Marks: %ld\n", sizeof(((struct Student*)0)->Marks));

    printf("\n\n");
    return 0;
}

/*

The discrepancy is due to structure padding. 
The C compiler often adds padding bytes between structure members to ensure proper memory alignment, 
which can make the actual size of the structure larger than the sum of its individual members.

In this case, the compiler is adding 3 bytes of padding to align the structure properly, 
resulting in a total size of 52 bytes instead of 49 bytes.

*/