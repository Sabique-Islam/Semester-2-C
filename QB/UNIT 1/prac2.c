#include <stdio.h>

int main(){
    int num, sum, last_digit, first_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    last_digit = num%10;
    
    first_digit = num;
    
    while(first_digit>=10){
        first_digit = first_digit/10;
        printf("While loop iteration to get first digit: %d\n", first_digit);
    }
    
    sum = last_digit + first_digit;
    
    printf("Sum of first and last digit for %d is (%d+%d) = %d\n", num, first_digit, last_digit, sum);
    
    return 0;
}