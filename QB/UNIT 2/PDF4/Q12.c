/*

Write the following function:
float compute_GPA(char grades[], int n);
the grades array will contain letter grades (A, B, C, D, or F, either uppercase or lowercase);
n is the length of the array. The function should return the average of the grades 
(assume that A = 4, B = 3, C = 3, D = 1, and F= 0)

*/


#include <stdio.h>

float compute_GPA(char grades[], int n){
    float sum = 0;
    float value = 0;
    for (int i=0; i<n; i++){
        switch(grades[i]){
            case 'A':
                value = 4;
                break;
            case 'B':
                value = 3;
                break;
            case 'C':
                value = 3;
                break;
            case 'D':
                value = 1;
                break;
            case 'F':
                value = 0;
                break;
        }
        sum += value;
    }
    return sum/n;
}

int main() {
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    int n = 5;
    
    printf("%.2f\n", compute_GPA(grades, n));
    return 0;
}