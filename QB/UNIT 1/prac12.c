/*

Write a program, which accepts a number and displays each digit in words.
Example: 6702, Output = Six-Seven-Zero-Two.

*/

#include <stdio.h>

int reverse(int num){
    int rev = 0, digit = 0;
    while(num>0){
        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
    return rev;
}

int main(void) {
    int num , digit = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int number = reverse(num);
    
    while(number>0){
        digit = number % 10;
        
        switch(digit){
            case 0: printf("Zero"); break;
            case 1: printf("One"); break;
            case 2: printf("Two"); break;
            case 3: printf("Three"); break;
            case 4: printf("Four"); break;
            case 5: printf("Five"); break;
            case 6: printf("Six"); break;
            case 7: printf("Seven"); break;
            case 8: printf("Eight"); break;
            case 9: printf("Nine"); break;
        }
        number /= 10;
        if(number>0)
            printf("-");
    }
}