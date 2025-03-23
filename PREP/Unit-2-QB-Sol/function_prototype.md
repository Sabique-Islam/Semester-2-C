## Function Prototypes in C

### Definition
A **function prototype** in C is a declaration of a function that specifies its return type and parameter types before its actual definition. It acts as a forward declaration, allowing the compiler to ensure correct function usage.

### Purpose
- Ensures type checking of function arguments.
- Allows function definitions to be placed after `main()`.
- Enables modular programming by separating function declarations and definitions.

### Syntax
```c
return_type function_name(parameter_type1, parameter_type2, ...);
```

### Example
```c
#include <stdio.h>

// Function prototype
int add(int c, int d); // or int add(int, int);

int main() {
    int result = add(5, 10);
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Key Features
- Declared at the beginning or in a header file.
- Helps prevent implicit function declaration warnings/errors.
- Supports modular code organization.

### Question 1
<details>
  <summary>Names of parameters in a function prototype have to match the names given in the function definition. TRUE/FALSE</summary>
  
  **FALSE**
</details>
