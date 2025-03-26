### **Code Analysis:**
```c
#include<stdio.h>
int main() {
    const int i = 0;
    printf("%d\n", i++);
    return 0;
}
```

### **Concept:**
- The `const` keyword makes `i` a **read-only variable**.
- `i++` is a **post-increment operation**, which means it tries to modify `i`.
- Since `i` is declared as `const`, any attempt to modify it results in a **compilation error**.

### **Compilation Error:**
```
error: increment of read-only variable ‘i’
```

### **Key Takeaways:**
- `const int i = 0;` makes `i` **immutable** (unchangeable).
- Trying to increment or modify `i` will cause a **compilation error**.
- Use `const` when you want a variable to remain unchanged throughout the program.

🚀 **Solution:** If you need a mutable variable, remove `const` or use a separate non-const copy for modification.