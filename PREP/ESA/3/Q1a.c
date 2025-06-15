#include <stdio.h> 
int main() {
    int i, j;
    for (i = 3; i<4; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ", i*j);
        }
    }
    return 0; 
}

// 3 6 9