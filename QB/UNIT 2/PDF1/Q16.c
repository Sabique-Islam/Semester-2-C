/*

Given an array, find all the elements of the array whose sum is equal to 100. 
a = {23,55,66,77,50, 40, 10} 

*/

// #include <stdio.h>

// int main(void) {
//     int size;
    
//     printf("Enter size of array --> ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     for(int i=0; i<size; i++){
//         printf("Enter element @ index: %d --> ", i);
//         scanf("%d", &arr[i]);
//     }
    
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if ((arr[i]+arr[j])==100){
//                 printf("%d + %d = 100\n", arr[i], arr[j]);
//             }
//         }
//     }
// }

// only works for pairs


#include <stdio.h>

int main(void) {
    int size;
    
    printf("Enter size of array --> ");
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0; i<size; i++){
        printf("Enter element @ index: %d --> ", i);
        scanf("%d", &arr[i]);
    }
    
    // Iterate through all possible subsets of the array
    for (int i = 0; i < (1 << size); i++) {
        int sum = 0;
        int count = 0;
        
        // Calculate the sum of the current subset
        for (int j = 0; j < size; j++) {
            if ((i >> j) & 1) {
                sum += arr[j];
                count++;
            }
        }
        
        // Check if the sum is equal to 100 and the subset is not empty
        if (sum == 100 && count > 0) {
            printf("Elements that sum to 100: ");
            for (int j = 0; j < size; j++) {
                if ((i >> j) & 1) {
                    printf("%d ", arr[j]);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}

// WTF 