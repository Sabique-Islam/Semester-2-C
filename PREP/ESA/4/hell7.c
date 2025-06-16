// Macro as parameter

#include <stdio.h>

#define square(x) (x*x)

int main(){
    float a = 5.5;
    printf("%.2f", square(a));
}