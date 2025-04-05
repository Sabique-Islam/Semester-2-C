/*

Write a function check(x, y, n) that returns 1 if both x and y fall between 0 and n-1 (both
inclusive). The function should return 0 otherwise. Assume that x ,y and n are all of type int.

*/

#include <stdio.h>

int check(int x, int y, int n){
    if ((0<x && x<n-1) && (0<y && y<n-1)){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    printf("%d", check(1,1,3));
    return 0;
}
