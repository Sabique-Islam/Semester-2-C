// Recursive function to print all permutations of a given string
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(&str[l], &str[i]);
        permute(str, l + 1, r);
        swap(&str[l], &str[i]); // backtrack
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    permute(str, 0, strlen(str) - 1);
    return 0;
}
