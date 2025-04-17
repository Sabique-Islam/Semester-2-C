/*

Structure to find BMI of each student.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


struct BMI{
    float height;
    float weight;
};

struct BMI AandNsection[131]; // Array of Structs

struct Student
{
    char SRN[13];
    char Name[20]; 
    struct BMI B;
};

struct Elevator
{
    int Density;
    double Weight;
    int FloorChoice[10];
};

struct Student S1 = {"PES7UG01CS007", "Optimus Prime", {1.67, 55.0}};

int main(){
    printf("\n\n");

    printf("BMI of Student S1 --> %f\n", S1.B.weight/(S1.B.height*S1.B.height));

    printf("\n\n");
    return 0;
}