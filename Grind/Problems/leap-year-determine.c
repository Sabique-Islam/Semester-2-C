// Determine if a year is a leap year

#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){
    
    if (year%4 != 0) 
        return false;
    else if (year%100 != 0) 
        return true;
    else if (year%400 != 0) 
        return false;
    else   
        return true;
}

int main(void){
    
    if(leap_year(2025))
        printf("Leap Year");
    else
        printf("Not Leap Year");
    
    return 0;
}