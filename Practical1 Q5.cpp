//Swapping value of two variables using a third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the value of first variable:";
    cin>>x;
    cout<<"Enter the value of second variable:";
    cin>>y;
    cout<<"Values before swapping"<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"Values after swapping"<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    return 0;
}
