/*

Write a C Program to find and display the number of characters and words in a user input.
Program must take one line of input from the user.

*/

#include <stdio.h>
#include <string.h>

#define LENGTH 100

int main() {
    int sum_char = 0;
    int sum_word = 0;
    
    char user_input[LENGTH];
    printf("Enter a sentence: ");
    fgets(user_input, LENGTH, stdin);
    
    user_input[strcspn(user_input, "\n")] = '\0';
    
    printf("Input: %s\n", user_input);
    
    int size = strlen(user_input);
    
    for(int i=0; i<size; i++){
        if (user_input[i] == ' '){
            sum_word += 1;
            continue;
        }
        sum_char += 1;
    }
    
    if(size>0)
        sum_word += 1;
    
    printf("Number of words --> %d\n", sum_word);
    printf("Number of characters (excluding spaces) --> %d\n", sum_char);
}