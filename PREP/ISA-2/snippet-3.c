#include <stdio.h>

typedef struct Exams{
    int marks;
    int max_marks;
} e;

int main(){
    e s1={2};
    printf("%d %d\n", s1.marks, s1.max_marks);
    return 0;
}