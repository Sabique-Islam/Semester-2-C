// Find all combinations of words formed from Mobile Keypad using recursion
#include <stdio.h>
#include <string.h>

const char *keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printCombinations(char *input, int index, char *output, int outIndex) {
    if (input[index] == '\0') {
        output[outIndex] = '\0';
        printf("%s\n", output);
        return;
    }
    int digit = input[index] - '0';
    for (int i = 0; keypad[digit][i] != '\0'; i++) {
        output[outIndex] = keypad[digit][i];
        printCombinations(input, index + 1, output, outIndex + 1);
    }
}

int main() {
    char input[100], output[100];
    printf("Enter digits: ");
    scanf("%s", input);
    printCombinations(input, 0, output, 0);
    return 0;
}
