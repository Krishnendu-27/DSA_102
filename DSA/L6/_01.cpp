#include <iostream>
using namespace std;

int main() {
    // print 
    /*
    *****
    *****
    *****
    *****
    */ 
   for (int rows = 1; rows <=  5; rows++)
   {
    for (int colume = 1; colume <= 5; colume++)
    {
        cout << "*" << " ";
    }
    cout <<endl;
   }
   cout << endl;
    // print
    /*
   10 10 10 10 
   10 10 10 10 
   10 10 10 10 
   10 10 10 10  
    */      
   for (int  rows = 1; rows <= 4; rows++)
   {
    for (int colms = 1; colms <= 4; colms++)
    {
    cout << "10" << " ";
    }
    cout << endl;
    
   }
   cout << endl;
   // print 
   /*
  1 1 1 1 1 
  2 2 2 2 2 
  3 3 3 3 3 
  4 4 4 4 4 
  5 5 5 5 5 
   */
  for (int rows = 1; rows <= 5; rows++)
  {
    for (int i = 0; i < 5; i++)
    {
        cout << rows <<" ";
    }
    cout << endl;
  }
  cout << endl;
  // print
  /*
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  */
 for (int i = 0; i < 5; i++)
 {
    for (int j = 1; j <= 5; j++)
    {
        cout << j << ' ';
    }
    cout <<endl;
 }
 cout << endl;
 // task 
 /*
 5 4 3 2 1 
 5 4 3 2 1 
 5 4 3 2 1 
 5 4 3 2 1 
 5 4 3 2 1 
 */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 5; j >= 1; j--)
    {
        cout << j << ' ';
    }
    cout << endl;
  }
  cout <<endl;
 //   print 
 /*
 1 4 9 16 25 
 1 4 9 16 25 
 1 4 9 16 25 
 1 4 9 16 25 
 1 4 9 16 25 
 */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
       cout << j*j << ' ';
    }
    cout << endl;
  }
  cout <<endl;
 //   print 
 /*
 1 8 27 64 125 
 1 8 27 64 125 
 1 8 27 64 125 
 1 8 27 64 125 
 1 8 27 64 125 
 */
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
       cout << j*j*j << ' ';
    }
    cout << endl;
  }
  cout <<endl;
 //   print 
 /*
 a a a a a 
 b b b b b 
 c c c c c 
 d d d d d 
 e e e e e 
 */
char c = 'a';
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
       cout << c <<' ';
    }
    cout << endl;
    c = c+1;

  }
  cout <<endl;
 //   print 
 /*
 a b c d e 
 a b c d e 
 a b c d e 
 a b c d e 
 a b c d e 
 */
// notes so here its update each time in the j loop and after incress the value will again is a so its start agin from a to e
for (int i = 1; i <= 5; i++)
{
    char c1 = 'a';
    for (int j = 1; j <= 5; j++)
    {
        cout << c1 <<' ';
        c1++; 
    }
    cout << endl;
  }
  cout <<endl;
  //   other way
  // for (int i = 1; i <= 5; i++)
  // {
    //     for (char j = 'a'; j <= 'e'; j++)
    //     {
        //         cout << j << ' ';
        //     }
        //     cout << endl;
        // }
 // print 
 /*
 
 */
int j1 =1;
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= 5; j++)
    {
        cout <<  j1 << " ";
        j1 = j1+1;
    }
    cout << endl;
    
}
cout << endl;
// other way 
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= 5; j++)
    {
        cout << (i-1)*5+j << " ";
    }
    cout << endl;
    
}
return 0;
        
}