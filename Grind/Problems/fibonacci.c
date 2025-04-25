// Computing the Fibonacci Sequence

#include <stdio.h>

int main(void) {
    int term1 = 0; 
    int term2 = 1; 
    int fibn = 0;
    int length = 0;
    
    do{
        printf("Enter nth term:\n");
        scanf("%d", &length);

        if(length<3)
            printf("Length >=3\n");
    } while (length<3);
    
    printf("%d, %d", term1, term2);
    
    for(int i=2; i<length; i++){
        fibn = term1 + term2;
        printf(", %d", fibn);
        
        term1 = term2;
        term2 = fibn;
    }

    return 0;
}