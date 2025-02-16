// Counting the Vowels in a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char s[]){
    int count = 0;
    
    for (int i=0; i<(strlen(s)); i++){
        switch (toupper(s[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}

int main(void) {
    char str1[] = "Hello there!";
    
    int vowel = vowel_count(str1);
    
    printf("Vowel Count: %d",vowel);

    return 0;
}