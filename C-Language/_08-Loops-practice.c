// print the odd number with increment ,
//  if else
/*
#include <stdio.h>

int main() {
  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 != 0)
    {
        printf("%d " , i);
    }
    
  }
  
  return 0;
}
*/
// increment
/*
#include <stdio.h>

int main() {
  for (int i = 1; i < 100; i= i+2)
  {
   printf("%d " , i)
  }
  
  return 0;
}
*/
// print table of 19 

/*
#include <stdio.h>

int main() {
    int j = 19;
  for (int i = 1; i <= 10; i++)
  {
    printf("%d " , j*i);
  }
  
  return 0;
}
*/

// print ap till n treems like 4 7 10 13 16 19 22 25 28 31 34

/*
#include <stdio.h>

int main() {
    int n ,f , l;
    // printf("print first num: ");
    // scanf("%d" , &f);
    // printf("print last num: ");
    // scanf("%d" , &l);
    printf("print n number: ");
    scanf("%d" , &n);
  for (int i = 4; i <= 3*n-1; i= i+3)
  {
    printf("%d ", i);
  }
  
  return 0;
}
*/
// print 2 4 8 16 32 64 like this
/*
#include <stdio.h>

int main() {
    int j = 2;
    int n = 10;
  for (int i = 1; i <= n; i++)
  {
      printf("%d " , j);
      j = j*2;
  }
  return 0;
}
*/
// print 3 12 48 192 768
/*
#include <stdio.h>

int main() {
    int j = 3;
    int n = 10;
  for (int i = 1; i <= n; i++)
  {
      printf("%d " , j);
      j = j*4;
  }
  return 0;
}
*/
// write a programe that prime or not

#include <stdio.h>

int main() {
  int n = 50;
for (int i = 2; i <= n; i++)
{
    int isprime = 1;
   for (int j = 2; j < n/2; j++)
   {
    if (i%j == 0)
    {
        isprime = 0;
        break;
    }
    
   }
   if (isprime == 1)
   {
    printf("%d is a prime number\n",i );
   }
   
}
  return 0;
}

