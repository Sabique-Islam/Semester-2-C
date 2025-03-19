#include <stdio.h>

int main(){
    
    for(int i = 1; i<11; i++){
        if ((i==6)||(i==8))
            continue;
            
        printf("%d",i);
        printf("\n");
    }
    
    return 0;
}