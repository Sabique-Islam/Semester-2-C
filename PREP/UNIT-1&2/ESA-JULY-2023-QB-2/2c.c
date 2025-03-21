// strcat() mimic

#include <stdio.h>

void my_strcat(char* a, char* b){
    while (*a)
        a ++; //iterating thru 'a' till NULL terminator is found.
    while(*b){
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}

int main(){
    char a[100] = "Hi";
    char b[] = "Hello";
    my_strcat(a,b);
    printf("%s", a);
    return 0;
}