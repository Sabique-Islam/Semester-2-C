#include <stdio.h>

struct yeah{
    unsigned int a:1;
};

int main(){
    struct yeah s1 = {1};
    printf("%ld\n", sizeof(s1));
    printf("%d\n", s1.a);
    return 0;
}