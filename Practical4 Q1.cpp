//Code fragment assuming x and y as integer variable and z as float-point.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float z;
    cout<<"Enter x and y \t";
    cin>>x>>y;
    if(x>0)
    {
        if(y>0)
        {
            z=x;
            y=x+1;
        }
        else
        {
            z=y;
        }
        z=x+1;
    }
    else
    {
        y=x-1;
        z=2*x;
    }
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z;
    return 0;
}
