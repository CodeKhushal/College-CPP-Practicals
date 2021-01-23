#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
        int a,b;
        int *c,*d;
        cout<<"Enter two integers:  ";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
        c=&a;
        d=&b;
        swap(c,d);
        return 0;
}

void swap(int *c, int *d)
{
        int *temp;
        temp=c;
        c=d;
        d=temp;
        cout<<*c<<" "<<*d;
        return;
}