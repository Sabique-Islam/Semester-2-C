/*

Create a structure called Seminar Hall, with fields as --> 
Room temperature, Student Density, Number of Chairs, Number of Wall Barriers

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct SeminarHall
{
    double RoomTemperature;
    int StudentDensity;
    int NumberOfChairs;
    int NumberOfWallBarriers;
};

struct SeminarHall SH1 = {25.0, 131, 150, 1000};

int main(){

    printf("\n\n");
    printf("Room Temperature --> %lf\n", SH1.RoomTemperature);
    printf("Student Density --> %d\n", SH1.StudentDensity);
    printf("Number of Chairs --> %d\n", SH1.NumberOfChairs);
    printf("Number of Wall Barriers --> %d\n", SH1.NumberOfWallBarriers);
    printf("\n\n");
    return 0;
}