#include <stdio.h>

int main(){
    
    int num;
    printf("Enter range of integers: ");
    scanf("%d", &num);
    
    int sum = 0;
    
    for(int i = 0; i<num; i++){
        int n;
        printf("Integers --> ");
        scanf("%d", &n);
        sum += n;
    }
    
    printf("Sum of +ve and -ve numbers: %d", sum);
    return 0;
}