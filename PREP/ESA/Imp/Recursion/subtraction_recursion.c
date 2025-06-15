// Recursive function for subtraction of two numbers
#include <stdio.h>

int subtract(int a, int b) {
    if (b == 0)
        return a;
    return subtract(a - 1, b - 1);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Difference: %d\n", subtract(a, b));
    return 0;
}
