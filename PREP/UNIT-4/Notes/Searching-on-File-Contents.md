# Searching on File Contents


### Binary Search on Integers

```c
#include <stdio.h>
#include <stdlib.h>

// Binary search function
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid;
        
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1; // Not found
}

int main() {
    FILE *file;
    int numbers[100];
    int count = 0;
    int key;
    
    // Open the file
    file = fopen("number.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Read numbers from file
    while (fscanf(file, "%d", &numbers[count]) == 1 && count < 100) {
        count++;
    }
    
    fclose(file);
    
    // Get search key from user
    printf("Enter the number to search: ");
    scanf("%d", &key);
    
    // Perform binary search
    int result = binarySearch(numbers, 0, count - 1, key);
    
    // Display result
    if (result != -1)
        printf("Number %d found in the file!\n", key);
    else
        printf("Number %d not found in the file.\n", key);
    
    return 0;
}
```

### How It Works

1. **File Reading**: The program opens `number.txt` and reads integers into an array.
2. **User Input**: Prompts the user to enter a number to search for.
3. **Binary Search**: Implements the binary search algorithm:
   - Compare the middle element with the search key
   - If equal, return the position
   - If greater, search the left half
   - If smaller, search the right half
4. **Result**: Displays whether the number was found or not.

### Binary Search Algorithm Visualization

```mermaid
graph TD
    A[Start with sorted array] --> B[Set low=0, high=n-1]
    B --> C{low <= high?}
    C -->|Yes| D[mid = low + (high-low)/2]
    D --> E{arr[mid] == key?}
    E -->|Yes| F[Return mid]
    E -->|No| G{arr[mid] < key?}
    G -->|Yes| H[low = mid + 1]
    G -->|No| I[high = mid - 1]
    H --> C
    I --> C
    C -->|No| J[Return -1]
```

### Time Complexity

- **Best Case**: O(1) - Element found at the middle
- **Average Case**: O(log n)
- **Worst Case**: O(log n)

