#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num&1){
        printf("Odd number..\n");
    } else{
        printf("Even number..\n");
    }
    
    // Logic: The LSB (Least Significant Bit) is always 1 for ODD numbers, hence the AND operator for num and 1, returns 1 for LSB for ODD numbers and 0 for EVEN numbers.
    
    return 0;
}