// Compute the Average of an Array

#include <stdio.h>

double avg_array(double myarray[], int length_array){
    double sum = 0;
    double avg = 0;
   
    for(int i=0 ; i<length_array ; i++){
        sum += myarray[i];  
   }
   
   avg = sum/length_array;
   
   return avg;
}

int main(void) {
   
    double arr[] = {1.1,2.4,3.7,4.87,5.4,6.0,7.7,8.9,9.8,10.2};
    double result = avg_array(arr, 10);
   
    printf("Average of the array: %.2lf\n",result);

    return 0;
}