/*
   Day 15/180 While, do While , Switch c++

1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

2: Find the factorial of a number n using a while loop and do a while loop.

3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

*/
#include <iostream>
using namespace std;

int main() {
    // 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
    int num;
    cout << "enter a number: ";
    cin >> num;
    int i = 0;
    while (i<= num)
    {
        cout << i << " ";
        i = i+2;
    }
    cout <<endl;
    int num2;
    cout << "enter a number: ";
    cin >> num2;
    int i2 = 0;
    do{
        cout << i2 << " ";
        i2 = i2+2;
    }
    while (i2<= num2);
    cout <<endl;
    
    // 2: Find the factorial of a number n using a while loop and do a while loop.    
    int num3 , fact = 1;
    cout << "enter a number: ";
    cin >> num3;
    int i3 = 1;
    while (i3<= num3)
    {
        fact = fact * i3;
        i3++;
    }
    cout <<fact <<endl;
    
    int num4 , fact2 = 1;
    cout << "enter a number: ";
    cin >> num4;
    int i4 = 1;
    do{
        fact2 = fact2 * i4;
        i4++;
    }while (i4<= num4);
    cout <<fact2 <<endl;
    cout <<endl;
    // 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
    int num5;
    cout << "enter a number: ";
    cin >> num5;
    for (int i = 1; i <= num5; i++)
    {
        if (i%3 == 0 && i%5 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout <<endl;
    // 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
    int monthnum;
    cout << "enter a month: ";
    cin >> monthnum;
    switch (monthnum)
    {
        case 1:
        cout << "Jan";
        break;
        case 2:
        cout << "Feb";
        break;
        case 3:
        cout << "March";
        break;
        case 4:
        cout << "April";
        break;
        case 5:
        cout << "May";
        break;
        case 6:
        cout << "June";
        break;
        case 7:
        cout << "July";
        break;
        case 8:
        cout << "Aughest";
        break;
        case 9:
        cout << "Sep";
        break;
        case 10:
        cout << "Oct";
        break;
        case 11:
        cout << "November";
        break;
        case 12:
        cout << "December";
        break;
        default:
        cout << "enter the correct month";
        break;
    }
    cout <<endl;
    // 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
    char a = 'z';
    char i6 = 'A';
    while (i6 <= a)
    {
        
        cout << i6 << " ";
        i6++;        
    }
    cout << endl;
    // 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
    int nums , prime = 1, i7 = 2;
    cout << "enter a number: ";
    cin >> nums;
    if (nums <=0)
    {
        return 0;
    }
    while (i7 <= nums/2)
    {
        if (nums%i7 == 0)
        {
            prime = 0;
            break;
        }
        i7++;
    }
    
        if(prime == 0)
        {
            cout << nums << " is a prime number";
        }
        else 
        {
            cout << nums << " is a NOT prime number";
        }
    
    
    return 0;
}