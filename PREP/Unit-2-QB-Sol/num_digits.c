#include <stdio.h>

int num_digits(int n){
    int num = 0;
    
    while(n>0){
        num += 1;
        n = n/10;
    }
    return num;
}

int main() {
    printf("%d",num_digits(5556570));
    return 0;
}