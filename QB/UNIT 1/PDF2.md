# 🎉 C Programming Q&A:

## 1️⃣ (1 Mark): What is an identifier in C programming?
An identifier in C is just a fancy name for the names you give to stuff like variables, functions, or anything you wanna label in your code. Think of it as a nickname for your pet rock—it’s how you tell the computer, “Hey, this is my thing!” 

- Rules: Start with a letter or underscore `_`, then mix in letters, numbers, or more underscores. No spaces or weird symbols allowed!

## 2️⃣ (1 Mark): What keyword is used to declare an integer variable in C?
The magic word is `int`! It’s like telling C, “Yo, I need a box to hold whole numbers like 42 or -7.” Easy peasy!

    int myNumber;  // Boom, you’ve got an integer variable!

## 3️⃣ (2 Marks): Explain the difference between declaring and initializing a variable in C.
Alright, let’s break it down like a dance move:

- **Declaring**: You’re just telling C, “Hey, save me a spot for this variable, but I’ll fill it later.” It’s like reserving a seat at a party.

    int age;  // Declared, but it’s empty for now!

- **Initializing**: This is when you declare *and* give it a value right away. It’s like showing up to the party with a pizza in hand!

    int age = 18;  // Declared AND initialized—ready to roll!

Big difference: declaring sets up the space, initializing fills it with goodies.

## 4️⃣ (2 Marks): Provide two examples of invalid identifiers in C and explain why they are invalid.
Let’s spot some troublemakers!

- **1stPlace**: Nope! Starts with a number, and C says, “Uh-uh, gotta start with a letter or underscore, buddy!”
- **my name**: Whoops! Spaces aren’t cool in identifiers. C’s like, “Keep it tight, no gaps allowed!”

Valid ones would be `firstPlace` or `my_name`. See the vibe?

## 5️⃣ (3 Marks): What are keywords in C programming, and why can’t they be used as variable names? Give three examples of keywords.
Keywords are the VIPs of C—special words the language reserves for itself. They’re like the cool kids who already claimed their locker spots, so you can’t steal ‘em for your variables!

- **Why not?** If you tried using them, C would get confused, like, “Wait, are you a command or a variable? Stop messing with me!”
- **Examples**: 
  - `int` (for integers)
  - `if` (for conditions)
  - `while` (for loops)

Try naming a variable `int` and C will throw a tantrum!

## 6️⃣ (3 Marks): Describe the purpose of the char data type in C and provide an example of how it is used.
The `char` data type is your go-to for storing single characters—like letters, digits, or funky symbols. It’s like a tiny mailbox that holds one piece of mail at a time.

- **Purpose**: Perfect for stuff like initials, yes/no flags, or even ASCII art vibes.
- **Example**:

    char grade = 'A';  // Storing the letter 'A'
    printf("My grade is %c\n", grade);  // Prints: My grade is A

Small but mighty, right?

## 7️⃣ (4 Marks): Explain the difference between the float and double data types in C. When would you choose to use double over float?
Time for a float vs. double showdown!

- **Float**: This guy holds decimal numbers (like 3.14) but with less precision. It’s smaller, taking up 4 bytes of memory. Think of it as a quick sketch.
- **Double**: Bigger and better—8 bytes! More precision for those juicy decimals (like 3.1415926535). It’s the full painting!

- **When to use double?** If you need super accurate math—like calculating rocket trajectories or cash with tons of decimals—go `double`. Use `float` when you’re saving space and don’t need crazy detail.

    float pi = 3.14;      // Good enough
    double bigPi = 3.1415926535;  // Super precise!

## 8️⃣ (5 Marks): Explain the concept of scope of a variable in C. Describe at least two different types of scope.
Scope is all about “where your variable can party.” It’s like the guest list—some variables can roam everywhere, others are stuck in one room.

- **Local Scope**: These variables are chill inside a single block (like inside `{}` braces). Once the block ends, they’re gone, poof!

    void myFunction() {
        int x = 10;  // Local to this function
        printf("%d\n", x);
    }  // x dies here!

- **Global Scope**: These are the VIPs that live outside all functions and can crash any party in the program.

    int score = 100;  // Global, baby!
    void printScore() {
        printf("%d\n", score);  // Works anywhere!
    }

Local keeps things private; global shares the love (or chaos!).

## 9️⃣ (5 Marks): Discuss the significance of data types in C. How do data types affect memory allocation and the operations that can be performed on variables?
Data types are like the blueprints for your variables—they tell C how much space to grab and what tricks they can do!

- **Significance**: They keep your program organized. Without them, C would be like, “Uh, how big is this? Can I divide it?”
- **Memory Allocation**: 
  - `char` = 1 byte (tiny!)
  - `int` = 4 bytes (medium)
  - `double` = 8 bytes (chunky!)
- **Operations**: 
  - You can’t multiply a `char` like it’s a number unless you tweak it.
  - `float` and `double` handle decimals, but `int` says “nope” to fractions.

Pick the right type, or you’ll waste space or crash the party!

## 🔟 (10 Marks): Imagine you need to store a student’s name, age, and GPA in a C program.
Alright, let’s build a student profile! We’ll use a mix of data types and maybe a `struct` to keep it slick.

- **Name**: Use a `char` array (string) ‘cause names aren’t just one letter.
- **Age**: `int`—whole numbers, no decimals for age!
- **GPA**: `float` or `double`—gotta handle those pesky decimals like 3.85.

Here’s a fun example:

    #include <stdio.h>
    struct Student {
        char name[50];  // Room for a long name!
        int age;
        float gpa;
    };
    int main() {
        struct Student s;
        // Filling in the deets
        strcpy(s.name, "Alex");  // Name’s Alex
        s.age = 20;              // 20 years young
        s.gpa = 3.75;            // Rocking a solid GPA
        // Show it off!
        printf("Name: %s, Age: %d, GPA: %.2f\n", s.name, s.age, s.gpa);
        return 0;
    }

This prints: `Name: Alex, Age: 20, GPA: 3.75`. Boom, student data stored and ready to flex! Using a `struct` keeps it all tidy—perfect for bigger projects!