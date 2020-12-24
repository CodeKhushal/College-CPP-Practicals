//Program to find the sum of the series of the form 1-2+3-4+5-6...........n
#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    sum=0;
    cout<<"Enter the last number of your series   ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
    }
    cout<<"Sum of series is   "<<sum;
    return 0;
}
