# Header Files – Creation and Usage

## Introduction
- Play a crucial role in organizing code and promoting reusability.
- Typically contains function declarations, macro definitions, structure declarations, and constants that can be shared across multiple source files.
- This allows developers to separate the interface from the implementation, leading to cleaner, more modular programs.

## Why use Header files?

| Benefit | Description |
|---------|-------------|
| **Code reusability** | Write once, use in multiple programs. |
| **Improved readability** | Keeps the main file clean and focused. |
| **Ease of maintenance** | Updates made in the header reflect across all included files. |

## Creating a Header File

| Step | Description | Example |
|------|-------------|---------|
| 1. Create file | Create a file with the .h extension | `mathutils.h` |
| 2. Add content | Write function declarations, macros, or global variables | See code below |
| 3. Add guards | Use include guards to prevent multiple inclusions | `#ifndef`, `#define`, `#endif` |

```c
// mathutils.h
#ifndef MATHUTILS_H
#define MATHUTILS_H

int add(int a, int b);
float squareRoot(float x);

#endif
```

## Using a Header File

```c
// main.c
#include <stdio.h>
#include "mathutils.h"

int main() {
    printf("Sum: %d\n", add(5, 3));
    printf("Square root of %d is %f", 25, squareRoot(25));
    return 0;
}
```

## Implementation File

```c
// mathutils.c
#include "mathutils.h"

int add(int a, int b) {
    return a + b;
}

float squareRoot(float x) {
    return sqrt(x);
}
```

## Execution Steps

| Step | Command | Result |
|------|---------|--------|
| **Compiling separately** | `gcc -c main.c` | Creates main.o |
| | `gcc -c mathutils.c` | Creates mathutils.o |
| **Linking** | `gcc main.o mathutils.o -o myprogram` | Creates executable |
| **Execution** | `./myprogram` or `myprogram.exe` | Runs the program |
