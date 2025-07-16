/*
Day 5/180: For Loop in advance

    1. Print number from 280 to 250 with the help of for loop.
    2. Print char from ‘A’ to ‘Z’ with the help of a for loop.
    3. Print char from ‘Z’ to ‘A’ with the help of a for loop.
    4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    5. Print Sum of square of first n natural number.
    6. Print Sum of cube of first n natural number
    7. Print n’th Fibonacci number.
    */
   #include <iostream>
   using namespace std;
   
   int main() {
       // 1. Print number from 280 to 250 with the help of for loop.
       for (int i = 280; i >= 250; i--)
       {
           cout << i << " ";
        }
        cout << endl;
        // 2. Print char from ‘A’ to ‘Z’ with the help of a for loop.
        for (char i = 'A'; i <= 'Z'; i++)
        {
            cout << i << " ";
       }
        cout << endl;
        // 3. Print char from ‘Z’ to ‘A’ with the help of a for loop.
        for (char i = 'Z'; i >= 'A'; i--)
        {
            cout << i << " ";
        }
        cout << endl;
        // 4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
        for (int i = 220; i <= 730; i= i+7)
        {
            cout << i << " ";
        }
        cout << endl;
        // 5. Print Sum of square of first n natural number.
        int n, sum=0;
        cout << "enter a number: ";
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
           sum = sum + i*i;
        }
        cout << sum <<endl;
        cout << endl;
        // 6. Print Sum of cube of first n natural number
        int n2, sum2=0;
        cout << "enter a number: ";
        cin >> n2;
        for (int i = 0; i <= n2; i++)
        {
            sum2 = sum2 + i*i*i;
        }
        cout << sum2 <<endl;
        cout << endl;
        // 7. Print n’th Fibonacci number.
        int currenet , previous=1, last=0, temp,n3;
        cout << "enter a number: ";
        cin >> n3;
        for (int i = 2; i <= n3; i++)
        {
           currenet = previous + last;
           temp = previous;
           previous = currenet;
           last = temp;
        }
        cout << n3 << " fibonachi seris name is " << currenet;
    return 0;
}