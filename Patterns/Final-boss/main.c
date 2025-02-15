#include <stdio.h>

void pattern(int n) {

    int size = 2*n-1; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int min_dist=i<j?i:j;

            if (min_dist>size-i-1) 
                min_dist = size - i-1;

            if (min_dist>size-j-1) 
                min_dist = size-j - 1;

            printf("%d ", n-min_dist);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the dimension: \n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
