/*

Write a function digit(n, k) that returns the kth digit (from the right) in n ( a positive integer). 
For example, digit(829, 1) returns 9. Digit(829, 2) return 2 and digit(829, 3) returns 8. 
If k is greater than the number of digits in n, have the function return 0.

*/

#include <stdio.h>

int digit(int n, int k){
    int count = 0;
    while (n>0){
        count ++;
        if (count == k)
            return n%10;
        n /= 10;
    }
    return 0;
}

int main() {
    printf("%d\n", digit(829,1));
    printf("%d\n", digit(829,2));
    printf("%d\n", digit(829,3));
    printf("%d\n", digit(1,829));
