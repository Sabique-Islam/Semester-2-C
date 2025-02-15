// Check If A String Is A Palindrome

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]){
    int middle = strlen(string)/2;
    int length = strlen(string);
    
    for(int i=0; i<middle; i++){
        if (string[i] != string[length - i - 1])
            return false;
    }
    return true;
}

int main(void){

    // Test cases
    
    char string1[] = "abccba";
    char string2[] = "abcba";
    char string3[] = "qwerty";
    
    if(is_palindrome(string1))
        printf("%s is a palindrome.",string1);
    else
        printf("%s is not a palindrome.",string1);
    
    printf("\n");
    
    if(is_palindrome(string2))
        printf("%s is a palindrome.",string2);
    else
        printf("%s is not a palindrome.",string2); 
        
    printf("\n");    
        
    if(is_palindrome(string3))
        printf("%s is a palindrome.",string3);
    else
        printf("%s is not a palindrome.",string3);
        
    return 0;
}