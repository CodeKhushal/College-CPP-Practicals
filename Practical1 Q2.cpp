// Q2:-Three ways to use constants.
#include<iostream>
using namespace std;
int main()
#define PI 3.14159
{
    const double pi=3.14159;
    cout<<"Defined constant Pi:"<<PI<<endl;
    cout<<"Memory constant Pi:"<<pi<<endl;
    cout<<"Literal constant Pi:"<<3.14159<<endl;
    return 0;
}
