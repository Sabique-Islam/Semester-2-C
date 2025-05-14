#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// rb, rb+ or r+b, wb, wb+ or w+b, ab, ab+ or a+b

void status(){
    printf("Current Status..\n");
    printf("Currently Working with file --> %s\n", __FILE__);
    printf("Current Date --> %s\n", __DATE__);
    printf("Current Time --> %s\n", __TIME__);
}

int main(){

    int input[5] = {1, 2, 3, 4, 5};

    status();

    FILE *FilePointer;
    FilePointer = fopen("test.bin", "wb"); // write binary

    int value = 1000;
    fwrite(&value, sizeof(int), 1, FilePointer); // fwrite(ptr, size, count, stream);

    FilePointer = fopen("test.bin", "rb"); // read binary
    fread(&value, sizeof(int), 1, FilePointer); // fread(ptr, size, count, stream);
    printf("Value read from file --> %d\n", value);

    fwrite(input, sizeof(int), 5, FilePointer); // fwrite(ptr, size, count, stream);
    fread(input, sizeof(int), 5, FilePointer); // fread(ptr, size, count, stream);
    printf("Value read from file --> ");
    for (int i = 0; i < 5; i++){
        printf("%d ", input[i]);
    }
    printf("\n");
    
    fclose(FilePointer);

    return 0;
}
