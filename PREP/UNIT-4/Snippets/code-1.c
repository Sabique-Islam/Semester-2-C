#include <stdio.h>
int main() {

    int num;
    
    printf("Reading numbers from input...\n");
    while (scanf("%d", &num) != EOF) {
        printf("Read number: %d\n", num);
    }

    return 0;
}