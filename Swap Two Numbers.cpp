#include <iostream>

using namespace std;

int main()
{
    int a = 10; //first variable
    int b = 20; //second variable

    //before swapping
    cout<<"NUMBERS BEFORE SWAPPING : ";
    cout << a << endl;
    cout << b << endl;

    //swap without third variable using EXOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    //after swapping
    cout<<"NUMBERS AFTER SWAPPING : ";
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}