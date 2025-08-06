#include <iostream>
#include <cmath>
using namespace std;

// Convert a to A
char smallToBig(char name) {
    return name - 32;
}

// Length of number
int length(int num) {
    std::string strNum = std::to_string(num);
    return strNum.length();
}

// Armstrong number
bool amstrong(int num) {
    int temp = num;
    int ln = length(num);
    int sum = 0;

    while (num > 0) {
        int r = num % 10;
        sum = pow(r, ln) + sum;
        num /= 10;
    }

    return sum == temp;
}

// Count trailing zeroes in factorial
int findzero(int num) {
    int count = 0;
    while (num >= 5) {
        num = num / 5;
        count += num;
    }
    return count;
}

// Check if it's a rectangle
bool find(int A, int B, int C, int D) {
    if ((A == B && C == D) || (A == C && B == D) || (A == D && C == B)) {
        return 1;
    } else {
        return 0;
    }
}
// bishop working
int bishop(int row, int colm) {
    int total = 0;

    // diagonal bottom-right
    total += min(8 - row, 8 - colm);

    // diagonal bottom-left
    total += min(8 - row, colm - 1);

    // diagonal top-left
    total += min(row - 1, colm - 1);

    // diagonal top-right
    total += min(row - 1, 8 - colm);

    return total;
}


int main() {
    cout << bishop(5,4) << endl;

    cout << findzero(25) << endl;
    cout << smallToBig('j') << endl;

    if (amstrong(153)) {
        cout << "its a amstrong";
    } else {
        cout << "its not a amstrong";
    }

    return 0;
}
