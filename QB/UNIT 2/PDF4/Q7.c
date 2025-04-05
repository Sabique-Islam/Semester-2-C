/*

Write a function num_digits(n) that returns the number of digits in n (a positive integer).

*/

#include <stdio.h>

int num_digits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int main() {
    printf("%d\n", num_digits(829)); // Output: 3
    printf("%d\n", num_digits(1));   // Output: 1
    printf("%d\n", num_digits(12345)); // Output: 5
    return 0;
}