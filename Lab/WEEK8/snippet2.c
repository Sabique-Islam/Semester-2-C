/*

Write a C program to reverse a number using a do-while loop.

*/

#include <stdio.h>

int main(){
    int num, rev = 0, remain;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    do{
        remain = num%10;
        rev = rev*10 + remain;
        num = num/10;
    }
    while(num!=0);

    printf("Reversed Number --> %d\n", rev);

    return 0;
}