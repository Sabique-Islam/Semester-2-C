#include<stdio.h>

/*
Using arrays, write a program to check whether a given number has repeated digits. 
Ex: 456754 (has repeated digits) and 3456 (Does not have)
*/

char repeat(int num){
    int digits[10] = {0}; 
    
    while (num > 0) {
        int digit = num % 10;
        digits[digit]++;
        
        if (digits[digit] > 1) {
            return 'Y';
        }
        num /= 10;
    }
    return 'N';
}

int main(){
    printf("%c\n", repeat(89) );
    return(0);
}