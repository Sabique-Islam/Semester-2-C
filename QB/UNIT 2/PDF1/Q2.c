/*

The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 10…, where each number is the sum of the preceding two numbers. 
Write a program fragment that declares an array named 'fib_numbers' of length 40 and fills the array with first 40 Fibonacci numbers.

*/

#include <stdio.h>

int main(void) {
    int fib_numbers[40]= {0};
    int f1 = 0, f2 = 1;
    
    for(int i=0; i<40; i++){
        fib_numbers[i] = f1;
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    
    for(int i=0; i<40; i++){
        printf("%d ", fib_numbers[i]);
    }
}