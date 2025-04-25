// Count the Occurrences of a Value in an Array

// Time complexity: O(n)

#include <stdio.h>

int count(int myarray[], int target, int array_length){
    int count = 0;
    
    for(int i=0; i<array_length; i++){
        if(myarray[i]==target)
            count++;
    }  
    return count;
}

int main(void) {
    
    int myarray[] = {1,1,1,4,6,3,8,9,40,1};
    int occurrence = count(myarray,1,10);
    
    printf("Count of target: %d\n",occurrence);

   return 0;
}

// Binary Search for sorted array with, time complexity : O(log n)

// #include <stdio.h>

// int first_occurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1, result = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             high = mid - 1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result;
// }

// int last_occurrence(int arr[], int n, int target) {
//     int low = 0, high = n - 1, result = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             low = mid + 1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result;
// }

// int count_sorted(int arr[], int n, int target) {
//     int first = first_occurrence(arr, n, target);
//     if (first == -1) 
//         return 0;
        
//     int last = last_occurrence(arr, n, target);
    
//     return last - first + 1;
// }

// int main(void) {
//     int myarray[] = {1, 1, 1, 3, 4, 6, 8, 9, 40};
//     int occurrence = count_sorted(myarray, 9, 1);
    
//     printf("Count: %d\n", occurrence);

//     return 0;
// }


/*
    Binary search works by repeatedly dividing the search space in half. 

    Step 1: n elements.
    Step 2: After 1st step, n/2 elements remain.
    Step 3: After 2nd step, n/4 elements remain.
    Step 4: After 3rd step, n/8 elements remain.
    ...
    Step k: After k steps, only 1 element remains.

    Therefore:

        => n / 2^k = 1 
        => k = log2(n)
*/