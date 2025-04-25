// Sum the Values in an Array

#include <stdio.h>

int sum_array(int myarray[], int length_array){
    int sum=0;
   
    for(int i=0 ; i<length_array ; i++){
        sum += myarray[i];
   }
   return sum;
}

int main(void) {
   
    int myarray[] = {1,2,3,4,5,6,7,8,9,10};
    
    int result = sum_array(myarray, 10);
   
   printf("Sum of the element in the array: %d",result);

    return 0;
}