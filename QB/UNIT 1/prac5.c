#include <stdio.h>

int main(){
    int num, one_count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num;
    
    while (temp>0){
        int n = temp%2;
        temp = temp/2;
        
        if (n==1){
            one_count += 1;
        }
    }
    printf("Number of bits set to 1 in %d = %d", num, one_count);    
    return 0;
}