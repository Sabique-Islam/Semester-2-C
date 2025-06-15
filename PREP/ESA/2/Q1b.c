/*

The switch construct allows multi-way branching based on the value of a variable or expression,
a cleaner alternative to writing multiple if-else blocks.

Why use switch?

- Cleaner than multiple if-else if chains
- Easier to read and maintain

*/

#include <stdio.h>

int main() {
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You chose One\n");
            break;
        case 2:
            printf("You chose Two\n");
            break;
        case 3:
            printf("You chose Three\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}