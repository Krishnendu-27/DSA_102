/*
Day 18/180 Function in C++

1: Find the cube of a number using Function.
2: Reverse a number n using Function, Constraints: -5000<=n<=5000
3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.
5: Print “Hello Coder Army” n times using Function.
6: Given two numbers n, r. Find nCr (Combination). Use Function here.
*/

#include <iostream>

using namespace std;

int cube(int n)
{
    return n * n * n;
}

int reverse(int n)
{
    int rev = 0, temp;
    while (n != 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    return rev;
}

void swap(int &a, int &b, int &c)
{
    int temp, temp2;
    temp = b;
    b = a;
    temp2 = c;
    c = temp;
    a = temp2;
}

void swap2(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void prints(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " Hello Coder Army" << endl;
    }
}

int nCr(int n, int r)
{
    int fact1 = 1, fact2 = 1, fact3 = 1, result = 0;
    for (int i = 1; i <= n; i++)
    {
        fact1 *= i;
    }
    for (int i = 1; i <= r; i++)
    {
        fact2 *= i;
    }
    int temp = n - r;

    for (int i = 1; i <= temp; i++)
    {
        fact3 *= i;
    }

    return result = fact1 / (fact2 * fact3);
}

int main()
{
    // 1: Find the cube of a number using Function.
    cout << "cube of " << 5 << " is " << cube(5) << endl;

    // 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
    int a1 = 123;
    cout << a1 << " reversed form is " << reverse(a1) << endl;

    /* 3: There are three numbers a,b,c.
       Put the value of a into b,
       put value of b into c and
       put value of c into a.
       Do it using Function.
    */
    int a = 5, b = 6, c = 9;
    cout << " a , b , c value is " << a << b << c << endl;
    swap(a, b, c);
    cout << " a , b , c value is " << a << b << c << endl;

    // 4: Swap 2 numbers a, b without using extra variables.
    // Range of -10000<=a,b<=100000.
    int d = 42, e = 99;
    cout << " d , e value is " << d << " " << e << " " << endl;
    swap2(d, e);
    cout << " d , e value is " << d << " " << e << " " << endl;

    // 5: Print “Hello Coder Army” n times using Function.
    int n2 = 20;
    prints(n2);

    // 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
    int n = 5, r = 2;
    cout << "ncr of" << n << r << " is " << nCr(n, r);

    return 0;
}
