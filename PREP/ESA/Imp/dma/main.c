#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 3;
    int i;

    // a. malloc(): Allocate memory for n integers (uninitialized)
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation with malloc failed!\n");
        return 1;
    }
    printf("Memory allocated with malloc:\n");
    for (i = 0; i < n; i++) {
        *(arr+i) = i + 1; // Assign values
        printf("%d ", arr[i]);
    }
    printf("\n");

    // b. calloc(): Allocate memory for n integers (initialized to 0)
    int *arr2 = (int*) calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation with calloc failed!\n");
        free(arr2);
        return 1;
    }
    printf("Memory allocated with calloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]); // Will print zeros
    }
    printf("\n");

    // c. realloc(): Resize arr to hold 2*n integers
    int new_size = 2 * n;
    arr = (int*) realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation with realloc failed!\n");
        free(arr2);
        return 1;
    }
    // Initialize new elements
    for (i = n; i < new_size; i++) {
        arr[i] = i + 1;
    }
    printf("Memory after realloc (size %d):\n", new_size);
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // d. free(): Free the dynamically allocated memory
    free(arr);
    free(arr2);

    return 0;
}