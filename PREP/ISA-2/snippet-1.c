#include <stdio.h>
#include <stdlib.h> // for atoi [ASCII to Integer]

int main(int argc, char *argv[]){
    int sum = 0;
    
    for(int i=1; i<argc; i++){
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
}