# Sorting the File Contents

### Problem Statement

Create a menu-driven program to perform selection sort based on roll number and name. Use student.csv to extract the dataset and write the sorted records to a new file.

### Data File Description

- **Data file**: student.csv
- Contains student information in two columns only
- First row represents column headers: roll_no and name
- Contains approximately 55 rows with data separated by commas

### Selection Sort on Student Records

```c
// AI generated

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_LINE_LENGTH 100
#define MAX_NAME_LENGTH 50

// Student structure
typedef struct {
    int roll_no;
    char name[MAX_NAME_LENGTH];
} Student;

// Function to swap two student records
void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// Selection sort function with callback for comparison
void selectionSort(Student students[], int n, int (*compare)(Student*, Student*)) {
    int i, j, min_idx;
    
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (compare(&students[j], &students[min_idx]) < 0) {
                min_idx = j;
            }
        }
        swap(&students[min_idx], &students[i]);
    }
}

// Comparison function for roll number
int compareByRollNo(Student *a, Student *b) {
    return a->roll_no - b->roll_no;
}

// Comparison function for name
int compareByName(Student *a, Student *b) {
    return strcmp(a->name, b->name);
}

int main() {
    FILE *inputFile, *outputFile;
    Student students[MAX_STUDENTS];
    char line[MAX_LINE_LENGTH];
    char *token;
    int count = 0;
    int choice;
    char outputFileName[100];
    
    // Open the input file
    inputFile = fopen("student.csv", "r");
    if (inputFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Skip header line
    fgets(line, MAX_LINE_LENGTH, inputFile);
    
    // Read student records
    while (fgets(line, MAX_LINE_LENGTH, inputFile) && count < MAX_STUDENTS) {
        // Remove newline character
        line[strcspn(line, "\n")] = 0;
        
        // Get roll number
        token = strtok(line, ",");
        if (token != NULL) {
            students[count].roll_no = atoi(token);
        }
        
        // Get name
        token = strtok(NULL, ",");
        if (token != NULL) {
            strncpy(students[count].name, token, MAX_NAME_LENGTH - 1);
            students[count].name[MAX_NAME_LENGTH - 1] = '\0';
        }
        
        count++;
    }
    
    fclose(inputFile);
    
    // Display menu
    printf("\nStudent Record Sorting\n");
    printf("1. Sort by Roll Number\n");
    printf("2. Sort by Name\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    // Sort based on user choice
    if (choice == 1) {
        selectionSort(students, count, compareByRollNo);
        strcpy(outputFileName, "sorted_by_roll.csv");
    } else if (choice == 2) {
        selectionSort(students, count, compareByName);
        strcpy(outputFileName, "sorted_by_name.csv");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }
    
    // Write sorted data to output file
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Error creating output file!\n");
        return 1;
    }
    
    // Write header
    fprintf(outputFile, "roll_no,name\n");
    
    // Write sorted records
    for (int i = 0; i < count; i++) {
        fprintf(outputFile, "%d,%s\n", students[i].roll_no, students[i].name);
    }
    
    fclose(outputFile);
    printf("Sorted data written to %s\n", outputFileName);
    
    return 0;
}
```

### How It Works

1. **Data Structure**: Creates a `Student` structure with roll_no and name fields.
2. **File Reading**: 
   - Opens the CSV file and skips the header line
   - Reads each line and splits it using `strtok()` function
   - Stores data in an array of Student structures
3. **Menu System**: Asks the user to choose sorting by roll number or name.
4. **Sorting Algorithm**:
   - Uses selection sort with a callback function approach
   - Single sort function works with different comparison criteria
5. **File Writing**: Creates a new file and writes the sorted records.

### Selection Sort Algorithm Visualization

```mermaid
flowchart TD
    A[Start with unsorted array] --> B[Outer loop: i from 0 to n-2]
    B --> C[Set min_idx = i]
    C --> D[Inner loop: j from i+1 to n-1]
    D --> E{Is arr[j] < arr[min_idx]?}
    E -->|Yes| F[Update min_idx = j]
    E -->|No| G[Continue inner loop]
    F --> G
    G --> D
    D --> H[Swap arr[i] with arr[min_idx]]
    H --> I[Continue outer loop]
    I --> B
    B --> J[Array is sorted]
```

### Time Complexity

- **Best Case**: O(n²)
- **Average Case**: O(n²)
- **Worst Case**: O(n²)
