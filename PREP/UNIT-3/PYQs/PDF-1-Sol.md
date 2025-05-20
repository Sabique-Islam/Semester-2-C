# `ESA PYQs`

## `Q3a` > List any four characteristics/properties of structures in C

### A >
- **Components** (Members can be of different types)  
  A structure can have one or more named data members, and these members can be of different data types (heterogeneous).

- **Memory Size and Layout**  
  The total memory occupied by a structure is at least the sum of the sizes of its members. The compiler may add padding for alignment.

- **Assignment Compatibility**  
  You can directly assign one structure variable to another if they are of the same type. This copies all member values from one to the other (member-wise copy).

- **Access to Members**  
  Structure members are accessed using the dot operator (.) for normal variables and the arrow operator (->) for pointers to structures.

---

## `Q3c` > Structure Definition and Operations

```c
struct Car {
    int year;
    char company[100];
    char color[100];   
}; 
typedef struct Car CAR;
```

Given the above structure definition and alias for it, write the C statements for the following:
1. Create a pointer to structure.
2. Allocate memory for all the members of the structure dynamically
3. Assign values to all the members of the structure through this pointer.

### A >
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    int year;
    char company[100];
    char color[100];
};
typedef struct Car CAR;

int main()
{
    CAR *cars;
    cars = (CAR*)malloc(sizeof(CAR));
    
    cars->year = 2025;
    strcpy(cars->company, "Chevrolet");
    strcpy(cars->color, "Yellow");
    
    printf("%d\n", cars->year);
    printf("%s\n", cars->company);
    printf("%s\n", cars->color);

    free(ptr);
    return 0;
}
```

---

## `Q3d` > Student Structure Operations

There is a structure called student and two data members in it such as name and age. Write the code to do the following:
1. Create a structure variable s
2. Create a pointer to structure variable which points to s
3. Display name using pointer
4. Display age using s
5. Create a structure variable s1 and copy the contents of s to s1. Write the code snippet to compare s1 and s

### A >
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
    char name[100];
    int age;
} student;

int main()
{
    // i)
    student s;
    // ii)
    student *ptr = &s;
    
    // iii)
    strcpy(ptr->name, "Amy");
    printf("Using Pointer --> %s\n", ptr->name);
    
    // iv)
    s.age = 32;
    printf("Using s --> %d\n", s.age);
    
    // v)
    student s1 = s; //Member-wise copy
    
    if(strcmp(s1.name,s.name)==0 && s1.age == s.age){
        printf("Both Structures are equal");
    }else{
        printf("Both Structures are unequal");
    }
    return 0;
}
```
