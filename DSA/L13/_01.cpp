#include <iostream>
using namespace std;

int main() {
    // add two digit
int num = 75 , sum = 0 , rem = 0;
while(num > 9)
{
    sum = 0 , rem = 0;
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        sum = sum + rem;
    }
    num = sum;
}
cout << sum <<endl;
    // leap year
int year = 1600;
    if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
    {
        cout << true;
    }else {
    cout << "normal  year";
}
//  power of n
cout <<endl;
cout <<endl;
int n = 24 , flag = 0;
    for (int i = 0; i <= n; i = i*2)
    {

        if (i == n )
        {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }
    cout << flag;
    
return 0;
}