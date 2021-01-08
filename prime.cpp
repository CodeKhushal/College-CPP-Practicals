//Program to print whether a number is prime or not. Later printing all prime numbers less than 100.
#include<iostream>
using namespace std;
bool prime(int);      //function definition
int main()
{
    int n;
    cout<<"Enter any number to know if that is prime:  ";
    cin>>n;
    if(prime(n))
        cout<<n<<" is prime.";
    else
        cout<<n<<" is not prime.";
    cout<<endl<<endl<<endl;
    cout<<"............................................................"<<endl<<endl;
    cout<<"Prime numbers upto 100."<<endl<<endl;
    for(int i=2;i<100;i++)
    {
        n=i;
        if(prime(n))
            cout<<n<<" is prime."<<endl;
    }
    return 0;
}
bool prime(int n)
{
    if(n<=1)
        return false;
    else
    {
        for(int j=2;j<n;j++)
        {
            n%j;
            if(n%j==0)
                return false;
        }
        return true;
    }
}
