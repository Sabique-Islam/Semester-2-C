#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    // Declare strings for testing
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    char str3[20];
    char str4[] = "Apple";
    char str5[] = "Banana";

    // 1. strcat() - Combine two strings

    printf("1. Using strcat():\n");
    printf("   Before: str1 = %s, str2 = %s\n", str1, str2);
    strcat(str1, str2);
    printf("   After: str1 = %s\n\n", str1);

    // 2. strlen() - Get length of a string

    printf("2. Using strlen():\n");
    int length = strlen(str1);
    printf("   Length of '%s' is %d characters\n\n", str1, length);

    // 3. reverse() - Reverse a string (custom)
    printf("3. Using reverse() (custom):\n");
    printf("   Before: str1 = %s\n", str1);
    reverse(str1);
    printf("   After: str1 = %s\n\n", str1);

    // 4. strcpy() - Copy one string to another

    printf("4. Using strcpy():\n");
    printf("   Before: str3 = (empty), str2 = %s\n", str2);
    strcpy(str3, str2);
    printf("   After: str3 = %s\n\n", str3);

    // 5. strcmp() - Compare two strings
    
    printf("5. Using strcmp():\n");
    printf("   Comparing '%s' and '%s'\n", str4, str5);
    int result = strcmp(str4, str5);
    if (result == 0) {
        printf("   Result: Strings are equal\n");
    } else if (result < 0) {
        printf("   Result: '%s' comes before '%s'\n", str4, str5);
    } else {
        printf("   Result: '%s' comes after '%s'\n", str4, str5);
    }

    return 0;
}