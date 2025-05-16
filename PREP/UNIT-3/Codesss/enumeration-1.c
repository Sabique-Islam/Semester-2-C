// Enumeration --> User defined type which assigns names to integral constants [names are easier to handle]

#include <stdio.h>
#include <string.h>

/*

#define vs enum

- Enums can be declared in the local scope\
- Enum names are automatically initialized by the compiler
- All unassigned names will get value as of value of previous mame+1 
- Only integral values are allowed

*/

enum Bool {False, True};

int main(){
    enum Bool Boolean;
    Boolean = True;

    printf("\nValue of Boolean --> %d\n\n", Boolean);
    return 0;
}