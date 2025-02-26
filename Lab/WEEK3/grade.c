#include <stdio.h>

int main() {
    int num;
    printf("\nEnter score: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100)
        printf("A\n");
    else if (num >= 80 && num <= 89)
        printf("B\n");
    else if (num >= 70 && num <= 79)
        printf("C\n");
    else if (num >= 60 && num <= 69)
        printf("D\n");
    else if (num >= 50 && num <= 59)
        printf("E\n");
    else if (num >= 0 && num <= 49)
        printf("F\n");

    return 0;
}