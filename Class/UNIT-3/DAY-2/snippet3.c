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

void Display(struct Student){

}

struct Student S1 = {"PES1UG22CS001", "John Doe", {100, 90, 80, 70}};

int main(){
    printf("\n\n");

    

    printf("\n\n");
    return 0;
}

