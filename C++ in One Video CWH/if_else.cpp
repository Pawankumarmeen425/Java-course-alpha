#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your age." << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You can Vote"<< endl;
    }
    else if (age > 100)
    {
        cout << "Invalid Age"<< endl;
    }
    else
    {
        cout << "You can't Vote"<< endl;
    }
    /*Instruction are excute in the same order in which they are written so else if work never . Because for  above 100 age if condition also flase so not check next condition and control comes next instruction */
    // So conditional statement are written in the sequentially.
    switch (age)
    {
    case 13:
        cout << "You are 13 years Old::";
        break;
    case 23:
        cout << "You are 23 years Old::";
        break;
    case 21:
        cout << "You are 21 years Old::";
        break;
    default:
    cout<<"You are not 12,21 and 23 year old::";
        break;
    }
    return 0;
}