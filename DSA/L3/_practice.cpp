/* Question
Day 3/180 Introduction to c++

    • Print number
    1. Two numbers are given, print their product
    2. Two numbers are given a and b, print a-b
    3. Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
    4. If we have only 4 bits, How 3 and -6 will be written in 4 bits.
    5. If we have only 5 bits, How 13 and -16 will be written in 5 bits.
    
    */
   
   #include <iostream>
   using namespace std;
   
   int main() {
       //    1. Two numbers are given, print their product
       int a = 50 ,  b = 90;
       cout << a+b << endl;
       
       //    2. Two numbers are given a and b, print a-b
       cout << a-b << endl;
       
       //    3. Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
       cout << "6*3" << endl;
       
       //    4. If we have only 4 bits, How 3 and -6 will be written in 4 bits.
       /* ANSWER
       3 store in binary 0 1 1 
       -6 store in binary 0 0 1
       */
      
      //    5. If we have only 5 bits, How 13 and -16 will be written in 5 bits.
      /* ANSWER
      13 store in binary 0 1 1 0 1
      -16 store in binary 0 0 0 1 0
      */
    return 0;
}