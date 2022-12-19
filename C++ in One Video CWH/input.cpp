#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;

    cout<< "Sum of a and b = "<<a+b<< endl;
    cout<<"a+b is :: "<<a+b<< endl;
    cout<<"a-b is :: "<<a-b<< endl;
    cout<<"a*b is :: "<<a*b<< endl;
    cout<<"a/b is :: "<<a/b<< endl;
    // If we apply operation between int and int in that case result will be int
    // So for desired result we must typecast int into float then perform the operation
    cout<<"a/b is :: "<<(float)a/b<< endl;

    return 0;
}