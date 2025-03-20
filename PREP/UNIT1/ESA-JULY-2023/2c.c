#include <stdio.h>

int fib(int num){
    if (num==1){
        return 1;
    }
    else if(num==2){
        return 2;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}

int main() {
    printf("%d", fib(5));
    return 0;
}