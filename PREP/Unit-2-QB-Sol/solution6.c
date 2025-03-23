/*
Write functions that return the following values. (Assume that a and n are
parameters, where a is an array of int values and n is the length of the array) :
a.The largest element in a 
b. The average of all elements in a 
c. The number of positive elements in a
*/

#include <stdio.h>

int largest(int* a, int n){ // *a = a[]
    int large = a[0];
    for(int i=0; i<n; i++){
        if(a[i] > large){
            large = a[i];
        }
    }
    return large;
}

float avg(int* a, int n){
    int sum = 0;
    for(int j=0; j<n; j++){
        sum += a[j];
    }
    float average = (float)sum/n;
    return average;
}

int positive(int a[], int n){
    int pos = 0;
    for(int k=0; k<n; k++){
        if(a[k]>0){
            pos += 1;
        }
    }
    return pos;
}

int main(){
    int a[] = {1,2, 3,-4, 100, -8,-9, 100, 200, 695};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Largest: %d, Average: %.2f, Positive Count: %d\n", largest(a,n), avg(a, n), positive(a, n));
}