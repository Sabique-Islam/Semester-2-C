#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers separated by space: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d;%d;%d", num1*2, num2*2, num3*2);
    return 0;
}