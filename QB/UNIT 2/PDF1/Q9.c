/*

Write a program to convert a given integer into a string which has the binary equivalent of the number. 
Example: Assuming that an integer is 32-bits long and for the number 5, the resultant string should be
“00000000000000000000000000000101”

*/


#include <stdio.h>
#include <string.h>

int main(void){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    char binaryString[33]; // 32 bits + null terminator
    binaryString[32] = '\0';

    for (int i = 31; i >= 0; i--) {
        binaryString[i] = (num & 1) ? '1' : '0';
        num >>= 1; // Right shift the number by 1 bit
    }

    printf("Binary representation: %s\n", binaryString);

    return 0;
}

// Definitely not AI generated