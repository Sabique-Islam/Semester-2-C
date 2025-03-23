#include <stdio.h>

int main(){
   int A[5] = {1,2,3,4,5}; // sizeof(A) = element in a (5) * size of datatype (4 bytes) = 20 bytes
   for(int i = 0; i<5; i++){
       printf("Address of index = %d --> %d\n",i, &A[i]);
       printf("Address of index = %d --> %d\n",i, A+i);

       printf("Value of index = %d --> %d\n",i, A[i]);
       printf("Value of index = %d --> %d\n",i, *(A+i));
       
       printf("\n");
   }
}