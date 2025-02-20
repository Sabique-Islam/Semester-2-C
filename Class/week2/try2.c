#include <stdio.h>
#define PI 3.141

float area;
float radius;

int main(){

    printf("\n Enter the Value of Radius-->");
    scanf("%f",&radius);

    area = 3.141*radius*radius;

    printf("\nArea of the Circle-->%f",area);
    return 0;
};