#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void swap(struct Person *a, struct Person *b) {
    struct Person temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(struct Person arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].age < arr[minIndex].age) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

void printArray(struct Person arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", arr[i].name, arr[i].age);
    }
}

int main() {
    struct Person people[] = {
        {"Alice", 24},
        {"Bob", 19},
        {"Charlie", 22}
    };
    int n = sizeof(people) / sizeof(people[0]);

    printf("Before Sorting:\n");
    printArray(people, n);

    selectionSort(people, n);

    printf("\nAfter Sorting by Age:\n");
    printArray(people, n);

    return 0;
}
