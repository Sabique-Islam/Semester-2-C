/*

Print all possible combinations of r elements in a given array of size n. 
Given an array of size n, generate and print all possible combinations of r elements in array.
For example, if input array is {1, 2, 3, 4} and r is 2, 
then output should be {1, 2}, {1,3}, {1, 4}, {2, 3}, {2, 4} and {3, 4}.

*/

#include <stdio.h>

int main(void) {
    int size, r;
    
    printf("Enter size of array --> ");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0; i<size; i++){
        printf("Enter element @ index: %d --> ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter r --> ");
    scanf("%d", &r);

    for(int j=0; j<size; j++){
        printf("%d ", arr[j]);
    }

    if(r>size){
        printf("Hell naww\n");
        return 1;
    }

    printf("Combinations of %d elements:\n", r);

    // Generate combinations
    for (int i = 0; i <= size - r; i++) {
        for (int j = i + 1; j <= size - r + 1; j++) {
            if(r == 2){
                printf("{%d, %d} ", arr[i], arr[j]);
            } else if (r == 3){
                for(int k = j+1; k < size; k++){
                    printf("{%d, %d, %d} ", arr[i], arr[j], arr[k]);
                }
            }
        }
        printf("\n");
    }
}