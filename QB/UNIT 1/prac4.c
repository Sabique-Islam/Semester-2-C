#include <stdio.h>

int main(){
    int line, space, star;
    
    for(line = 0; line < 5; line++){
        for(space = 4; space > line; space--)
            printf(" ");
        
        for(star = 0; star < line; star++)
            printf("* ");
        
        printf("\n");
    }
    return 0;
}