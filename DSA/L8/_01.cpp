#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "enter the number: ";
    // cin >> n;
    // task
    /*
        *
       **
      ***
     ****
    *****
    */
   int n = 5;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5-i; ++j)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; ++k)
        {
          cout << "* ";
        }
        
        cout <<endl;
    }
    cout << endl;
    // task
    /*
            1 
          2 2 
        3 3 3 
      4 4 4 4 
    5 5 5 5 5 
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
           cout << "  ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << i <<" ";
        }
        cout << endl;
    }
    cout << endl;
    
    // task
    /*
          1 
        1 2 
      1 2 3 
    1 2 3 4 
  1 2 3 4 5 

    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k  <<" " ;
        }
        cout << endl;
    }
    cout << endl;
    
    // task
    /*
            A 
          A B 
        A B C 
      A B C D 
    A B C D E 
    */
   char c = 'A';
   for (int i = 1; i <= 5; i++)
   {
       for (int j = 1; j <= 5-i; j++)
       {
           cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << c << " ";
            c++;
        }
        c = 'A';
        cout << endl;  

    }
    cout << endl;
    
    // task
    /*
            5 
          5 4 
        5 4 3 
      5 4 3 2 
    5 4 3 2 1 
    */
   int num = 5;
   for (int i = 1; i <= 5; i++)
   {
       for (int j = 1; j <= 5-i; j++)
       {
           cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << num << " ";   
            num--;
        }
        cout << endl;
        num = 5;
    }
    cout << endl;
    // task
    /*
            5 
          5 4 
        5 4 3 
      5 4 3 2 
    5 4 3 2 1 
    */
   for (int i = 1; i <= 5; i++)
   {
       for (int j = 1; j <= 5-i; j++)
       {
           cout << " ";
        }
        for (int k = 1; k <= i; k++){
        
            cout << "* ";   
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
} 