#include <stdio.h>

int main(){
    
    int num = 65; // ASCII value of 'A'
    
    int lines;
    printf("Enter number of lines: ");
    scanf("%d", &lines);
    
    for(int i = 1; i<=lines; i++){
        for(int j = 0; j<i; j++){
            printf("%c", num);
        }
        num ++;
        printf("\n");
    }
    return 0;
}