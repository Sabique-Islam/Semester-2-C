#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int a = 1025; // 00000000 00000000 00000100 [00000001], only 1 byte is taken in consideration for strings (the binary representation inside square bracket), hence "Value" in case of string is 1.
    int *p;
    p = &a;
    printf("Integer size: %d bytes\n", sizeof(int));
    printf("Address = %p, Value = %d\n", p, *p);
    
    char *p0;
    p0 = (char*)p; //typecasting
    printf("Character size: %d byte\n", sizeof(char));
    printf("Address = %p, Value = %d\n", p0, *p0);

    return 0;
}