#include <iostream>
using namespace std;

int main() {
    // while loop boilerplate
    /*
    while (condition)
    {
        // code 
        // increment
        }
        */
       // do a table by for loop
    int num;
    cout << "enter a number: ";
    cin >> num;
    int i = 1;
    while (i <= 10)
    {
        cout << num << " * " << i << " = " << num*i <<endl; 
        i++;
    }
    // print all the factor of a given number
    int num2;
    cout << "enter a number: ";
    cin >> num2;
    int i2 = 1;
    while (i2 <= num2)
    {
        if (num2 % i2 == 0)
        {
            cout << num2 << " is divisable by " << i2 <<endl;
        }
        i2++;
    }
    // print odd even in the range
    int num3;
    cout << "enter a number: ";
    cin >> num3;
    int i3 = 1;
    while (i3 <= num3)
    {
        if (i3 % 2 == 0)
        {
            cout << i3 << " is a EVEN number " <<endl;
        }
        else
        {
            cout << i3 << " is a ODD number " <<endl;
        }
        i3++;
    }
    // Do while loop syntax
    /*
    do
    {
        // code 
        // increment
        } while (condition);
        */
   // sum of N number in Do while
   int num4;
   cout << "enter a number: ";
   cin >> num4;
   int i4 = 1 , sum = 0;
   do
   {
    sum = sum + i4;
    i4++;
   } while (i4<=num4);
   cout << sum <<endl;
    // break & continue
    // so when we need to stop a loop in a certain condition we use break and if we want to make the loop continue in a certain condition we use continue
    //    print 1 to 100 dont print after 73 
    for (int i = 1; i <= 50; i++)
    {
        if (i == 7)
        {
            break;
        }
        cout << i << " ";
    }
    cout <<endl;
    // print odd number by contunie
    for (int i = 1; i <= 50; i++)
    {

        if (i%2==0)
        {
            continue;
        }
        cout << i << " ";
    }
    // swtich // it dont allow float and double to use as case but we can use char and number for case
    int i5 = 67;
    switch (i5)
    {
    case 65:
        cout << "A";
        break;
    
    case 66:
        cout << "B";
        break;
    
    case 67:
        cout << "C";
        break;
    
    case 68:
        cout << "D";
        break;
    
    default:
        cout << "enter right case no "; 
        break;
    }
    // scope of a varibale
    /*
    mens what ever variable creat its life span will be only in thhat scope ans we can not declare same varible in same scope but we can declare them their child scope
    */
   int b = 68;
   cout <<b <<endl;
   int i9 = 66;
   if ( i9 == 66)
   {
    int b = 45;
    cout <<b;
   }
   
   return 0;
}