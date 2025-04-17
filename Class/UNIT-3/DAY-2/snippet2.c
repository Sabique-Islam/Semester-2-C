#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


// Struct in C

struct Student
{
    char SRN[13]; //eg: PES1UG22CS001
    char Name[20]; 
    int Marks[4];
};

struct Student S1 = {"PES1UG22CS001", "John Doe", {100, 90, 80, 70}};

int main(){
    printf("\n\n");

    printf("SRN as a member of Struct Student S1 --> %s\n", S1.SRN);\
    printf("Marks[0] as a member of Struct Student S1 --> %d\n", S1.Marks[0]);
    printf("Marks[1] as a member of Struct Student S1 --> %d\n", S1.Marks[1]);
    printf("Marks[2] as a member of Struct Student S1 --> %d\n", S1.Marks[2]);
    printf("Marks[3] as a member of Struct Student S1 --> %d\n", S1.Marks[3]);

    printf("\n\n");
    return 0;
}