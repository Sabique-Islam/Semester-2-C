/*

Using arrays, write a program to check whether a given number has repeated digits. 
Ex: 456754 (has repeated digits) and 3456 (Does not have)

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int digits[20];
    int count = 0;
    
    int og = num;
    
    while (num>0){
        digits[count++] = num%10;
        num = num/10;
    }
    
    for(int i = 0; i < count; i++){
        for(int j= i+1; j < count; j++){
            if (i>=0){
                if (digits[i] == digits[j]){
                    printf("%d has repeated digits...\n", og);
                    return 0;
                }
            }
        }
    }
    printf("%d does not have repeated digits...\n", og);
    return 0;
}