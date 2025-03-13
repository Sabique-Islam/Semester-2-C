- **Address of Constants**: The address of constants cannot be found directly since they are not stored in modifiable memory locations like variables.
- **malloc()**: Dynamically allocates memory at runtime and returns a pointer to the allocated space.

## What is a Pointer?

> A pointer is a variable that holds the memory address of another variable. It is a variable that stores the location of data in memory.

## What is an Integer Pointer?

> An integer pointer is a pointer that holds the memory address of an integer variable.

## What is the Size of a Pointer?

> The size of a pointer is typically 8 bytes on a 64-bit system (may vary depending on architecture; e.g., 4 bytes on 32-bit systems).

## What is a Wild Pointer?

> A wild pointer is a pointer that is not initialized. It points to a random, unpredictable memory location.

## Difference Between a Wild Pointer and a Null Pointer

> - **Wild Pointer**: A pointer that is not initialized. It points to a random memory location, which can lead to undefined behavior if dereferenced.
> - **Null Pointer**: A pointer that is explicitly initialized to `NULL`. It points to no valid memory location, ensuring safe handling when checked.

## Example: Integer Pointer to a Constant Integer

> Create an integer pointer pointing to a constant integer:
```c
const int *ptr = &a;
```