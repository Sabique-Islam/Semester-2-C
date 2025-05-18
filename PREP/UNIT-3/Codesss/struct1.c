#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#pragma pack(1) // Compiler directive used in C to control structure padding.

struct Student{
    int id;
    char name[100];
    char favourite_subject[100];
} student1, student2, student3;

int main(){

    student1.id = 1;  // (.) --> Structure Member Operator
    strcpy(student1.name, "John");  // strcpy --> String Copy (string.h
    strcpy(student1.favourite_subject, "Maths");


    printf("Student 1: %d, %s, %s\n", student1.id, student1.name, student1.favourite_subject);
    
    return 0;
}