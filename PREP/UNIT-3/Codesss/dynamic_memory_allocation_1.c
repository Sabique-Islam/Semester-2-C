// Allocation in Heap Memory

#include <stdio.h>
#include <stdlib.h>

/*  Syntax :

--> Malloc (Memory Allocation)
    ptr = (ptr-type*) malloc(size_in_bytes)

--> Calloc (Contiguous Allocation)
    ptr = (ptr-type*) calloc(number_of_elements, size_of_each_element)

--> Realloc (Re-Allocation)
    ptr = (ptr-type*) realloc(ptr, new_size_in_bytes)

--> Free (Memory Deallocation)
    free(ptr)

*/

int main() {
    
    // Use of Malloc

    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int)); // Creates an array of 10 integers in the heap memory

    for (int i = 0; i < 10; i++){
        printf("Enter the value of element @ index : %d --> ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n------------------------------------------\n");

    for (int i = 0; i < 10; i++){
        printf("The value of element @ index : %d is --> %d\n", i, ptr[i]);
    }
    
    return 0;
}