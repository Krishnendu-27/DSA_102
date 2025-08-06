/*
1: Take 20 elements from user input and find its sum with the help of an array. 

2: Calculate the average of elements in an array of size 18.

3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

5: Find the second largest element in an array of unique elements of size n. Where n>3.

6: Find the third smallest element in an array of unique elements size n. Where n>3.

7: What is Byte addressable?
*/

#include <iostream>
using namespace std;

int main() {
    // 1: Take 20 elements from user input and find its sum with the help of an array.
    int sum = 0;
    int arr1[20] = {1,2,3,4,5,6,7,8,9,1,0,10,15,16,17,18,19,15};
    for (int i = 0; i < 20; i++)
    {
        sum += arr1[i];
    }
    cout << sum <<endl;
    
    // 2: Calculate the average of elements in an array of size 18.
    int avg = 1;
    
    for (int i = 0; i < 20; i++)
    {
        avg = sum / 20;
    }
    cout << avg <<endl;
    
    // 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
    int find = 5;
    int count = 0;
    for (int  i = 0; i < 20; i++)
    {
        if (arr1[i] == 5)
        {
            count  = arr1[i];
            break;
        }
        
    }
    count = count - 1;
    if (count > 0)
    {
        cout << count <<endl;
    }
    else {
        cout << "-1" <<endl;
    }
    // 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
    char alphabet[26] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g',
    'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u',
    'v', 'w', 'x', 'y', 'z'
};
for (int i = 0; i < 26; i++)
{
    cout << alphabet[i] << " ";
}

    // 5: Find the second largest element in an array of unique elements of size n. Where n>3.
    int arr2[5] = {1,2,3,4,5};
    // int max = 0;
    for (int i = 0; i < 5; i++)
    {   
       
    }
    
    return 0;
}