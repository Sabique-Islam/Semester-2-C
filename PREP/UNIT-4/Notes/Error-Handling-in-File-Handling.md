# Error Handling in File Handling

## Common Programming Errors that occur during File I/O

| Error Type | Example | Prevention |
|------------|---------|------------|
| Open with invalid filename | `FILE *fp = fopen("file?.txt", NULL);` | Validate filename format before opening |
| Operation on a file that has not been opened | `fprintf(fp, "data");` without opening | Always check if file pointer is valid |
| Operation not permitted by 'fopen' | Reading from write-only file | Use correct mode in `fopen()` |
| Write to a write-protected file | Writing to read-only file | Check file permissions before operations |
| Read beyond end-of-file | Reading after file end | Use `feof()` to check for end of file |

## Error Handling

- Not supported by C directly and is accomplished by using errno.h
- When a function is called, a global variable named as errno is automatically assigned a value used to identify the type of error that has been encountered

| errno value | Type of Error |
|-------------|---------------|
| 1 | Operation not permitted |
| 2 | No such file or directory |
| 5 | I/O error |
| 7 | Argument list too long |
| 9 | Bad file number |
| 11 | Try again |
| 12 | Out of memory |
| 13 | Permission denied |

## Examples using perror() and strerror()

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp;
    
    // Attempt to open non-existent file
    fp = fopen("nonexistent.txt", "r");
    if (fp == NULL) {
        printf("Error opening file: %s\n", strerror(errno));
        perror("File open failed");
        return 1;
    }
    
    fclose(fp);
    return 0;
}
```

## Error Handling continued

- Two-status library functions are used to prevent performing any operation beyond EOF

- feof(): Used to test for an end of file condition
  - Syntax: `feof(FILE *file_pointer);`
  - Return Value: Non-zero if EOF, Else zero

- ferror(): Used to check for the error in the stream
  - Syntax: `int ferror (FILE *file_pointer);`
  - Return Value: Non-zero if error occurs, Else zero

- The error indication will last until the file is closed(fclose()) or cleared by the clearerr() function.

## Best Practices

- Given a file pointer check whether it is NULL before proceeding with further operations.

- Use errno.h and global variable errno to know the type of error that occurred. Usage of strerror() and perror() helps in providing textual representation of the current errno value.

- Good to check whether EOF is reached or not before performing any operation on the file.

## Demo of Error Handling

### Complete Example of Error Handling in File I/O

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[100];
    
    // Try to open a file that doesn't exist
    fp = fopen("nonexistent.txt", "r");
    
    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error code: %d\n", errno);
        printf("Error message: %s\n", strerror(errno));
        perror("Custom error message");
        return 1;
    }
    
    // Read from file with error checking
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
        
        // Check for errors during read
        if (ferror(fp)) {
            printf("Error reading file: %s\n", strerror(errno));
            clearerr(fp); // Clear the error
            break;
        }
    }
    
    // Check if we reached EOF normally
    if (feof(fp)) {
        printf("End of file reached successfully\n");
    }
    
    fclose(fp);
    return 0;
}
```

### Example: Handling Multiple Files with Error Checking

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *source, *destination;
    char ch;
    
    source = fopen("source.txt", "r");
    if (source == NULL) {
        perror("Error opening source file");
        return 1;
    }
    
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        perror("Error opening destination file");
        fclose(source); // Close first file before returning
        return 1;
    }
    
    // Copy contents character by character with error checking
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror("Error writing to destination file");
            break;
        }
        
        // Check for errors during read/write
        if (ferror(source) || ferror(destination)) {
            printf("I/O error during file operation\n");
            break;
        }
    }
    
    // Close files and check for errors
    if (fclose(source) == EOF) {
        perror("Error closing source file");
    }
    
    if (fclose(destination) == EOF) {
        perror("Error closing destination file");
    }
    
    return 0;
}
```
