#include <stdio.h>

int main() {
    int n, i, j, isPrime;


    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {

        isPrime = 1;

        // Not a prime number, Check
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}