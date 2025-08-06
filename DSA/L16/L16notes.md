# L16

```cpp
#include <iostream>
using namespace std;
```

## 1. Sum of 20 user-input elements in an array

* Prompt the user for 20 integers, store them in an array, and compute the sum.

```cpp
int sumTwenty() {
    int arr[20];
    int sum = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    return sum;
}
```

---

## 2. Average of elements in an array of size 18

* Calculate the average of 18 elements by summing them and dividing by 18.

```cpp
double averageEighteen() {
    double arr[18];
    double sum = 0;
    for (int i = 0; i < 18; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    return sum / 18;
}
```

---

## 3. Find index of a specific element

* Ask the user for the array size and elements, then search for a target value. If not found, print `-1`.

```cpp
int findIndex() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter value to find: ";
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            delete[] arr;
            return i;
        }
    }
    delete[] arr;
    return -1;
}
```

---

## 4. Array of chars from 'a' to 'z'

* Create an array of 26 characters, fill it with `'a'` through `'z'`, and print each letter.

```cpp
void printAlphabet() {
    char alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }
    for (char c : alphabet) {
        cout << c << " ";
    }
    cout << endl;
}
```

---

## 5. Second largest element in a unique array (n > 3)

* Traverse the array to find the largest and second-largest values.

```cpp
int secondLargest(const vector<int>& arr) {
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int x : arr) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x < max1) {
            max2 = x;
        }
    }
    return max2;
}
```

---

## 6. Third smallest element in a unique array (n > 3)

* Maintain three smallest trackers while iterating.

```cpp
int thirdSmallest(const vector<int>& arr) {
    int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
    for (int x : arr) {
        if (x < min1) {
            min3 = min2;
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min3 = min2;
            min2 = x;
        } else if (x < min3) {
            min3 = x;
        }
    }
    return min3;
}
```

---

## 7. Byte-addressable memory

* **Byte-addressable** means each individual byte in memory has a unique address, allowing direct access to any byte.

---

```cpp
int main() {
    cout << "Sum of 20 elements: " << sumTwenty() << endl;
    cout << "Average of 18 elements: " << averageEighteen() << endl;

    int idx = findIndex();
    cout << "Index found: " << idx << endl;

    printAlphabet();

    vector<int> data = {5, 1, 9, 3, 7};
    cout << "Second largest: " << secondLargest(data) << endl;
    cout << "Third smallest: " << thirdSmallest(data) << endl;

    cout << "Memory is byte-addressable: each byte has its own address." << endl;
    return 0;
}
```

