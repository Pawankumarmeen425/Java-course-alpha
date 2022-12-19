# include <iostream>
using namespace std;
int main(){
    cout<<"hello World"<<endl;
    // We can make chain of the printing string in the cout
    cout<<"Next Line";
    //  Let's Unde̥rstand about variables
    int a,b,c;
    short d = 3;
    // Variables name must be start with alphbet or underscore, not with digit
    cout<<endl<<"Value store d is::"<<d;
    // camelCase Notation
    int marksInMaths=34;
    cout<<endl<<"The marks of the student in the maths is::"<<marksInMaths;
    // VS code understand the camelCase Notation . If we type 'mim' it will take automatically marksInMaths

    short x;
    int y;
    long z;
    long long p;
    // short<int<long<long long
float score = 433.43;
double score2=324.35;
long double score3 =234234.34;
// float<double<long double

score = 455.43;
// We can reinitilize variable value
// If we don't wnat to reinitilize the vlaue of the variable value in that case we must use const keyword before variable
int const val =34;



    return 0;
}