// Reverse An Array

#include <stdio.h>

void reverse(int myarray[], int array_length){
    int temp = 0;
    
    for(int i=0; i < (array_length/2); i++){
        temp = myarray[i];
        myarray[i] = myarray[array_length - i -1];
        myarray[array_length - i -1] = temp;
    }
}

int main(void){
    int myarray[] = {4,3,6,7,9,8,6,2,1};
    
    reverse(myarray, 9);
    
    for(int i = 0; i<9; i++)
        printf("myarray[%d] = %d\n", i, myarray[i]);
        
    return 0;
}