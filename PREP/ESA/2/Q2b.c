#include <stdio.h>
#include <stdlib.h>

int arg_sum(int argc, char *argv[]){
    int sum = 0;
    for(int i=0; i<argc; i++){
        sum += atoi(argv[i]);
    }
    return sum;
}

int main(int argc, char *argv[]){
    int result = arg_sum(argc, argv);
    printf("Result -> %d\n",result);
    return 0;
}