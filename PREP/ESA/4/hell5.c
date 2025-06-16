#include <stdio.h>
#include <string.h>

int main(){
    FILE *file1;
    FILE *file2;

    file1 = fopen("read.csv", "r");
    if (file1==NULL){
        printf("No file found..\n");
        return 1;
    }
    file2 = fopen("write.csv", "w");
    if (file2==NULL){
        printf("No file found..\n");
        fclose(file1);
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), file1)) {
        fputs(line, file2);
    }
    printf("File copied successfully..\n");
    fclose(file1);
    fclose(file2);
    return 0;
}