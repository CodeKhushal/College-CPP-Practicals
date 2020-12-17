//Assigning value to double variable name "cost" which depend on the value of integer variable named "distance".
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int dis;
    double cost;
    cout<<"Enter the distance \t";
    cin>>dis;
    if(dis>0&&dis<=100)
        cost=5.00;
    else if(dis>=100&&dis<=500)
        cost=8.00;
    else if(dis>=500&&dis<=1000)
        cost=10.00;
    else
        cost=12.00;
    cout<<"Cost is: $"<<cost;
    return 0;
}
