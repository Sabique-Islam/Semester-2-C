/*

Write a C program that accepts a string, replaces all vowels (both uppercase and 
lowercase) with their ASCII values, and prints the final modified string. Also, count 
the number of consonants in the string.

Sample Run:
Input: "Hello World"
Output: "H101ll111 W111rld"
Consonants Count: 7

*/

#include <stdio.h>
#include <string.h>     
#include <ctype.h>  // for isalpha

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                printf("%d", (int)str[i]);
            } else {
                printf("%c", str[i]);
                consonantCount++;
            }
        } else {
            printf("%c", str[i]);
        }
    }

    printf("\nConsonants Count: %d\n", consonantCount);

    return 0;
}