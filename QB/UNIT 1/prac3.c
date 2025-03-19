#include <stdio.h>

int main(){
    int num, zero_count = 0, even_count = 0, odd_count = 0 ;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num>0){
         int n = num%10;
         
         num = num/10;
         
        printf("num = %d\n", n);
        
        if (n==0)
            zero_count += 1;
        
        if (n&1){
            odd_count += 1;
        }
        else{
            even_count += 1;
        }
    }
    
    printf("Zero count: %d, Even count: %d, Odd count: %d\n", zero_count, even_count, odd_count);
    
    return 0;
}