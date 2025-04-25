// String concatenation with dynamic memory allocation
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_concatenate(char *s1, char *s2){
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    int size;
    
    size = s1_len+s2_len+1; // +1 accounting for null terminator
    
    //char new_str[s1_len+s2_len+1];
    
    char *s = calloc(size, sizeof(char));
    
    for(int i=0; i<s1_len;i++){
        s[i] = s1[i];
    }
    for(int i=0; i<s2_len;i++){
        s[s1_len+i] = s2[i];
    }
    
    s[size-1]='\0';
    
    return s;
}

int main(void) {
    
    char s1[6] = "Hello";
    char s2[6] = "World";
    
    char *test = string_concatenate(s1,s2);
    
    printf("%s",test);
    
    return 0;
}