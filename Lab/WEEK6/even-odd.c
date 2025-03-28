#include <stdio.h>
#include <stdlib.h>

int evenodd(int arr[], int size, int *evenCount, int *oddCount){
    *evenCount=*oddCount=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main(){
    int n, even,odd;
    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ",n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    evenodd(arr, n, &even, &odd);
    printf("Even count: %d\nOdd count: %d\n", even, odd);
    
    return 0;
}