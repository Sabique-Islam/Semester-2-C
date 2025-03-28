#include <stdio.h>
#include <stdlib.h>

int find(int arr[], int size){
    int maxdiff= abs(arr[1]-arr[0]);

    if(size<2){
        printf("Invalid");
        return 0;
    }else{
        for(int i=0; i<size; i++){
            int diff = abs(arr[i+1]-arr[i]);
            if (diff>maxdiff)
                maxdiff = diff;
        }
    }
    printf("Maximum difference: %d\n", maxdiff);
    return 0;
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<size; i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    find(arr, size);
}