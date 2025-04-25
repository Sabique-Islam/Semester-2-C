/*

Write a C program to check whether a given character is a Digit, an Alphabet, or a Special Character using conditional statements.
If the character is between '0' and '9', print "It is a Digit."
If the character is between 'A' to 'Z' or 'a' to 'z', print "It is an Alphabet."
Otherwise, print "It is a Special Character."

*/

#include <stdio.h>
#include <string.h>

int main(){
    char user_input;
    printf("Enter a character: ");
    scanf(" %c", &user_input);

    if ((user_input >= '0') && (user_input <= '9')){
        printf("It is a Digit.");
    }
    else if (((user_input >= 'A') && (user_input <= 'Z')) || ((user_input >= 'a') && (user_input <= 'z'))){
        printf("It is an Alphabet.");
    }
    else{
        printf("It is a Special Character.");
    }

    return 0;
}