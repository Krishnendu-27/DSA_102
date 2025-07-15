## 📘 Title: **C++ I/O, Typecasting, and Control Flow**

### 🗓 Date: 2025‑07‑15   📅 Week: 29   🕖 07:44 AM

---

# L4‑of‑DSA

---

## 1. Input & Output Operators

* **Extraction (`>>`)** reads data from standard input (`cin`):

  ```cpp
  int a, b;
  cin >> a >> b;  // user can type values separated by space or newline
  ```
* **Insertion (`<<`)** writes data to standard output (`cout`):

  ```cpp
  cout << "Sum is " << (a + b) << endl;
  ```
* **`endl`** flushes the stream and moves to a new line.

---

## 2. Typecasting & Its Risks

* Converting between data types can **lose information** if the target type has smaller capacity:

  ```cpp
  int c = 65;
  char d = c;       // 'A' (since 65 maps to 'A' in ASCII)
  cout << d << endl;

  d = 'o';
  c = d;            // c becomes 111 (ASCII code for 'o')
  cout << c << endl;
  ```
* **Risk:** Casting a large `long` into a `char` truncates high‑order bits, causing data corruption.

---

## 3. Conditional Statements

* **Simple `if` / `else`** without braces works for a single statement:

  ```cpp
  int package;
  cout << "Enter the package amount: ";
  cin >> package;

  if (package > 50)
      cout << "Accepted\n";
  else
      cout << "Rejected\n";
  ```
* **Vowel vs. Consonant Check** using logical OR (`||`):

  ```cpp
  char ch;
  cout << "Enter an alphabet: ";
  cin >> ch;

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      cout << ch << " is a vowel\n";
  else
      cout << ch << " is a consonant\n";
  ```

---

## 4. Loops & Tasks

### a. Basic `for` Loop

Prints numbers 0–4:

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

### b. Squares of 1–5

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " square is " << i*i << endl;
}
```

### c. Even Numbers in a Range

Print all even numbers from 1 up to `n`:

```cpp
int n = 60;
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        cout << i << " is an even number\n";
    }
}
```

---

## 5. Key Operators & Concepts

| Symbol | Name                | Purpose                                                 |
| ------ | ------------------- | ------------------------------------------------------- |
| `>>`   | Extraction operator | Reads input from `cin`                                  |
| `<<`   | Insertion operator  | Sends output to `cout`                                  |
| `=`    | Assignment operator | Assigns a value to a variable                           |
| `==`   | Comparison operator | Checks equality between two values                      |
| `%`    | Modulo operator     | Remainder of integer division (useful for parity tests) |

---

## 6. Problem‑Solving Patterns

* **Conditional Logic** (`if`/`else`) is ideal for one‑time decisions (e.g., accept/reject).
* **Loops** are used for **repetitive tasks** (e.g., printing sequences, checking multiple conditions).
* **Typecasting Awareness**: Always consider the size range of each type to avoid data loss when converting.

> In DSA, identifying the correct **control flow** (conditional vs. loop) and understanding **best‑/worst‑case** behaviors of these constructs is crucial for writing efficient code.

