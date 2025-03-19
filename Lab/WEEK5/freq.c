#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension: ");
    scanf("%d", &n);

    int arr[n];
    int freq[100] = {0};

    for (int i = 0; i < n; i++) {
        printf("Enter +ve integers: ");
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    printf("Frequencies of entered integers:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d: %d\n", i, freq[i]);
        }
    }

    return 0;
}