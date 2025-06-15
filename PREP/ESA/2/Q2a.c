#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Aaaaa";
    printf("Length = %lu\n", strlen(name));
    return 0;
}



#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "C Programming";
    char dest[50];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}