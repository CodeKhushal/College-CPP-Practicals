//Program to print factors of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to know it's factors   ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    return 0;
}
