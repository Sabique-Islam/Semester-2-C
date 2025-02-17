#include <stdio.h>

int main(){
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);
    
    a = a^b;
    b = a^b;
    a = a^b;
    
    printf("a: %d\n",a);
    printf("b: %d\n",b);
}