#include <iostream>
using namespace std;

int main() {
//     // task 1 print A to Z using loop
//     char a  =  'A';
//     for (int i = 65; i <= 90; i++)
//     {
//         cout << a <<endl;
//         a++;

//     }
//     // task 2 reverse the number
//     int b = 10;
//     for (int i = b; i >= 1; i--)
//     {
//         cout << i <<endl;
//     }
//     //  task 3 print 1 to 100 in 1 ,4 ,7 ,10 ,13 format
//     b = 100;
//     for (int i = 1; i <= b; i= i+3)
//     {
//        cout << i << endl;
//     }
//     // task 4 print n table
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= 10; i++)
//     {
//        cout << n << " * " << i << " = " <<  n*i <<endl;
//     }
//     // task 5 print a number power
//     int num,power,resultt = 1;
//     cout << "enter the number: ";
//     cin >> num;
//     cout << "enter the power: ";
//     cin >> power;
//     for (int i = 1; i <= power; i++)
//     {
//         resultt = resultt * num;
//     }
//     cout << "the power of " << num << " is " << resultt << endl;

//     // task 6 sum of natural number
//     int natarulnumber, sum = 0;
//     cout <<"enter the number: ";
//     cin >> natarulnumber;
//     for (int i = 1; i <= natarulnumber; i++)
//     {
//         sum = sum + i;
//     }
//     cout << "the sum of 1 to " <<  natarulnumber << " number is " << sum <<endl;
    
//     // task 7 sum of 1 to 10 square
//     int sum2= 0, square2 = 1;
//     for (int i = 1; i <= 10; i++)
//     {
//         square2 = i*i;
//         sum2 = sum2 +square2;
//         // optimize solution : sum = sum + i*i 
//     }
//     cout << "the sum of square of 1 to 10 "<< " number is " << sum2 <<endl;
//     //  task 8 factorial of 1 to 5
//     int fact =1;
//     for (int i = 1; i <= 5; i++)
//     {
//         fact = fact*i;
//     }
//     cout << "factorial of 1 to 5 is "  << fact;
//    //  task 9 tell the number is prime or not in a given range
    // int prime =1 , nt= 9;
    // for (int i = 2; i <= nt/2; i++)
    // {
    //     if (nt%i ==0)
    //     {
    //        prime = 0;
    //        break;
    //     }
    //     else
    //     {
    //         prime = 1;
    //     }
    // }
    // if (prime == 1)
    // {
    //     cout << nt << "is a prime number";
    // }
    // else
    // {
    //     cout << nt << "is a NOT prime number";
    // }
    // task 10 prime number in a range
    // int prime2 = 0, range = 50;
    // for (int i = 2; i <= range; i++)
    // {
    //    for (int j = 2; j < i/2; j++)
    //    {
    //     if (i % j ==0)
    //     {
    //         prime2 =0;
    //         break;
    //     }
    //     else
    //     {
    //         prime2 = 1;
    //     }
    // }
    // if (prime2 == 1)
    // {
    //     cout << i << "is prime" <<endl;
    // }
    
       
    // }
    
// task 11 print fibonachi number in a range
/* code */
int nums = 10;
int last = 0, current = 0, previous = 1, temp;

for (int i = 2; i < nums; i++)
{
    current = last + previous;
    temp = previous; // 1 , 
    previous = current; // 1
    last = temp; // 1
    cout << i << " = "<< current <<endl;
}
    return 0;
}