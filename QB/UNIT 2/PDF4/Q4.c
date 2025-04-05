/*

Write a function: char getContinue(); that displays to the user “Do you want to continue (y/n): ”, 
and continues to prompt the user until either uppercase or lowercase 'y' or 'n' is entered, 
returning (lowercase) 'y' or 'n' as the function return value.

*/

#include <stdio.h>
#include <ctype.h>

char getContinue() {
    char input;
    while (1) {
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &input);
        input = tolower(input);

        if (input == 'y' || input == 'n') {
            printf("%c\n",input);
        }
    }
}

int main() {
    char choice = getContinue();
    printf("You selected: %c\n", choice);
    return 0;
}