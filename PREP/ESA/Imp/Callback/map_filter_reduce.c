#include <stdio.h>

void mymap(int *a, int *b, int n, int (*p)(int));
int myfilter(int *a, int *b, int n, int (*p)(int));
int myreduce(int *a, int n, int (*op)(int, int));
void disp(int *a, int n);

int incr(int x) {
    return x + 1;
}

int is_even(int x) {
    return x % 2 == 0;
}

int is_greater_than_22(int x) {
    return x > 22;
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int a[] = {11, 22, 33, 44, 55};
    int n = sizeof(a) / sizeof(*a);
    int b[100];

    printf("a is:\n");
    disp(a, n);

    mymap(a, b, n, incr);
    printf("\nAfter incrementing using map, b is:\n");
    disp(b, n);

    int c = myfilter(a, b, n, is_even);
    printf("\nAfter filtering only even, b is:\n");
    disp(b, c);

    c = myfilter(a, b, n, is_greater_than_22);
    printf("\nAfter filtering only numbers greater than 22, b is:\n");
    disp(b, c);

    int result = myreduce(a, n, add);
    printf("\nSum of all the elements using reduce: %d\n", result);

    return 0;
}

void mymap(int *a, int *b, int n, int (*p)(int)) {
    for (int i = 0; i < n; i++) {
        b[i] = (*p)(a[i]);
    }
}

int myfilter(int *a, int *b, int n, int (*p)(int)) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((*p)(a[i])) {
            b[count++] = a[i];
        }
    }
    return count;
}

int myreduce(int *a, int n, int (*op)(int, int)) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = (*op)(res, a[i]);
    }
    return res;
}

void disp(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}