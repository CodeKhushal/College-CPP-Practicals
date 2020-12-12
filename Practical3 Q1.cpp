//To demonstrate the result of logical expressions.
#include<iostream>
using namespace std;
int main()
{
    cout<<"5&&-3 is:"<<(5&&-3)<<endl;
    cout<<"5&&0 is:"<<(5&&0)<<endl;
    cout<<"0&&-3 is:"<<(0&&-3)<<endl;
    cout<<"5&&!0 is:"<<(5&&!0)<<endl;
    cout<<"!5&&0 is:"<<(!5&&0)<<endl;
    cout<<"5||0 is:"<<(5||0)<<endl;
    cout<<"!5||!0 is:"<<(!5||!0)<<endl;
    cout<<"5||!0 is:"<<(5||!0)<<endl;
    cout<<"Thank You";
    return 0;
}
