// Recursive function to print from 1 to n in reverse order
#include <stdio.h>

void printReverse(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printReverse(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printReverse(n);
    printf("\n");
    return 0;
}
