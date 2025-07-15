## 2025, July 14 - Monday 09:54:AM Week : 29

# L3-of-DSA

## **Fundamentals of C++**

### 1. ASCII & Binary Representation

- Computers store characters as numbers using the **ASCII** table.
- Example:
  - Character **`A`** corresponds to the decimal value **65**.
  - In binary, **65** becomes **`1000001`**.

---

### 2. C++ Program Structure & Output

All executable statements in a C++ program go inside the `main()` function. To print text to the console, we use the insertion operator `<<` with `cout`:

```cpp
#include <iostream>         // Provides std::cout, std::endl
using namespace std;        // Allows using cout and endl without std::

int main() {
    // Print two lines of text:
    cout << "halo world" << endl;      // endl inserts a newline
    std::cout << "halo world again" << endl;
    return 0;                          // Indicates successful execution
}
```

- **`#include <iostream>`** brings in the declarations for I/O streams.
- **`using namespace std;`** avoids having to prepend `std::` everywhere.
- **`endl`** flushes the output and moves to a new line.

---

### 3. Variables & Data Types

C++ is **statically typed**, so every variable must be declared with its type before use:

| Type       | Meaning                  | Size (approx.)         |
| ---------- | ------------------------ | ---------------------- |
| `int`      | Integer (whole numbers)  | 4 bytes                |
| `float`    | Single-precision decimal | 4 bytes (32‑bit)       |
| `double`   | Double-precision decimal | 8 bytes                |
| `bool`     | Boolean (`true`/`false`) | 1 byte                 |
| `char`     | Single character         | 1 byte                 |
| `long int` | Large integers           | 8 bytes                |
| `string`   | Sequence of characters   | implementation-defined |

- **Naming rules:**
  - Begin with a letter or underscore (`_`).
  - May contain letters, digits, or underscores.
  - Must be meaningful (e.g., `score`, `userName`).

```cpp
int age = 50;             // integer
float temperature = 36.5; // decimal number
double precise = 3.141592653589793;
bool isValid = true;      // true or false
char letter = 'A';        // single character
long int bigNum = 5555555555555555555L;
string name = "krish";    // sequence of characters
```

---

### 4. Memory & Two’s Complement

- Each data type has a fixed size in memory.
- For signed types (e.g., `int`), half the bit-patterns represent **positive** numbers, half **negative**, using **two’s complement** encoding:
  1. Find the binary of the absolute value.
  2. Invert all bits (one’s complement).
  3. Add 1 to get the two’s complement (negative value).

---

### 5. Inline Arithmetic & Output Examples

Demonstrating operations and mixed-type printing:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "halo world" << endl;

    // Simple arithmetic
    cout << "5 + 3 = " << 5 + 3 << endl;

    // Variables of various types
    int x = 50;
    cout << "Integer x = " << x << endl;

    char c = '5';
    cout << "Character c = " << c << endl;  // prints '5'

    float f = 53.287741f;
    cout << "Float f = " << f << endl;

    long int h = 5555555555555555555L;
    cout << "Long h = " << h << endl;

    bool flag = true;
    cout << "Boolean flag = " << flag << endl;  // prints 1 for true

    int neg = -9;
    cout << "Negative integer = " << neg << endl;

    return 0;
}
```

---

# Summary

- **ASCII mapping** lets us convert characters to numbers easily stored in binary.
- **`cout << … << endl;`** is the primary way to output text and variables.
- **Data types** have fixed sizes; choose them based on the range and precision you need.
- **Two’s complement** handles negative integers transparently.
- Always **initialize** variables and prefer **meaningful names** for readability.

---
