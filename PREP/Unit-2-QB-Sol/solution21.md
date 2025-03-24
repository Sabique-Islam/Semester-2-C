```c
#include<stdio.h>
void v1(int* q);
int main()
{
    int a = 100;
    int *p = &a;
    v1(p);
    printf("%d and %d\n", a, *p);
    return 0;
}
void v1(int* q)
{
    int temp = 999;
    *q = temp;
}
```

## **Understanding the Code Step by Step**

### **1️⃣ The Main Function: Setting the Stage 🎭**  
```c
int a = 100;
int *p = &a;
```
- We create an **integer `a`** and give it the value **100**.  
- We then create a **pointer `p`**, which is assigned the **address of `a`**.  
- Now, `p` is like a secret agent that always knows where `a` lives and can modify its value.

At this point, memory looks like this:  

| Variable | Value  | Address (hypothetical) |
|----------|--------|------------------------|
| `a`      | `100`  | `0x1000`               |
| `p`      | `0x1000` | `0x2000`               |

Now, we call **`v1(p);`**, passing `p` (which points to `a`) to `v1`.  

---

### **2️⃣ Inside `v1`: The Chaos Begins! 🌀**
```c
void v1(int* q)
{
    int temp = 999;
    *q = temp;
}
```
- `q` is a pointer that receives the address of `a` (because we passed `p`, which stores `&a`).
- So, `q` and `p` both point to the same memory location (where `a` lives).  
- We create a new variable `temp` and store **999** in it.  

| Variable | Value  | Address (hypothetical) |
|----------|--------|------------------------|
| `temp`   | `999`  | `0x3000`               |
| `q`      | `0x1000` | `0x4000`               |

- Then, we do `*q = temp;`, which means:  
  - Go to the address stored in `q` (which is `0x1000`, where `a` is located).  
  - Replace `a`'s value with `999`.

BOOM! `a` is now **999**, thanks to the power of pointers. 🚀  

---

### **3️⃣ Back in `main`: Checking the Damage 🔥**
```c
printf("%d and %d\n", a, *p);
```
- `a` was changed inside `v1` (because `q` pointed to it), so now `a = 999`.
- `p` still points to `a`, so `*p = 999` too.

Final memory state:

| Variable | Value  | Address (hypothetical) |
|----------|--------|------------------------|
| `a`      | `999`  | `0x1000`               |
| `p`      | `0x1000` | `0x2000`               |

So the final output is:  
```
999 and 999
```

---

## **🎯 Key Takeaways:**
1. **Pointers allow modifying variables even in other functions** (because they store addresses, not values).  
2. **Modifying `*q` inside `v1` directly changed `a`**, since `q` and `p` both pointed to `a`.   
---