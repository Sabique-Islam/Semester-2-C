#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef union student{
    int id;
    char name[100];
} Hogwarts;

/*
or

union student{
    int id;
    char name[100];
};

// eg: union student s1;
*/

int main(){
    Hogwarts s1; // union student = Hogwarts (alias)

    s1.id = 1;
    strcpy(s1.name, "Ron Weasley");
    

    printf("\nStudent 1 --> \n%d\n%s\n\n", s1.id, s1.name); //s1.id --> Garbage Value, since s1.name is the last member accessed
    return 0;
}