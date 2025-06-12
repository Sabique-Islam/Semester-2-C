#include <stdio.h>

int main() {
    #ifdef __MINGW32__
        printf("Running on Windows using MinGW\n");
    #elif __unix__
        printf("Running on Unix/Linux\n");
    #elif __APPLE__
        printf("Running on macOS\n");
    #else
        printf("Unknown platform\n");
    #endif
    return 0;
}