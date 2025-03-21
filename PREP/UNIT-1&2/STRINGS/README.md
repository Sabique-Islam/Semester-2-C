# Strings in C

C doesn’t support strings as a built-in data type. Strings are **arrays of characters** terminated by a null character (`\0`).

## Examples of String Declaration

- Shorthand: `char name[] = "Hamilton";`  
  Compiler adds `\0` automatically.  
- Explicit: `char name[] = {'H', 'a', 'm', 'i', 'l', 't', 'o', 'n', '\0'};`  
  Same string, manually defined with null terminator.

---

# Common String Functions

From `<string.h>` library (use `#include <string.h>`). 

## 1. `strcat()` - Combines Two Strings

- **Purpose:** Appends source string to destination.  
- **Syntax:** `strcat(destination, source);`  
- **Note:** Destination must have enough space.  

### Example
Setup: `char str1[20] = "Hello, ";` and `char str2[] = "World!";`  
Run: `strcat(str1, str2);`  
Result: `str1` becomes `"Hello, World!"`.  
Output: `printf("Combined string: %s\n", str1);` 

prints `Combined string: Hello, World!`.

---

## 2. `strlen()` - Length of a String

- **Purpose:** Counts characters, excluding `\0`.  
- **Syntax:** `strlen(string);`  

### Example
Setup: `char str[] = "Hamilton";`  
Run: `int length = strlen(str);`  
Result: `length` is `8` (H-a-m-i-l-t-o-n).  
Output: `printf("Length of '%s': %d\n", str, length);` prints `Length of 'Hamilton': 8`.

---

## 3. Reverses a String

- **Purpose:** Reverses character order.  

### Custom Reverse
Function:  
`void reverse(char str[]) {`  
`    int i, j;`  
`    char temp;`  
`    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {`  
`        temp = str[i];`  
`        str[i] = str[j];`  
`        str[j] = temp;`  
`    }`  
`}`  
Setup: `char str[] = "Hamilton";`  
Run: `reverse(str);`  
Result: `str` becomes `"notlimaH"`.  
Output: `printf("Reversed string: %s\n", str);` prints `Reversed string: notlimaH`.

---

## 4. `strcpy()` - Copies One String into Another

- **Purpose:** Copies source string (with `\0`) to destination.  
- **Syntax:** `strcpy(destination, source);`  
- **Note:** Destination needs enough space.  

### Example
Setup: `char source[] = "Hamilton";` and `char destination[20];`  
Run: `strcpy(destination, source);`  
Result: `destination` becomes `"Hamilton"`.  
Output: `printf("Copied string: %s\n", destination);` prints `Copied string: Hamilton`.

---

## 5. `strcmp()` - Compares Two Strings

- **Purpose:** Compares strings lexicographically.  
- **Syntax:** `strcmp(string1, string2);`  
- **Returns:** `0` (equal), positive (`string1 > string2`), negative (`string1 < string2`).  

### Example
Setup: `char str1[] = "Apple";` and `char str2[] = "Banana";`  
Run: `int result = strcmp(str1, str2);`  
Result: `result` is negative (A < B in ASCII).  
Output:  
`if (result < 0) printf("'%s' comes before '%s'\n", str1, str2);` prints `'Apple' comes before 'Banana'`.

---