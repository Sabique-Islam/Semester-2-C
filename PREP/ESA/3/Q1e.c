#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters (press Enter to stop):\n");

    while ((ch = getc(stdin)) != '\n') {
        putc(ch, stdout);
    }
    
    printf("\nInput ended.\n");

    return 0;
}