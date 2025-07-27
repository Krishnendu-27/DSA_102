#include <iostream>
using namespace std;

bool isprime(int n ){
    if (n<2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
        
    }
    
    return true;
    
}
int factorial (int n ) {
    int fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int sum (int a , int b) {
    return a+b;
}

// pass by value 
// example so here n creat a copy of the a so its not increment. 


void incre(int n)
{
    n++;
}
int printa (int a){
    incre(a);
 return a;
}
// pass by reference 
// here the n act as the real a for that we need to add `&` in fromt of varibale
void decree(int &n)
{
    n--;
}
int printb (int b){
    decree(b);
 return b;
}


int main() {
    cout << printa(6)<<endl;
    cout << printb(6)<<endl;
    // functione example in prime
    if (isprime(9))
    {   
        cout << "this is a prime number" <<endl;
    }
    else {
       cout << "its not a prime number" <<endl;
    }

    cout << factorial(5) << endl;
    int a = 65 ,b= 68 , c= 9 ,d = 81;
    int g = sum(a,b);
    cout << "result 1 " << g <<endl;
    int h = sum(c,d);
    cout << "result 2 " << h <<endl;
    int i = sum(g,h);
    cout << "result 2 " << i <<endl;

    return 0;
}
