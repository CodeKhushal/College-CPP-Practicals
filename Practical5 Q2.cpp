//Program to reverse an integer.
#include<iostream>
using namespace std;
int main()
{
    int num,n_num,rem;
    n_num=0;
    cout<<"Enter an integer   ";
    cin>>num;
    cout<<endl;
    cout<<"You entered  "<<num<<endl;
    while(num!=0)
    {
        rem=num%10;
        n_num=n_num*10+rem;
        num=num/10;
    }
    cout<<"The reverse of your number is  "<<n_num;
    return 0;
}
