#include <stdio.h>

typedef struct {
    int marks;
    struct {
        char greeting[20];
    }hello;
}check;

int main(){
    check s1 = {2, {"hello"}};
    printf("%d %s\n", s1.marks, s1.hello.greeting);
    return 0;
}