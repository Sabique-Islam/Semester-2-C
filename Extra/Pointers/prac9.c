#include <stdio.h>

// sizeof(A) --> returns (No. of elements * Size of datatype in bytes)

int SumOfElements(int A[], int size){
    int sum = 0;
    
    for(int i=0; i<size; i++){
        sum += A[i];
    }
    return sum;
}

// Arrays are always passed as reference parameters
int sumOfElements(int A[]){ 
    int sum = 0;
    int size = sizeof(A) / sizeof(A[0]);
    printf("Func - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    
    for(int i = 0; i<size; i++){
        sum += A[i];
    }
    return sum;
}

int main(){
   int A[] = {1,2,3,4,5};
   int size = sizeof(A) / sizeof(A[0]);
   int total = SumOfElements(A, size);
   int sum = sumOfElements(A);
   
   printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

   
   printf("Sum of all the elements in the array --> %d\n", total); // 1+2+3+4+5 = 15
   printf("Sum of all the elements in the array --> %d\n", sum);
}