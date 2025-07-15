#include <iostream>
using namespace std;

int main() {
    int a , b;
    // cin we take input form this it use '>>'
    // cin >> a;
    // cin >> b;
// other way doning it 
    // cin >> a >> b;
    //  we can take input by type enter after each value we give or we can use space and nest value both are correct
    // cout << a+b << endl;
    
    // typecasting
    int c = 65;
    cout << c << endl;
    char d = 'o';
    cout << d << endl;
    // d = c;
    // cout << d << endl; //  A 
    c= d;
    cout << c << endl; // 111

    int packeage;
    cout << "enter the package ammoumt: ";
    cin >> packeage;
    if (packeage>50)
    {
        cout << "accpted"<< endl;
    }
    else
    
        cout << "rejected"<< endl;
    // id there only one statemnet then we just write the thing without the {}
    
    // task 1 check voule or consonant
    cout << "enter a alphabate: ";
    char j;
    cin >> j;
    if (j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u'  )
    {
       cout << j << " is a vowel"<< endl;
    }
    else {
        cout << j << " is a consonant"<< endl;
    }

    //  loops 
    for (int i = 0; i < 5; i++)
    {
        cout << i <<endl;
    }
    // task 2 print 1 to 5 square

    for (int i = 1; i <= 5; i++)
    {
       cout << i << " suare is " << i*i << endl;
    }
    // tak 3 print all even number in a range
    int n = 60;
    for (int  i = 1; i <= n; i++)
    {
        if (n%2 == 0)
        {
            cout << i  << "is a even number" << endl;
        }
        
    }
    
    return 0;
}