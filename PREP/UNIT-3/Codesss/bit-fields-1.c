/*

Conditions -->
    - Structure / Union Member
    - Unsigned Integer

Syntax -->
    struct name 
    {
        unsigned int variable_1: width(bits);
        unsigned int variable_2: width(bits);
        unsigned int variable_3: width(bits);
        ...
    };

    eg:

    struct student
    {
        unsigned int roll_no: 8;
        unsigned int marks: 8;
        unsigned int age: 8;
    };

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    struct time
    {
        unsigned int hour: 5; // unsigned int --> 0 to 2^32 - 1 : 4 bytes
        unsigned int minute: 6;
        unsigned int second: 6;  
    };

    struct time t = {12, 34, 24};
    printf("Time: %d:%d:%d\n", t.hour, t.minute, t.second);
    return 0;
}
