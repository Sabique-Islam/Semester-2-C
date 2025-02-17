#include <stdio.h>

int main(void){

    int num,n;
    scanf("%d",&num);

    n = num%10 ;
    printf("%d",n);
    n = num/10 ;
    printf("%d",n);

    return 0;
}