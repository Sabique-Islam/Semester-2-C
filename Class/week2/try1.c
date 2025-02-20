#include <stdio.h>

// Find A+B

int main(){

    unsigned int a,b;

    printf("Enter the numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

    unsigned int num = a+b;

    printf("ADDITION: %d", num);

    return 0;
}