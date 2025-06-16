// Macro as expression

#include <stdio.h>

#define PI 3.14
#define AREA_OF_CIRCLE (PI*r*r)

int main(){
    float r = 34;
    printf("%.2f", AREA_OF_CIRCLE);
    return 0;
}