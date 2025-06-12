#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("example.txt", "r");
    char ch;
    while((ch = fgetc(fp))!=EOF){
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}