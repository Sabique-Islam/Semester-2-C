## 1. Required Header File for printf() and scanf()
The header file required to use `printf()` and `scanf()` functions in C is:
```c
#include <stdio.h>
```

## 2. Default Output Stream of printf()
The default output stream used by the `printf()` function is **stdout** (standard output).

## 3. Difference Between Ordinary Characters and Conversion Specifications in printf()
- **Ordinary Characters**: Printed as they appear in the format string.
- **Conversion Specifications**: Start with `%` and are replaced by corresponding values.

**Example:**
```c
printf("Age: %d", 25);
```
Here, `%d` is replaced with `25`, while `Age: ` is printed as it is.

## 4. Necessity of the Address Operator (&) in scanf()
The `&` operator is necessary because `scanf()` needs the memory address of a variable to store the input value.
```c
int age;
scanf("%d", &age); // `&age` provides the memory address.
```

## 5. Escape Sequences and Examples
Escape sequences are special character representations starting with `\`.
Examples:
- `\n` - Newline
- `\t` - Tab space
- `\\` - Backslash

Example Usage:
```c
printf("Hello\nWorld\tTabbed\\Backslash");
```

## 6. sizeof Operator and Its Relevance
The `sizeof` operator returns the number of bytes occupied by a data type or variable.
Example:
```c
printf("Size of int: %lu", sizeof(int));
```
Relevance:
- Helps optimize memory usage.
- Useful in dynamic memory allocation.

## 7. Return Values of scanf()
- **Positive Integer**: Number of successfully read items.
- **0**: No valid input was read.
- **EOF (-1)**: Input failure (e.g., end of file).

Example:
```c
int x;
if (scanf("%d", &x) == 1) {
    printf("Valid input received");
}
```

## 8. Purpose of Format Specifiers in printf() and scanf()
Format specifiers determine how data is read or displayed.

| Specifier | Type | Example |
|-----------|------|---------|
| `%d` | Integer | `scanf("%d", &num);` |
| `%f` | Float | `scanf("%f", &pi);` |
| `%c` | Character | `scanf(" %c", &ch);` |
| `%s` | String | `scanf("%s", name);` |

## 9. Components of printf() Format String
1. **Flags**: Modify output (`-` for left-align, `+` for sign display).
2. **Field Width**: Specifies minimum width.
3. **Precision**: Controls decimal places.
4. **Conversion Character**: Defines the type (`%d`, `%f`, etc.).

Example:
```c
printf("%-10s %+08.2f", "Price:", 12.5);
```
Explanation:
- `-10s` - Left-aligned string of width 10.
- `+08.2f` - Floating point with sign, width 8, 2 decimal places.

## 10. C Program Snippet
```c
#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s! You are %d years old.\n", name, age);
    return 0;
}
```