//Use set width manipulator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int d123=123;
    float f1=1.23;
    char ch='A';
    cout<<"demonstrate set width manipulation"<<endl;
    cout<<setw(5)<<d123<<endl;
    cout<<setw(5)<<f1<<endl;
    cout<<setw(5)<<ch<<endl;
    return 0;
}
