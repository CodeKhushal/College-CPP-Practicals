//Read a test score and convert score into grades.
#include<iostream>
using namespace std;
int main()
{
    int score;
    char grade;
    cout<<"Enter the test score(0-100): \t";
    cin>>score;
    if(score>=90)
        grade='A';
    else if(score>=80)
        grade='B';
    else if(score>=70)
        grade='C';
    else if(score>=60)
        grade='D';
    else if(score>=50)
        grade='E';
    else
        grade='F';
    cout<<"Your Grade is: \t"<<grade<<endl;
    cout<<"Thank You";
}
