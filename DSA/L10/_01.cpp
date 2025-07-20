#include <iostream>
using namespace std;

int main() {
    //                      arthmetic operator 
    cout << 11/5 <<endl; 
    cout << 18.2/5 <<endl; 
    cout << 16/554.251 <<endl; 
    int a = 10;
    cout << a++ <<endl; 
    cout << a <<endl; 
    int c = 52;
    int b = --c;
    cout << b <<endl;
    //                      compariosn operator
    int g = a==c;
    int d = 11;
    int x = d==a;
    cout << g << endl;  // its return 0 mens is fales
    cout << x << endl;  // its return 1 mens is true 
    int y = 5<6;
    int w = 5>2;
    cout << y <<endl; // it give return true becuase 6 is greter then 5 
    cout << y <<endl; // it give return true becuase 5 is greter then 2
    int o = 6>3>9; // it gies left to right its his prission
    cout << o <<endl; // it give 0 beacuse 
                        /*
                        6>3 == 1
                        1>9 == 0 
                        // so the answer is 0
                        */ 
    int j = 5!= 6;
    cout <<j <<endl; // becuse it true that 5 is not == to 6 that why it give 1
    // its associative are 
    // {>,< , >= , <= }  > { == , !=} 
    
    //                  logical operator
    // AND &&  (both need to true)
    // OR ||  (one og condition need true)
    // NOT !  (reverse the number )
    /*
    use simple logic gates 
    */
   int year = 523;
   if ( year % 4 == 0 &&  year %400 == 0)
   {
    cout << "its a leap year" <<endl;;
   }
   else {
    cout << "its not a leap year" <<endl;;
   }

   char l = 'u';
   if (l == 'a' ||l == 'e' ||l == 'i' ||l == 'o' ||l == 'u' )
   {
    cout << "Its a voule" <<endl;;
    }
    else 
    {
    cout << "Its a consonant" <<endl;;
    }
    //                  Bitwise operator
    /*
    itwise AND (&): This operator returns 1 if both corresponding bits are 1; otherwise, it returns 0.
C++

    int result = 5 & 3; // 5 (0101) & 3 (0011) = 1 (0001)
Bitwise OR (|): This operator returns 1 if at least one of the corresponding bits is 1; otherwise, it returns 0. 
C++

    int result = 5 | 3; // 5 (0101) | 3 (0011) = 7 (0111)
Bitwise XOR (^): This operator returns 1 if the corresponding bits are different (one is 0 and the other is 1); otherwise, it returns 0.
C++

    int result = 5 ^ 3; // 5 (0101) ^ 3 (0011) = 6 (0110)
Bitwise NOT (~): This is a unary operator that inverts all the bits of its operand. For signed integers, this operation results in the two's complement of the original number minus one.
C++

    int result = ~5; // ~5 (0101) = -6 (in 2's complement representation)
Left Shift (<<): This operator shifts the bits of the left operand to the left by the number of positions specified by the right operand. Zeroes are filled in on the right. This effectively multiplies the number by powers of 2.
C++

    int result = 5 << 2; // 5 (0101) shifted left by 2 = 20 (10100)
Right Shift (>>): This operator shifts the bits of the left operand to the right by the number of positions specified by the right operand. For unsigned integers, zeroes are filled in on the left. For signed integers, the behavior (arithmetic or logical shift) can be implementation-defined for negative numbers, but typically involves sign extension. This effectively divides the number by powers of 2.
C++
in c++ -5 << 2  its not define any rule so each compiler give there own answer

    int result = 5 >> 1; // 5 (0101) shifted right by 1 = 2 (0010)
    
    */
    int result = 5 & 3;
    cout << result;

    return 0;
}