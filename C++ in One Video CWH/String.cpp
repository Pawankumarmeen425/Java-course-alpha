#include <iostream>
#include<string>
using namespace std;
int main(){

string name = "Pawan";
cout<<"The name is::"<<name<<endl;
cout<<"The Lenght of the  name is::"<<name.length()<<endl;
cout<<"The name is::"<<name.substr(0,3)<<endl;
// This will start from 0 substrat and goes to 3 substrat after 0
cout<<"The name is::"<<name.substr(2,3)<<endl;
// This will start from 2 substrat and goes to 3 substrat after 2 substrat
    return 0;

}