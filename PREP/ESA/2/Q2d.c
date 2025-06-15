#include<stdio.h> 
#include<string.h>
#include<ctype.h>

void disp_vowels(char str[]);

int main() { 
    char a[ ] = "hi and hello pes university"; 
    disp_vowels(a); 
    return 0; 
} 
void disp_vowels(char str[]) { 
    for(int i=0; str[i]!=0; i++){
        if(tolower(str[i])=='a'|| tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u'){
            printf("%c", str[i]);
        }
    }
}