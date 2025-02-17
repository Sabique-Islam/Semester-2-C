#include <stdio.h>

int main(){
    int n, remainder, remain;

    scanf("%d",&n);

    remainder = n%10;

    remain = n/10;

    printf("%d %d/n",remainder, remain);
}