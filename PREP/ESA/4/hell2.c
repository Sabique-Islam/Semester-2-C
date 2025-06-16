#include <stdio.h>

int main() {
    int num1, num2;

    int value = scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;

    printf("%d %d\n", sum, value);

    return 0;
}