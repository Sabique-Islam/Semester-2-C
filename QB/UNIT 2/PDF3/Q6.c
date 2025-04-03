/*

Write a function day_of_year(month, day ,year) 
that returns the day of the year (an integer between 1 and 366) specified by three arguments.

*/

#include <stdio.h>

int day_of_year(int month, int day, int year) {
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Leap year check (Feb --> 29 days)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        months[1] = 29;
    }

    int day_of_year = day;
    for (int i = 0; i < month - 1; i++) {
        day_of_year += months[i];
    }

    return day_of_year;
}

int main() {
    printf("Day of the year: %d\n", day_of_year(3, 15, 2024));
    return 0;
}
