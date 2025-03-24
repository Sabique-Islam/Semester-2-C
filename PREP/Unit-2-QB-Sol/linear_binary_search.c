#include<stdio.h>

void linear_search(int a[], int size, int element){
    for(int i = 0; i < size; i++){
        if (a[i] == element){
            printf("Element Found...\n");
            return;
        }
    }
    printf("Element Not Found... :( \n");
}

int binary_search(int a[], int size, int element) {
    int left = 0, right = size - 1;

    for (;left <= right;) {
        int mid = (left + right) / 2;

        if (a[mid] == element)
            return mid; 

        if (a[mid] > element)
            right = mid - 1;
        else
            left = mid + 1; 
    }
    return -1;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a)/sizeof(a[0]);
    
    // int element;
    // printf("Enter the element to be searched: ");
    // scanf("%d\n", &element);
    
    //linear_search(a, size, element);
    
    printf("Index of the element --> %d\n", binary_search(a, size, 6));
    
    return(0);
}