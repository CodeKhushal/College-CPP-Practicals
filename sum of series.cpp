#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cout<<"Enter an integer upto which you want to find sum:  ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=float(1)/float(i);
    }
    cout<<"Sum is:  "<<sum;
    return 0;
}
