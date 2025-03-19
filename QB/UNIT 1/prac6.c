#include <stdio.h>

int main(){
    int num, reverse = 0, remainder, og;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    og = num;
    
    while (num > 0){
        remainder = num % 10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }
    
    if (og==reverse){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    
    return 0;
}