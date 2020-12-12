//Q1:- Display decimal values of selected characters.
#include<iostream>
using namespace std;
int main()
{
    char A='A';
    char b='b';
    char zero='0';
    char eight='8';
    char NL='\n';
    char tab='\t';
    char SP=' ';
    char dblQ='""';
    char baclslsh='\\';
    char onequote='\'';
    cout<<"\n ASCII value of A is            \t" <<int(A);
    cout<<"\n ASCII value of b is            \t" <<int(b);
    cout<<"\n ASCII value of 0 is            \t" <<int(zero);
    cout<<"\n ASCII value of 8 is            \t" <<int(eight);
    cout<<"\n ASCII value of new line is     \t" <<int(NL);
    cout<<"\n ASCII value of tab is          \t" <<int(tab);
    cout<<"\n ASCII value of space is        \t" <<int(SP);
    cout<<"\n ASCII value of double quote is \t" <<int(dblQ);
    cout<<"\n ASCII value of back slash is   \t" <<int(baclslsh);
    cout<<"\n ASCII value of one quote is    \t" <<int(onequote);
    return 0;
}
