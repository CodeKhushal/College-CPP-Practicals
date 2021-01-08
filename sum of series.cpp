//Program to print sum of series 1+1/2+1/3+1/4+1/5+1/6+1/7+1/8+1/9+.............................
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
