#include<iostream>
using namespace std;
void palindrom(char[]);                            //function decleration to check that whether the entered string is a palindrom or not.
          
int main()
{
        char str[255];
        cout<<"Enter the string:  ";
        cin>>str;
        cout<<endl;
        palindrom(str);
        return 0;
}

void palindrom(char s[])                            //function defenition
{
        int i;
        for(i=0;s[i]!='\0';i++)
        {
                ;
        }
        i--;
        for(int j=0,k=i;j<=i/2;j++,k--)
        {
                if(s[j]!=s[k])
                {
                        cout<<"String "<<s<<" is not a palindrom."<<endl;
                        return;
                }
        }
        cout<<"String "<<s<<" is a palindrom."<<endl;
        return;
}