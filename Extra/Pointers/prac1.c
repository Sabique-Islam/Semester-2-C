#include <stdio.h>

int main() {
    int a;       // Declare an integer variable 'a'.
    int *p;      // Declare a pointer 'p' that will store the address of an integer.
    
    p = &a;      // Assign the address of 'a' to 'p'. Now 'p' points to 'a'.
    a = 5;       // Assign the value 5 to the variable 'a'.
    
    // Printing the pointer value (address of a)
    printf("%p\n", (void *)p); // Print the address that p points to (address of a).
    // Cast 'p' to (void *) because '%p' expects a 'void *' type for printing memory addresses. 
    // This ensures proper formatting of the pointer in a standardized way.

    // Printing the address of p itself
    printf("%p\n", (void *)&p); // Print the address of the pointer variable p (where p is stored in memory).

    // Printing the address of a
    printf("%p\n", (void *)&a); // Print the address of the variable a.

    // Dereferencing p to get the value stored at the address (which is 5)
    printf("%d\n", *p); // Dereferencing p gives the value at the address it points to (value of a).
    // '*' is used to dereference the pointer, i.e., accessing the value stored at the memory address 'p' points to.

    return 0; // Return 0 to indicate successful execution of the program.
}