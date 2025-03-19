#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the lengths for each side: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if((a+b<=c) || (b+c<=a) ||(a+c<=b)){
        printf("Invalid triangle...\n");
    }else{
        if(a==b && b==c){
            printf("Equilateral Triangle...\n");
        }
        else if ((a==b)||(b==c)||(a==c)){
            printf("Isosceles Triangle...\n");
        }
        else{
            printf("Scalene Triangle...\n");
        }
    }
    
    return 0;
}