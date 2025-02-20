#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number (abc): ");
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    printf("%d%d%d\n", a*2, b, c/2);

    return 0;
}