#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[100];
} Student;

int compareByRollNo(Student a, Student b) {
    return a.roll_no - b.roll_no;
}

int compareByName(Student a, Student b) {
    return strcmp(a.name, b.name);
}

void selectionSort(Student arr[], int n, int (*cmp)(Student, Student)) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (cmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }
        if (min != i) {
            Student temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    FILE *f = fopen("student.csv", "r");

    Student students[100];
    char line[200];
    int count = 0;

    fgets(line, sizeof(line), f);

    while (fgets(line, sizeof(line), f)) {
        line[strcspn(line, "\n")] = 0;
        char *token = strtok(line, ",");
        students[count].roll_no = atoi(token);
        token = strtok(NULL, ",");
        strcpy(students[count].name, token);
        count++;
    }
    fclose(f);

    int choice;
    printf("1. Sort by Roll\n2. Sort by Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        selectionSort(students, count, compareByRollNo);
    else
        selectionSort(students, count, compareByName);

    FILE *out;
    if (choice == 1)
        out = fopen("sorted_by_roll.csv", "w");
    else
        out = fopen("sorted_by_name.csv", "w");

    fprintf(out, "roll_no,name\n");
    for (int i = 0; i < count; i++)
        fprintf(out, "%d,%s\n", students[i].roll_no, students[i].name);
    fclose(out);

    return 0;
}