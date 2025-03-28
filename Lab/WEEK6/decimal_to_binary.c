#include <stdio.h>
void decimal_to_binary(int n){
    if(n<0){
        printf("-");
        n=-n;
    }
    int binary[32];
    int index=0;
    if(n==0){
        printf("0");
        return;
    }
    while(n>0){
        binary[index++]=n%2;
        n=n/2;
    }
    for(int i=index-1; i>=0; i--){
        printf("%d",binary[i]);
    }
    printf("\n");
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Binary value: ");
    decimal_to_binary(num);
    return 0;
}