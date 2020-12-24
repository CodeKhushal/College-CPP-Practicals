/* Program to print a given pattern
   ***********  //11 asterisks
   *********    //9  asterisks
   *******      //7  asterisks
   *****        //5  asterisks
   ***          //3  asterisks
   *            //1  asterisk
*/
#include<iostream>
using namespace std;
int main()
{
    int k=11;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=k;j++)
            cout<<'*';
        k-=2;
        cout<<endl;
    }
}
