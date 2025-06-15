// Recursive function for addition of two numbers
#include <stdio.h>

int add(int a, int b) {
    if (b == 0)
        return a;
    return add(a + 1, b - 1);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", add(a, b));
    return 0;
}
