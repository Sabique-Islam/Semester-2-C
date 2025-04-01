/*

Write a declaration of an array named weekend containing seven Bool values.
Include an initializer that makes the first and last values true; all other values should be false.

*/


#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool weekend[] = {true, false, false, false, false, false, true};
    
    for(int i=0; i<7; i++){
        printf("%d\n", weekend[i]);
    }
}