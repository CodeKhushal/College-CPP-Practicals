//To make a simple calculator.
#include<iostream>
using namespace std;
int main()
{
    double num1,num2,value;
    char oper;
    cout<<"Enter first number  ";
    cin>>num1;
    cout<<"Enter operation to be done(+,-,*,/)  ";
    cin>>oper;
    cout<<"Enter second number  ";
    cin>>num2;
    switch(oper)
    {
        case'+':
          value=num1+num2;
          cout<<num1<<" + "<<num2<<" = "<<value;
          break;
        case'-':
          value=num1-num2;
          cout<<num1<<" - "<<num2<<" = "<<value;
          break;
        case'*':
          value=num1*num2;
          cout<<num1<<" * "<<num2<<" = "<<value;
          break;
        case'/':
          value=num1/num2;
          cout<<num1<<" / "<<num2<<" = "<<value;
          break;
        default:
          cout<<"Enter a valid choice";
          break;
    }
    return 0;
}
