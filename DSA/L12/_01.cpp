#include <iostream>
using namespace std;

int main()
{
    // Demonstrate building numbers via digit concatenation
    /*
     * Given a, b, c (e.g. 6, 9, 6) → 696
     * Formula: <previous_sum> * 10 + <next_digit>
     * Similarly for d, e, f (5, 4, 9) → 945
     */

    int ans = 0;
    int a = 6, b = 9, c = 6;

    ans = ans * 10 + a;
    ans = ans * 10 + b;
    ans = ans * 10 + c;
    cout << ans << endl;  // Output: 696

    // Reset and build another number
    ans = 0;
    int d = 5, e = 4, f = 9;

    ans = d * 1 + ans;
    ans = e * 10 + ans;
    ans = f * 100 + ans;
    cout << ans << endl;  // Output: 945

    // Convert decimal to binary representation
    int nums = 32;
    int reminder = 0;
    int j = 1;

    ans = 0;
    while (nums > 0)
    {
        reminder = nums % 2;
        nums = nums / 2;
        ans = reminder * j + ans;
        j = j * 10;
    }
    cout << ans << endl;  // Output: 100000

    // Convert binary to decimal
    int num2 = 10101011;
    int divider = 10;
    int rem = 0;
    int total = 0;
    int power = 1;

    while (num2 > 0)
    {
        rem = num2 % divider;
        num2 = num2 / divider;
        total = rem * power + total;
        power = power * 2;
    }
    cout << total << endl;  // Output: 171

    return 0;
}
