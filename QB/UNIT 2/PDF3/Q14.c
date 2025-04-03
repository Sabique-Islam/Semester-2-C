/*

Write a program to find the gcd of 2 numbers using recursion.

*/

#include <stdio.h>

int gcd(int a, int b){
    if (b==0){
        return a;
    }else{
        gcd(b,a%b);
    }
}

int main() {
    
    printf("%d\n", gcd(8,10));
    return 0;
}