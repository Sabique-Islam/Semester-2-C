#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    
    int helper, middle;
    
    helper = num/10;
    middle = helper%10;
    
    if(middle&1){
        printf("Middle digit is Odd.\n");
    }else{
        printf("Middle digit is Even.\n");
    }
    return 0;
}