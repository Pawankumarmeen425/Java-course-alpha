#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretpass = sp;
    }
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << endl;
    }
 void getsceretpass()
    {
        cout << "The Secret Password of the Employee is ::" << this->secretpass << endl;
    }
private:
    int secretpass;
   
};
int main()
{
    Employee a("Pawan Constructor", 234, 78775546);
    // a.name = "Pawan";
    // a.salary = 234;
    // cout << "The name of our first employee is " << a.name << " and his salary is " << a.salary << endl;

    a.printDetails();
    // We can print this way by decalring in the class
    // cout<<a.secretpass;  /*We can't access private variable like this way*/
    a.getsceretpass();



    /*    """"We can't access variable directly from the private mathod but by declare method in the public class we can access private method*/
    return 0;
}