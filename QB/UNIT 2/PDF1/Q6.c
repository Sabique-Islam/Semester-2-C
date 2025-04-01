/*

Write a C program to read N integers into an array A and to find: 
(i) Sum of odd numbers.
(ii) Sum of even numbers.
(iii) Average of all numbers. 
Output the results computed with appropriate headings.

*/

#include <stdio.h>

int odd_sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if((arr[i]&1)==1){
            sum += arr[i];
        }
    }
    return sum;
}

int even_sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if((arr[i]&1)==0){
            sum += arr[i];
        }
    }
    return sum;
}

int avg(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main(void) {
    int arr[5] = {5,7,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Sum of odd numbers --> %d\n", odd_sum(arr, n));
    printf("Sum of even numbers --> %d\n", even_sum(arr, n));
    printf("Average of all numbers --> %d\n", avg(arr, n));
}