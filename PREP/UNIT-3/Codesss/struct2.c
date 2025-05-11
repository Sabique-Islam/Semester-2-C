#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

struct Student{
    int id;
    char name[100];
    char favourite_subject[100];
};

struct Student student1, student2, student3;


int main(){

    struct Student student1 = {1, "John", "Maths"};
    
    printf("Student 1: %d %s %s\n", student1.id, student1.name, student1.favourite_subject);

    return 0;
}