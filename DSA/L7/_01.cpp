#include <iostream>
using namespace std;

int main() {
    // task 
    /*
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    */ 
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 1; j <= i; j++)
    {
        cout << "*" << " ";
    }
    cout <<endl;
}
    cout <<endl;
   
    //task
    /*
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    */
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 1; j <= i; j++)
    {
        cout << j << " ";
    }
    cout <<endl;
   }
   cout << endl;
    //task
    /*
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5   
    */
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 1; j <= i; j++)
    {
        cout << i << " ";
    }
    cout <<endl;
    }
    cout << endl;
    //task 
    /*
    1 
    2 1 
    3 2 1 
    4 3 2 1 
    5 4 3 2 1 
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1 ; j--)
        {
            cout << j << " ";
        }
        cout <<endl;  
    }
    cout <<endl;
    
    //task 
    /*
    A 
    B B 
    C C C 
    D D D D 
    E E E E E 
    */
   char a = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << a << " ";
        }
        a = a+1;
        cout <<endl;  
    }
    cout <<endl;
    //task 
    /*
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >=i; j--)
        {
           cout << "*" << " ";
        }
        cout <<endl;
    }
    cout <<endl;
    // optimize way 
    /*
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */
   //task 
   /*
    5 
    5 4 
    5 4 3 
    5 4 3 2 
    5 4 3 2 1 
   */
   for (int i = 5; i >= 1; i--)
   {
       for (int j = 5; j >=i; j--)
       {
        cout << j << " ";
       }
       cout <<endl;
   }
   cout <<endl;
   
   return 0;
}