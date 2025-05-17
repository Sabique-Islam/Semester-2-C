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
        printf("Error code: %d\n", errno);
        return 1;
    }
    
    fclose(fp);
    return 0;
}