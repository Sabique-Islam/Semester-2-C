# Understanding C String Operations

## 1. String Storage and Null Termination
- In C, strings are stored as character arrays and **must be null-terminated (`\0`)**.
- Any extra space in a character array **beyond `\0` is ignored** in standard string operations but still exists in memory.

## 2. Copying Strings (`strcpy`)
- The `strcpy(destination, source)` function copies `source` into `destination`, **including the null terminator**.
- Example:
  ```c
  char str1[] = "University";
  char str2[20];
  strcpy(str2, str1);
  ```
  After this, `str2` contains:
  ```
  {'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y', '\0', ?, ?, ?, ?, ?, ?, ?, ?, ?}
  ```
  (The `?` represents uninitialized/garbage values.)

## 3. String Concatenation (`strcat`)
- The `strcat(destination, source)` function **appends** `source` to `destination`.
- It starts appending from the `\0` position of `destination`.
- Example:
  ```c
  char str3[20] = "PES";
  strcat(str3, str2);
  ```
  If `str2` contains "University", then `str3` becomes:
  ```
  "PESUniversity\0"
  ```

## 4. String Comparison (`strcmp`)
- `strcmp(str1, str2)` compares two strings **character by character**.
- It returns:
  - `0` if both strings are equal.
  - A **positive value** if `str1` is lexicographically greater than `str2`.
  - A **negative value** if `str1` is lexicographically smaller than `str2`.
- Example:
  ```c
  int i = strcmp(str3, "PESUniversity");
  printf("%d\n", i);
  ```
  If `str3` contains "PESUniversity", `i` will be `0` (strings are equal).

## 5. Key Takeaways
- **Null terminators (`\0`) mark the end of strings**; anything beyond is ignored by standard functions.
- **Extra allocated space in an array remains but is not used unless explicitly modified.**
- **Garbage values may exist beyond `\0` in uninitialized arrays.**
- **String operations (`strcpy`, `strcat`, `strcmp`) rely on null termination and do not consider memory beyond it.**