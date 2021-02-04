#include<iostream>
#include<cctype>
#include<iomanip>
#define freq 26
using namespace std;
int main(int argc, char **argv)
{
        if(_argc==1)
        {
                cout<<"Please enter as follows: "<<endl;
                cout<<"./filename(without extension) string(s)"<<endl;
                cout<<"Then press enter......."<<endl;
        }
        
        int frequency[freq]={0};
        for(int i=1;i<_argc;i++)
        {
                for(int j=0;j<_argv[i][j];j++)
                {
                        if(isalpha(_argv[i][j]))
                        {
                                _argv[i][j]=tolower(_argv[i][j]);
                                frequency[int(_argv[i][j]-'a')]++;
                        }
                }
        }

        cout<<setw(25)<<"Alphabets"<<setw(45)<<"No. of occurences"<<endl;
        cout<<setw(80)<<setfill('-')<<""<<endl;
        cout<<endl;
        for(int i=0;i<freq;i++)
        {
                cout<<setw(20)<<setfill(' ')<<char('a'+i);
                cout<<setw(20)<<'|';
                cout<<setw(20)<<frequency[i]<<endl;
        }
        return 0;
}