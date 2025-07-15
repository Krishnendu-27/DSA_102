/*
Day 4/180 If-Else and For Loop


    • If-else
    1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
    2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
    3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
    4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
    
    •  For Loop
    1. Print “India will win the World Cup 2023”, 20 times.
    2. Print all Odd numbers from 1 to n, take n as an input from the user.
    3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
    
    */
   
   #include <iostream>
   using namespace std;
   
   int main() {
       // 1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
       int a,b;
       cout << "Enter the first number : ";
       cin >> a;
       cout << "Enter the scoend number : ";
       cin >> b;
       if (a>=b)
       {
           cout << " a is "  << a << " and " << "b is " <<  b << "so  a is bigger" << endl;
        }
        else if (a==b)
        {
            cout << " a is "  << a << " and " << "b is " << b  << " so  a and b is equal" << endl;
        }
        else
        {
            cout << " a is "  << a << " and " << "b is " << b  << " so  b is bigger" << endl;
        }
        
        // 2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
        int age;
        cout << "ENter your age";
        cin >> age;
        if (age >= 18 )
        {
            cout << "you are a adult" << endl;
        }
        else 
        {
            cout << "you are a Teenager" << endl;
        }
        
        // 3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
        int monthNum;
        cout << "Give the month num: ";
        cin >> monthNum;
        if (monthNum==1)
        {
            cout << "january";
        }
        else if (monthNum == 2)
        {
            cout << " febuary";
        }
        else if (monthNum == 3)
        {
            cout << " march";
        }
        else if (monthNum == 4)
        {
            cout << " april";
        }
        else if (monthNum == 5)
        {
            cout << " may";
        }
        else if (monthNum == 6)
        {
            cout << " june";
        }
        else if (monthNum == 7)
        {
            cout << " july";
        }
        else if (monthNum == 8)
        {
            cout << " aughest";
        }
        else if (monthNum == 9)
        {
            cout << " september";
        }
        else if (monthNum == 10)
        {
            cout << " october";
        }
        else if (monthNum == 11)
        {
            cout << " november";
        }
        else if (monthNum == 12)
        {
            cout << " December";
        }
        else
        {
            cout << "Please enter the correct number";
        }
        
        // 4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
        
        if (age>=12 || age<= 65)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
        //                                                 LOOPS
        // 1. Print “India will win the World Cup 2023”, 20 times.
        
        for (int i = 0; i <= 20; i++)
        {
            cout << "India will win the World Cup 2023" <<endl;
        }
        
        // 2. Print all Odd numbers from 1 to n, take n as an input from the user.
        int n ;
        cout << "enter the number ";
        cin >> n;
        for (int i = 1; i <= n; i= i+2)
        {
           cout << i << endl;
        }
        
        // 3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
        for (int i = 0; i <= n; i++)
        {
            if (i%4==0)
            {
                cout << i;
            }
            
        }
        
        return 0;
    }
    