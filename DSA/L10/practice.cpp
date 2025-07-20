/*
             Day 12/180 Operator in C++

1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

5: What will be the result below according to the precedence table.

•     2*3-48==5/4*6
•     6<<2-4*8/2
•     5>4<3/2-8%4+5
•     14-8+92>>2+70

*/
#include <iostream>
using namespace std;

int main() {
    // 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 
     int temp = 69;
     if (temp>= 70 &&  temp <=  90)
     {
        cout << "YES" <<endl;
    }
    else
    {
    cout << "NO" <<endl;
}
// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
int num = 53;
if (num >0 && num%2 == 0    )
{
    cout << "YES " <<endl;
}
else
{
    cout << "NO" <<endl;
}
// 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

int age = 15;

if (age >= 13 && age <= 19)
{
    cout << "Teenager" <<endl;
}
else
{
    cout << "NOt a teenager" <<endl;
}

// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
int a,b,c;
cin >> a;
cin >> b;
cin >> c;
if (a>b && a>c)
{
    cout <<"YES"<<endl;
}
else
{
    cout <<"NO"<<endl;
}
/*
5: What will be the result below according to the precedence table.

•     2*3-48==5/4*6      
 -->  6 - 48==6
      42==6
      0
•     6<<2-4*8/2
-->   6<<2-32/2
     6<<2-16
     6<<14
     negative
•     5>4<3/2-8%4+5
•     14-8+92>>2+70
*/
int x =  2*3-48==5/4*6;
cout << x <<endl;
// int y =   6<<2-4*8/2;
// cout << y <<endl;
int z =  5>4<3/2-8%4+5; //1
cout << z <<endl;

return 0;
}