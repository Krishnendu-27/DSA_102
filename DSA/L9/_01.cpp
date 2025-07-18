#include <iostream>
using namespace std;

int main() {
    // task
    /*
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
    */ 
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 1; j <= 5-i; j++)
    {
        cout << "  ";
    }
    for (int k = 1; k <= (i*2)-1; k++)
    {
        cout << "* ";
    }
    cout <<endl;
   }
   cout <<endl;
    // task
    /*
            1 
          1 2 1 
        1 2 3 2 1 
      1 2 3 4 3 2 1 
    1 2 3 4 5 4 3 2 1 
    */ 
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 1; j <= 5-i; j++)
    {
        cout << "  ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout << k <<" ";
    }
    for (int l = i-1; l >= 1 ; l--)
    {
        cout << l << " ";
    }
    
    cout << endl;
   }
   cout << endl; 
    // task
    /*
            1 
          1 2 1 
        1 2 3 2 1 
      1 2 3 4 3 2 1 
    1 2 3 4 5 4 3 2 1 
    */ 
   int c= 5;
   for (int rows = 1; rows <= 5; rows++)
   {
     for (int cols2 = 1; cols2 <= rows-1; cols2++)
     {
       cout << " ";
     }
      for (int cols1 = c*2-1; cols1 >= 1 ; cols1--)
      {
          cout << "*";
      }
      c--;
    cout << endl;
   }
   
   
    // task
    /*
    * * * * * * * * 
    * * *     * * * 
    * *         * * 
    *             * 
    *             * 
    * *         * * 
    * * *     * * * 
    * * * * * * * * 
    */ 
   
   for (int rows = 4; rows >= 1; rows--)
   {
    for (int  cols1 = 1; cols1 <= rows; cols1++)
    {
     cout << "* ";
    }
    for (int  cols1 = 1; cols1 <= 8-(2*rows); cols1++)
    {
     cout << "  ";
    }
    for (int cols2  = 1; cols2 <= rows; cols2++)
    {
      cout << "* ";
    }
    cout <<endl;
  }
  for (int rows = 1; rows <= 4; rows++)
  {
    for (int cols = 1; cols <= rows; cols++)
    {
      cout << "* ";
    }
    for (int  cols1 = 1; cols1 <= 8-(2*rows); cols1++)
    {
      cout << "  ";
    }
    for (int cols = 1; cols <= rows; cols++)
    {
      cout << "* ";
    }
    cout <<endl;
  }
  cout <<endl;
  
  //task
  /*
  *             * 
  * *         * * 
  * * *     * * * 
  * * * * * * * * 
  * * * * * * * * 
  * * *     * * * 
  * *         * * 
  *             * 
  */
 for (int rows = 1; rows <= 5; rows++)
 {
   for (int cols = 1; cols <= rows; cols++)
   {
     cout << "* ";
   }
   for (int  cols1 = 1; cols1 <= 10-(2*rows); cols1++)
   {
     cout << "  ";
    }
   for (int cols = 1; cols <= rows; cols++)
   {
     cout << "* ";
    }
   cout <<endl;
  }
  for (int rows = 5; rows >= 1; rows--)
  {
   for (int  cols1 = 1; cols1 <= rows; cols1++)
   {
    cout << "* ";
   }
   for (int  cols1 = 1; cols1 <= 10-(2*rows); cols1++)
   {
    cout << "  ";
   }
   for (int cols2  = 1; cols2 <= rows; cols2++)
   {
     cout << "* ";
   }
   cout <<endl;
  }
  cout <<endl;
  // task
  /*
  
  */
 for (int i = 1; i <= 4; i++)
 {
  for (int j = 1; j <= 4-i; j++)
  {
    cout << "  ";
  }
  for (int k = 1; k <= i; k++)
  {
    cout << " *  ";
  }
  cout <<endl;
 }
 for (int i = 3; i >= 1; i--)
 {
  for (int j = 4; j >= i+1; j--)
  {
    cout << "  ";
  }
  for (int k = 1; k <= i; k++)
  {
    cout << " *  ";
  }
  cout <<endl;
 }
 
  return 0;
}