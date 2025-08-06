#include <iostream>
using namespace std;

int main() {
    // 1 way to  store a array
    int a[5] = {1,2,3,4,5};
    // 2 way to store array 
    int b[]= {1,2,3};
    // 3 way to store in array
    int c[2];
    for (int i = 0; i <= 2; i++)
    {
        cin >> c[i];
    }
    // 4 way to store
    int d[3] = {0}; // hear all 3 spece contain 0 this only valid for 0 not any other integer
    // how to find the adress of a array 
    // adress = arrayname + index what you want to acesss * size of data type

    int e[5] = {5, 3, 4, 5 , 2 };  // declare an array of 5 integers
    int *address = e + 3 *4;  // move 2 positions ahead to get the address of e[2]
    cout << "Address of e[2]: " << address << endl;  
    int ans = __INT_MAX__;
    for (int i = 0; i < 5; i++)
    {
    if (ans > e[i])
    {
       ans = e[i];
    }
}
cout << ans <<endl;
    int ans1 = e[0];
    for (int i = 0; i < 5; i++)
    {
    if (ans1 < e[i])
    {
       ans1 = e[i];
    }
}
cout << ans1 <<endl;

    
    return 0;
}