#include <stdio.h>

int main() {
    int num, rev = 0, remain, og;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    og = num;

    while (num != 0) {
        remain = num % 10;
        rev = rev * 10 + remain;
        num /= 10;
    }

    printf("Original number: %d\n", og);
    printf("Reversed number: %d\n", rev);

    return 0;
}