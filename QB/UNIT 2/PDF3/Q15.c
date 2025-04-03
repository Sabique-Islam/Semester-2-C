/*

Write a program to find the number of digits in an interger using recursion.
    int length(int n);
    length(892) will return 3
    length(3452) will return 4.

*/

#include <stdio.h>

int length(int n){
    if (n==0){
        return 1;
    }else if (n<0){
        return length(-n);
    }else if (n<10){
        return 1;
    }else{
        return 1+length(n/10);
    }
}

int main() {
    printf("%d\n", length(892));
    printf("%d\n", length(0));
    printf("%d\n", length(122345));
    return 0;
}
