// Find the Minimum Number in an Array

#include <stdio.h>

int find_min(int myarray[], int array_length){
   int min;
   
   min = myarray[0];
   
   for(int i=1; i < array_length; i++){
        if(myarray[i]<min) 
            min = myarray[i];
    }
    return min;
}

int main(void) {
   int myarray1[] = {5,9,10,11,4,3,5,4,2,7};
   int myarray2[] = {0,-7,4,5,2,6};

   int min1 = find_min(myarray1, 10);
   int min2 = find_min(myarray2, 6);
   
   printf("Minimum number for myarray1: %d\n", min1);
   printf("Minimum number for myarray2: %d\n", min2);

   return 0;
}