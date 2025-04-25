// Find the Maximum Number in an Array

#include <stdio.h>

int find_max(int myarray[], int array_length){
   int max;
   
   max = myarray[0];
   
   for(int i=1; i < array_length; i++){
        if(myarray[i]>max) 
            max = myarray[i];
    }
    return max;
}

int main(void) {
   int myarray1[] = {5,9,10,11,4,3,5,4,2,7};
   int myarray2[] = {0,-7,4,5,2,6};

   int max1 = find_max(myarray1, 10);
   int max2 = find_max(myarray2, 6);
   
   printf("Maximum number for myarray1: %d\n", max1);
   printf("Maximum number for myarray2: %d\n", max2);

   return 0;
}