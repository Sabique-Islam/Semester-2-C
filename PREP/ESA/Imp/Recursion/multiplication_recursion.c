// Recursive function for multiplication of two numbers
#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product: %d\n", multiply(a, b));
    return 0;
}
