#include <stdio.h>

int main(){
    int num, d1, d2, d3, d4, r1, r2, r3, sum;
    printf("\nEnter a 4 digit passcode: ");
    scanf("%d",&num);

    d1 = num/1000;
    r1 = num%1000;

    d2 = r1/100;
    r2 = r1%100;

    d3 = r2/10;
    r3 = r2%10;

    d4 = r3;

    sum = d1+d2+d3+d4;

    printf("Individual numbers: %d-%d-%d-%d \n", d1, d2, d3, d4);

    if ((sum%2==0) && (d1==d4))
        printf("Correct passcode.\n");   
    else
        printf("Wrong passcode.\n"); 
}