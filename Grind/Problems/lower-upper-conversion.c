// Flip a string's lowercase characters to uppercase and vice versa

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caseflip(char *s){
    int length = strlen(s);

    for(int i=0; i<length; i++){

        if (isupper(s[i])){
            s[i] = tolower(s[i]);
        }

        else if (islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
}

int main(void){
    char str1[] = "abcdeABCDE";

    caseflip(str1);
    printf("%s",str1);

    return 0;
}