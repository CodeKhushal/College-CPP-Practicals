#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:  ";
    cin>>n;
    for(int i=1;i<=n;i++)      //for each line
    {
        for(int j=1;j<=(n-i);j++)     //for printing spaces
            cout<<' ';
        for(int k=1;k<=(2*i-1);k++)     //print stars
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
