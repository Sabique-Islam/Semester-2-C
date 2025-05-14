#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Student{
    char Name[20];
    char SRN[13];
} PESUECC;

int main(){

    PESUECC S1 = {"Ratchet", "PES1UG22CS001"};

    FILE *FilePointer;
    FilePointer = fopen("student.bin", "wb"); // write binary

    fwrite(&S1, sizeof(PESUECC), 1, FilePointer); // fwrite(ptr, size, count, stream);

    FilePointer = fopen("student.bin", "rb"); // read binary
    fread(&S1, sizeof(PESUECC), 1, FilePointer); // fread(ptr, size, count, stream);

    printf("Name --> %s\n", S1.Name);
    printf("SRN --> %s\n", S1.SRN);

    fclose(FilePointer);
    return 0;
}
