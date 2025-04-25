#include <stdio.h>

int main() {
    int row = 5, coef, i, j;

    for(i = 0; i < row; i++) {
        for(int space=0; space<row -i; space++) {
            printf("  ");
        }

        coef = 1;
        for(j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
