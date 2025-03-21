#include <string.h>
#include <stdio.h>

int main(){
    char str1[] = "University";
    char str2[20];
    char str3[] = "PES";

    int i = strcmp(strcat(str3, strcpy(str2, str1)), "PESUniversity");

    printf("%d\n",i);
    return 0;
}