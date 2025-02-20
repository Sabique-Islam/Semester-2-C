#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number (abc): ");
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    printf("%d0%d\n", a, c);

    return 0;
}