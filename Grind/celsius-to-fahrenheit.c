// Convert Celsius to Fahrenheit

#include <stdio.h>

int main(void){
    
    double C = 0, start = 0, end = 0, step = 0, F = 0;
    
    printf("Enter start C temp: ");
    scanf("%lf", &start);

    printf("Enter end C temp: ");
    scanf("%lf", &end);

    printf("Enter step value: ");
    scanf("%lf", &step);

    printf("C    *****     F\n");
    printf("*****************\n");
    
    for (C = start; C <= end; C += step){
        F = (C * (9/5)) + 32;
        printf("%-8.2lf %8.2lf\n", C, F);
    }

    return 0;
}