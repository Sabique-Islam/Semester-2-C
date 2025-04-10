// Input 10 characters from the user and check the count of vowels and print same.
#include <stdio.h>

int main() {
    char characters[10];
    int count = 0;
    
    for(int i=0; i<10; i++){
        printf("Enter char for index : %d --> ", i);
        scanf(" %c", &characters[i]);
    }
    
    for(int i=0; i<10; i++){
        if ((characters[i] == 'a') || (characters[i] == 'e') || (characters[i] == 'i') || (characters[i] == 'o') || (characters[i] == 'u')){
            printf("Character --> %c\n", characters[i]);
            count++;
        }
    }
    
    printf("Vowel count --> %d", count);

    return 0;
}