#include <stdio.h>

int main() {
    // its follow 4 step
    /*
    1. check
    2. work
    3. increment or decrement
    4. repet
    initialization , condition , increment 
    */
   // loops example 
   /*
  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n" , i);
  }
  */
 for (int i = 2; i <= 100; i = i+2) // its more efficient
 {
    // if (i%2 == 0 )
    // {
    //     printf("%d ", i );
    // }
    printf("%d " , i);
 }
 
  return 0;
}