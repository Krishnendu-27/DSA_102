/*
  Day 16/180 Binary to Decimal Conversion

    • Write a program to convert binary numbers to decimal numbers using a for loop.
    • Write a program to convert decimal numbers to binary numbers using a for loop.
    • Write a program to convert decimal numbers to Octal numbers.
    • Write a program to convert Octal numbers to decimal numbers.
    • Write a program to convert binary to Octal numbers
    • Write a program to convert Octal numbers to binary numbers
    
    */
   #include <iostream>
   using namespace std;
   
   int main() {
       // • Write a program to convert binary numbers to decimal numbers using a for loop.
       int num1 = 1010 , rem=0 , power=1 , total=0; 
       /* my approch 
       for (int i = num1; i > 0; i++)
       {
        rem = num1%2;
        num1 = num1/10;
        total = rem * power + total;
        power *= 2;
        }
        */
       /* More optimize metoed */
       
       for (; num1 > 0; num1 /= 10) {
           rem = num1 % 10;
           total += rem * power;
           power *= 2;
          }
        cout << total <<endl;
        
        // • Write a program to convert decimal numbers to binary numbers using a for loop.

        int num2 = 5, rem2 = 0 ,power2 = 1, total2=0;
        for(; num2>0 ; num2 /= 2)
        {
          rem2 = num2%2;
          total2 = rem2*power2 + total2;
          power2 = power2 * 10;
          
        }
        cout << total2 <<endl;
        
        // • Write a program to convert decimal numbers to Octal numbers.         
        int num3 = 13, rem3 = 0 ,power3 = 1, total3=0;
        while (num3>0)
        {
          rem3 = num3%8;
          num3 = num3/8;
          total3 = rem3*power3 + total3;
          power3 *= 10;
        }
        cout << total3 <<endl;
      
        // • Write a program to convert Octal numbers to decimal numbers.

        int num4 = 15, rem4 = 0 ,power4 = 1, total4=0;
        while (num4>0)
        {
          rem4 = num4 % 10;
          num4 = num4/10;
          total4 += power4 * rem4;
          power4*=8;
        }
        cout << total4<<endl;
        
        return 0;
    }