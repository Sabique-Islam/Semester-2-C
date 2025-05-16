// fseek()
// ftell()
// rewind()
// fgetpos()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

FILE *FilePointer1;
FILE *FilePointer2;

int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    long position;
    int value;
    
    FilePointer1 = fopen("test1.bin", "wb"); // write binary
    if(FilePointer1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fwrite(numbers, sizeof(int), 5, FilePointer1);
    fclose(FilePointer1);

    FilePointer2 = fopen("test1.bin", "rb"); // read binary
    if(FilePointer2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    position = ftell(FilePointer2);
    printf("Current position: %ld\n", position);
    
    fread(&value, sizeof(int), 1, FilePointer2);
    printf("First value: %d\n", value);
    
    position = ftell(FilePointer2);
    printf("New position after reading: %ld\n", position);
    
    fseek(FilePointer2, 0, SEEK_SET);
    printf("After SEEK_SET to 0, position: %ld\n", ftell(FilePointer2));
    
    // Seek to 3rd element (position 8 = 2 integers * 4 bytes)
    fseek(FilePointer2, 2 * sizeof(int), SEEK_SET);
    fread(&value, sizeof(int), 1, FilePointer2);
    printf("Third value: %d\n", value);
    
    // Seek 1 element forward from current position
    fseek(FilePointer2, sizeof(int), SEEK_CUR);
    fread(&value, sizeof(int), 1, FilePointer2);
    printf("Fifth value: %d\n", value);
    
    // Seek 2 elements back from end
    fseek(FilePointer2, -2 * sizeof(int), SEEK_END);
    fread(&value, sizeof(int), 1, FilePointer2);
    printf("Fourth value from SEEK_END: %d\n", value);
    
    fclose(FilePointer2);
    
    return 0;
}
