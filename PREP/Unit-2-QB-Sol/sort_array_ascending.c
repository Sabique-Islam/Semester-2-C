#include<stdio.h>

void sort_array(int a[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[]={23,33,56,12};
    int size = sizeof(a)/sizeof(a[0]);
    
    sort_array(a, size);

    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    return(0);
}