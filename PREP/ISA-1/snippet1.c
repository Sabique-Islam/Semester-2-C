// WAP to input a floating point number from the user and print the count of digits which are divisible by 3 after the decimal point.

#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating point number --> ");
    scanf("%f", &num);
    
    int count = 0;
    
    printf("Number --> %.3f\n", num);
    
    float decimal = num - (int)num;
    
    printf("Decimal part --> %.3f\n", decimal);
    
    for(int i=0; i<3; i++){
        decimal *= 10;
        
        int digit = (int)decimal%10;
        if(digit%3==0){
            count++;
        }
    }
    printf("Count --> %d\n", count);

    return 0;
}