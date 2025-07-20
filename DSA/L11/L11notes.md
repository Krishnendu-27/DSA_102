### 1. `while` Loop

**Boilerplate Syntax**

```cpp
while (condition) {
    // code to repeat
    // update loop variable
}
```

**Use Case: Multiplication Table**

```cpp
int num;
cout << "Enter a number: ";
cin >> num;

int i = 1;
while (i <= 10) {
    cout << num << " * " << i << " = " << num * i << endl;
    i++;
}
```

**Use Case: List All Factors**

```cpp
int n;
cout << "Enter a number: ";
cin >> n;

int i2 = 1;
while (i2 <= n) {
    if (n % i2 == 0) {
        cout << n << " is divisible by " << i2 << endl;
    }
    i2++;
}
```

---

### 2. Odd/Even Classification with `while`

```cpp
int limit;
cout << "Enter a limit: ";
cin >> limit;

int i3 = 1;
while (i3 <= limit) {
    if (i3 % 2 == 0)
        cout << i3 << " is an EVEN number" << endl;
    else
        cout << i3 << " is an ODD number" << endl;
    i3++;
}
```

---

### 3. `do…while` Loop

**Boilerplate Syntax**

```cpp
do {
    // code executes at least once
    // update loop variable
} while (condition);
```

**Use Case: Sum of 1…N**

```cpp
int n, sum = 0;
cout << "Enter a number: ";
cin >> n;

int i4 = 1;
do {
    sum += i4;
    i4++;
} while (i4 <= n);

cout << "Sum = " << sum << endl;
```

---

### 4. Loop Controls: `break` & `continue`

- **`break`** exits the nearest loop immediately.
    
- **`continue`** skips to the next iteration of the loop.
    

```cpp
// Print 1 to 50 but stop when i == 7
for (int i = 1; i <= 50; i++) {
    if (i == 7) break;
    cout << i << " ";
}
cout << endl;

// Print only odd numbers 1 to 50
for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0) continue;
    cout << i << " ";
}
cout << endl;
```

---

### 5. `switch` Statement

**Key Points**

- Works best with `int`, `char`, or `enum` cases (no `float`/`double`).
    
- Each `case` must end with `break;` (unless intentional fall‑through).
    

```cpp
int code = 67;
switch (code) {
    case 65: cout << "A"; break;
    case 66: cout << "B"; break;
    case 67: cout << "C"; break;
    case 68: cout << "D"; break;
    default: cout << "Enter a valid code"; break;
}
```

---

### 6. Variable Scope

- **Scope** defines where a variable “lives” and is accessible.
    
- **Block scope**: variables declared inside `{ … }` exist only within that block.
    

```cpp
int b = 68;       // outer scope
cout << b << endl;

int x = 66;
if (x == 66) {
    int b = 45;   // inner scope shadows outer `b`
    cout << b;    // prints 45
}
// here, `b` refers again to the outer variable (68)
```

> **Tip:** Always choose distinct, meaningful names to avoid accidental shadowing.

---

## ✅ Summary

- **`while`** and **`do…while`** loops are ideal when the number of iterations isn’t known in advance.
    
- **`break`** and **`continue`** give you fine‑grained control within loops.
    
- **`switch`** statements cleanly handle multi‑way branching on discrete values.
    
- Understanding **scope** prevents bugs caused by unintended variable shadowing.
    
