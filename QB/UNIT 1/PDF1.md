# 🎯 C Programming

## 1️⃣ What is the primary function of GCC? (1 Mark)
GCC (GNU Compiler Collection) is mainly used to compile C programs into machine code so that the computer can understand and execute them. In simple terms, it converts your C code into an executable program! 🚀

## 2️⃣ How do you specify a single-line comment in C? (1 Mark)
By using `//` to write a single-line comment in C. Anything after `//` on that line is ignored by the compiler.

    // This is a comment
    printf("Hello, World!\n"); // This is also a comment

💡 **Tip:** Use comments to make your code more understandable!

## 3️⃣ Compile-time vs. Run-time Errors (2 Marks)

### 🔴 Compile-time Error
Happens when you make a mistake in the syntax of your code, like missing a semicolon `;` or using an undeclared variable.

    int main() {
        printf("Hello World!") // ❌ Missing semicolon
        return 0;
    }

🛠️ **Fix:** Check for syntax errors and correct them before compiling.

### 🔵 Run-time Error
Occurs when the program compiles successfully but fails during execution (e.g., dividing by zero).

    int x = 5, y = 0;
    printf("%d", x / y); // ❌ Division by zero

🛠️ **Fix:** Handle errors properly using conditions (if statements) or exception handling techniques.

## 4️⃣ Purpose of the -o Flag in GCC (2 Marks)
The `-o` flag is used to name the output or executable file instead of getting the default `a.out`.

🔹 **Example:**

    gcc program.c -o myprogram
    ./myprogram  # Run the executable

🎯 **Tip:** Always use `-o` to name your output files clearly!

## 5️⃣ What is Linking & Why is it Important? (3 Marks)
🔗 **Linking** is the step where the compiler combines different pieces of compiled code (object files and libraries) into a final executable.

- It connects function calls to their actual implementations.
- It links external libraries like `math.h`, `stdio.h`, etc.

🔹 **Example:**

    gcc main.o functions.o -o myprogram -lm  # Linking with the math library

💡 **Why is linking needed?** Without linking, the final program wouldn’t know where to find the required functions!

## 6️⃣ Why Follow C Standards Like C99 or C11? (3 Marks)
✅ **Portability:** Code will work across different compilers.  
✅ **New Features:** You get modern syntax improvements.  
✅ **Better Optimization:** C standards help compilers optimize your code for performance.

🔹 **Example:** Compiling with C11:

    gcc program.c -std=c11 -o program

💡 **Tip:** Always use `-std=c11` or `-std=c99` to avoid compatibility issues!

## 7️⃣ Steps to Compile & Run Using Separate Compilation (4 Marks)

🔹 **Step 1: Compile Each File Separately**

    gcc -c main.c -o main.o
    gcc -c functions.c -o functions.o
    gcc -c utilities.c -o utilities.o

🔹 **Step 2: Link Everything Together**

    gcc main.o functions.o utilities.o -o myprogram

🔹 **Step 3: Run the Executable**

    ./myprogram

💡 **Tip:** This method is useful for big projects, so you don’t have to recompile everything if only one file changes!

## 8️⃣ Phases of the Program Development Life Cycle (PDLC) (5 Marks)
🛠️ The PDLC has many phases, but let's focus on three key ones:

### 1️⃣ Analysis Phase
- Understanding the problem.
- Gathering requirements.

### 2️⃣ Design Phase
- Creating a plan (flowcharts, algorithms, etc.).
- Deciding the logic and structure.

### 3️⃣ Implementation Phase
- Writing the actual C code!
- Debugging & testing.

💡 **Tip:** Always plan before you start coding to avoid major issues later!

## 9️⃣ Types of Errors in C Programming (5 Marks)

### 🛑 1. Compile-time Error
❌ Syntax errors, missing semicolons, undeclared variables.  
✔️ **Example:**

    int x; 
    y = 5; // ❌ Error: 'y' is undeclared

### 🛑 2. Link-time Error
❌ Happens when an object file is missing during compilation.  
✔️ **Example:**

    gcc main.o -o myprogram  # ❌ Missing linked file (e.g., functions.o)

### 🛑 3. Run-time Error
❌ Crashes when running (e.g., division by zero).  
✔️ **Example:**

    int a = 10 / 0;  // ❌ Runtime error

### 🛑 4. Logical Error
❌ Code runs but gives wrong output!  
✔️ **Example:**

    int area = length + width;  // ❌ Should be length * width

💡 **Tip:** Debug using `printf()` and step-through debugging!

## 🔟 Compilation of a Project with Multiple C Files (10 Marks)
📂 Suppose we have three files:
- `main.c`
- `functions.c`
- `utilities.c`

`functions.c` needs the math library (`libm`).

### ✅ Step 1: Compile Each File Separately (3 Marks)

    gcc -c main.c -o main.o
    gcc -c functions.c -o functions.o
    gcc -c utilities.c -o utilities.o

### ✅ Step 2: Link All Object Files & Math Library (3 Marks)

    gcc main.o functions.o utilities.o -o myprogram -lm

### ✅ Step 3: Run the Program

    ./myprogram

### 🔥 Why Use `make` for Larger Projects? (3 Marks)
💡 The `make` utility automates the compilation process, so you don’t have to retype long `gcc` commands every time.

🔹 **Create a Makefile like this:**

    myprogram: main.o functions.o utilities.o
        gcc main.o functions.o utilities.o -o myprogram -lm

    main.o: main.c
        gcc -c main.c -o main.o

    functions.o: functions.c
        gcc -c functions.c -o functions.o

    utilities.o: utilities.c
        gcc -c utilities.c -o utilities.o

    clean:
        rm -f *.o myprogram

🔹 **Now, just run:**

    make   # Compiles everything
    make clean  # Removes object files and executable

💡 **Tip:** `make` makes life easier by compiling only the files that changed!