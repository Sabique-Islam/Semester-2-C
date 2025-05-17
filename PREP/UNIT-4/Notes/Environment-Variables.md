# Environment Variables

## Introduction
- A set of dynamic-named values that can affect the way the running processes behave on a computer
- They are part of the environment in which the process runs
- When a program is executed, it receives information about the context in which it was invoked using two ways:
  - Command Line Arguments (CLA)
  - Environment variables
- Programs executed from the shell inherit all of the environment variables from the shell

## Standard Environment Variables

| Variable | Description | Example Value |
|----------|-------------|---------------|
| HOME | User's home directory | /home/username |
| PATH | Directories to search for executable files | /usr/local/bin:/usr/bin:/bin |
| USER | Current username | john |
| LANG | Current locale setting | en_US.UTF-8 |
| TERM | Terminal type | xterm-256color |
| PWD | Current working directory | /home/username/projects |
| SHELL | Path to current shell | /bin/bash |

### Key Characteristics
- Names are **case-sensitive** and must contain the character '='
- Values can be anything that can be represented as a string
- Must not contain an embedded null character
- The set of all environment variables with values is collectively known as the **environment**

## Environment Access Functions

| Function | Description | Return Value |
|----------|-------------|--------------|
| `char *getenv(const char *name)` | Gets value of environment variable | String value or NULL if not defined |
| `int putenv(char *string)` | Sets environment variable | 0 on success, non-zero on failure |
| `int setenv(const char *name, const char *value, int replace)` | Sets environment variable with replace option | 0 on success, -1 on failure |
| `int unsetenv(const char *name)` | Removes environment variable | 0 on success, -1 on failure |
| `int clearenv(void)` | Clears all environment variables | 0 on success, non-zero on failure |
| `extern char **environ` | Direct access to environment variables | Array of strings in format 'name=value' |

All these functions are available in `stdlib.h`

## Code Examples

### 1. Basic Environment Variable Access

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Get HOME environment variable
    char *home_dir = getenv("HOME");
    
    if (home_dir != NULL) {
        printf("Your home directory is: %s\n", home_dir);
    } else {
        printf("HOME environment variable not found\n");
    }
    
    return 0;
}
```

### 2. Setting and Modifying Environment Variables

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Set a new environment variable using putenv
    int result = putenv("MY_VARIABLE=Hello World");
    if (result == 0) {
        printf("Successfully set MY_VARIABLE\n");
    } else {
        printf("Failed to set MY_VARIABLE\n");
    }
    
    // Get and display the variable
    printf("MY_VARIABLE = %s\n", getenv("MY_VARIABLE"));
    
    // Change the variable using setenv
    // The third parameter (1) means replace if exists
    result = setenv("MY_VARIABLE", "New Value", 1);
    if (result == 0) {
        printf("Successfully updated MY_VARIABLE\n");
    } else {
        printf("Failed to update MY_VARIABLE\n");
    }
    
    // Get and display the updated variable
    printf("MY_VARIABLE = %s\n", getenv("MY_VARIABLE"));
    
    return 0;
}
```

### 3. Removing Environment Variables

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Set a variable first
    setenv("TEMP_VAR", "This will be removed", 1);
    printf("Before removal: TEMP_VAR = %s\n", getenv("TEMP_VAR"));
    
    // Remove the variable
    int result = unsetenv("TEMP_VAR");
    if (result == 0) {
        printf("Successfully removed TEMP_VAR\n");
    } else {
        printf("Failed to remove TEMP_VAR\n");
    }
    
    // Check if it's removed
    char *value = getenv("TEMP_VAR");
    if (value == NULL) {
        printf("TEMP_VAR is no longer in the environment\n");
    } else {
        printf("TEMP_VAR still exists: %s\n", value);
    }
    
    return 0;
}
```

### 4. Listing All Environment Variables

```c
#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {
    printf("All Environment Variables:\n");
    printf("==========================\n");
    
    for (char **env = environ; *env != NULL; env++) {
        printf("%s\n", *env);
    }
    
    return 0;
}
```

### 5. Using Environment Variables in a Program

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Check for a configuration environment variable
    char *config_path = getenv("APP_CONFIG_PATH");
    
    if (config_path == NULL) {
        // Set default if not found
        printf("No config path found, using default\n");
        config_path = "/etc/default/config.ini";
    }
    
    printf("Using configuration file: %s\n", config_path);
    
    // Check for debug mode
    char *debug_mode = getenv("APP_DEBUG");
    
    if (debug_mode != NULL && strcmp(debug_mode, "1") == 0) {
        printf("Debug mode is enabled\n");
        // Additional debug operations would go here
    }
    
    return 0;
}
```

## Practical Applications

1. **Configuration Management**: Use environment variables to configure application behavior without changing code
   ```c
   // Check if we should use production or development database
   char *db_env = getenv("DB_ENVIRONMENT");
   if (db_env != NULL && strcmp(db_env, "production") == 0) {
       // Connect to production database
   } else {
       // Connect to development database
   }
   ```

2. **Security**: Store sensitive information like API keys
   ```c
   char *api_key = getenv("API_KEY");
   if (api_key == NULL) {
       fprintf(stderr, "Error: API_KEY environment variable not set\n");
       exit(1);
   }
   ```

3. **Cross-platform compatibility**: Handle differences between operating systems
   ```c
   #ifdef _WIN32
       char *home_dir = getenv("USERPROFILE");
   #else
       char *home_dir = getenv("HOME");
   #endif
   ```