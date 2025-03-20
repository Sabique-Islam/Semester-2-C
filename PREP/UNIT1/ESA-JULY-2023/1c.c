#include <stdio.h>

int whileloop(int num){
    int sum = 0, check = 1;
    while(check <= num){
        sum += check;
        check += 1;
    }
    return sum;
}

int forloop(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum += i;
    }
    return sum;
}

int doWhileLoop(int num){
    int sum = 0, i = 1;
    do{
        sum += i;
        i += 1;
    }while (i<=num);
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Sum of first '%d' natural numbers using while loop --> %d\n", n, whileloop(n));
    printf("Sum of first '%d' natural numbers using for loop --> %d\n", n, forloop(n));
    printf("Sum of first '%d' natural numbers using do while loop --> %d\n", n, doWhileLoop(n));
    return 0;
}


// For exam, write without functions