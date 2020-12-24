//Program to print the sum and product of the numbers.
#include<iostream>
using namespace std;
int main()
{
    int num,sum,pro;
    sum=0;
    pro=1;
    cout<<"Enter an integer   ";
    cin>>num;
    while(num!=0)
    {
        sum=sum+(num%10);
        pro=pro*(num%10);
        num=num/10;
    }
    cout<<"Sum is  "<<sum<<endl;
    cout<<"Product is  "<<pro;
    return 0;
}
