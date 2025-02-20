#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: (abc) ");
    scanf("%d", &num);

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    printf("c - a = %d\n", c - a);

    return 0;
}