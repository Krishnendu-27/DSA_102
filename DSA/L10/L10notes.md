## 1. Arithmetic Operators & Type Promotion

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 11 / 5      << endl; // integer division → 2
    cout << 18.2 / 5    << endl; // floating-point division → ~3.64
    cout << 16 / 554.251<< endl; // int / double → promotes int → double

    int a = 10;
    cout << a++ << endl; // post‑increment: prints 10, then a=11
    cout << a   << endl; // prints 11

    int c = 52;
    int b = --c;         // pre‑decrement: c=51, then b=51
    cout << b   << endl;
    return 0;
}
```

- **Integer vs. Floating‑Point Division**
  - `int / int` → truncated integer.
  - If either operand is `float`/`double`, result is floating‑point.
- **Type Promotion Rule**  
   When mixing types, the “higher‑precision” type wins:
  ```
  int < float < double
  ```

---

## 2. Comparison Operators

```cpp
int g = (a == c);        // false → 0
int x = (d == a);        // true  → 1
cout << g << endl;
cout << x << endl;

int y = (5 < 6);         // true → 1
int w = (5 > 2);         // true → 1

int o = (6 > 3 > 9);     // evaluated left→right:
                          // (6 > 3) → 1, then (1 > 9) → 0
cout << o << endl;

int j = (5 != 6);        // true → 1
cout << j << endl;
```

- **Operator Precedence**  
   Comparison (`<`, `>`, `<=`, `>=`) bind tighter than equality (`==`, `!=`):
  1. `<`, `>`, `<=`, `>=`
  2. `==`, `!=`
- **Chaining Pitfall**  
   Expressions like `6 > 3 > 9` do **not** check “6 > 3 and 3 > 9.”  
   Instead, it is parsed as `(6 > 3) > 9`.

---

## 3. Logical Operators

```cpp
int year = 523;
if ((year % 4 == 0 && year % 400 == 0)) {
    cout << "Leap year\n";
} else {
    cout << "Not a leap year\n";
}

char l = 'u';
if (l=='a' || l=='e' || l=='i' || l=='o' || l=='u') {
    cout << "Vowel\n";
} else {
    cout << "Consonant\n";
}
```

- **AND (`&&`)**: both operands must be true.
- **OR (`||`)**: at least one operand is true.
- **NOT (`!`)**: flips a boolean value.

---

## 4. Bitwise Operators

Operate at the bit‑level on integer types:

```cpp
int a = 5, b = 3;       // a=0101₂, b=0011₂

cout << (a & b) << endl; // AND: 0001₂ → 1
cout << (a | b) << endl; // OR:  0111₂ → 7
cout << (a ^ b) << endl; // XOR: 0110₂ → 6
cout << (~a) << endl;    // NOT: invert bits → -6 (two’s complement)
cout << (a << 2)<< endl; // Left shift: 0101₂ <<2 → 10100₂ → 20
cout << (a >> 1)<< endl; // Right shift:0101₂ >>1 → 0010₂ → 2
```

> **Note:** Right‑shift of negative numbers can be implementation‑defined (arithmetic vs. logical shift).

---

## 5. Consistent Evaluation: BODMAS & C++ Rules

To avoid ambiguity, all programmers agree on a **single** evaluation order—analogous to BODMAS in math:

1. **Grouping**: `()`
2. **Unary**: `++`, `--`, `!`, `~`, type casts
3. **Multiplicative**: `*`, `/`, `%`
4. **Additive**: `+`, `-`
5. **Shifts**: `<<`, `>>`
6. **Relational**: `<`, `>`, `<=`, `>=`
7. **Equality**: `==`, `!=`
8. **Bitwise AND**: `&`
9. **Bitwise XOR**: `^`
10. **Bitwise OR**: `|`
11. **Logical AND**: `&&`
12. **Logical OR**: `||`
13. **Ternary**: `?:`
14. **Assignment**: `=`, `+=`, `-=`, …
15. **Comma**: `,`

- **Associativity**
  - Most binary operators are **left‑to‑right** associative.
  - Unary, assignment, and ternary are **right‑to‑left**.

---

## 6. Unary Operators

- **Post‑increment/decrement** (`x++` / `x--`)
  - Use old value, then modify.
- **Pre‑increment/decrement** (`++x` / `--x`)
  - Modify first, then use new value.

```cpp
int a = 20, b;
b = a++;  // b=20, a=21
b = ++a;  // a=22, b=22
```

---

# summary

- **Understand each operator’s precedence & associativity** to predict expression results.
- **Use parentheses** generously to clarify intent and prevent subtle bugs.
- **Be mindful of type promotion** when mixing integer and floating types.
- **Apply BODMAS‑style rules** to keep your arithmetic and logical expressions consistent across codebases.
