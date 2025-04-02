#include <stdio.h>

int main(){
    int A[5] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){
           if(A[i]>A[j]){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
           }
        }

    }
}