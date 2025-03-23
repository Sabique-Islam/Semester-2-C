/*
Write the following function: float compute_GPA(char grades[], int n); the
grades array will contain letter grades (A, B, C, D, or F, either uppercase or lowercase); 
n is the length of the array. The function should return the averageof the grades 
( assume that A = 4, B = 3, C = 3, D = 1, and F= 0)
*/

#include <stdio.h>
#include <ctype.h>

float GPA(char grades[], int n);

int main(){
    char grades[] = {'A', 'B', 'c', 'D', 'f'};
    int n = sizeof(grades) / sizeof(grades[0]);
    printf("%.2f", GPA(grades, n));
}

float GPA(char grades[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
        grades[i] = tolower(grades[i]);
        
        if (grades[i] == 'a'){
            sum += 4;
        }else if(grades[i] == 'b'){
            sum += 3;
        }else if(grades[i] == 'c'){
            sum += 3;
        }else if(grades[i] == 'd'){
            sum += 1;
        }else if(grades[i] == 'f'){
            sum += 0;
        }
    }
    return (float)sum/n;
}