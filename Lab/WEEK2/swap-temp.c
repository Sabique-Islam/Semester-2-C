#include <stdio.h>

int main(){
    int a,b;
    int temp;

    scanf("%d", &a);
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a: %d\n",a);
    printf("b: %d",b);
}