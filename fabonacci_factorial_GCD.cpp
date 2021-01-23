#include<iostream>
using namespace std;
int fab(int );                                            //function to calculate fabonacci
int fact(int );                                           //function to calculate factorial
int GCD(int, int);                                        //function to calculate GCD
int menu(int );                                           //menu function

int main()
{
        int a,b,choice=0;
        int fabo,facto,GCDv;
        
        do
        {
                choice=menu(choice);
                switch (choice)
                {
                case 1:
                {
                        cout<<"Enter an integer:  ";
                        cin>>a;
                        fabo=fab(a);
                        cout<<"Fabonacci of "<<a<<" is "<<fabo;
                        cout<<endl;
                        break;
                }
                case 2:
                {
                        cout<<"Enter an integer:  ";
                        cin>>a;
                        facto=fact(a);
                        cout<<"factorial of "<<a<<" is "<<facto;
                        cout<<endl;
                        break;
                }
                case 3:
                {
                        cout<<"Enter two integers:  ";
                        cin>>a>>b;
                        GCDv=GCD(a,b);
                        cout<<"Greatest common divisor(GCD) of "<<a<<"&"<<b<<" is "<<GCDv;
                        cout<<endl;
                        break;
                }
                
                default:
                {
                        if(choice!=0)
                        {
                                cout<<"Invalid entry. Please try again"<<endl;
                        }
                        else
                        {
                                cout<<"Invalid entry. Program terminated.";
                        }
                        break;
                }
                }
                
        }while(choice!=0);
        return 0;
}

int menu(int a)                                                                                       //menu function starts
{
        int choice;
        cout<<"1. Calculate fabonacci of a number and print fabonacci series for that number."<<endl;
        cout<<"2. Calculate factorial of a number."<<endl;
        cout<<"3. Calculate Greatest common divisor(GCD) of a number."<<endl;
        cout<<"Enter a choice:  ";
        cin>>choice;
        return choice;
}                                                                                                     //menu function ends

int fab(int a)                                                                                       //fab function starts
{
        int x=1;
        int y=1;
        int temp=0;
        if(a<3)
        {
                return 1;
        }
        else
        {
                for(int i=3;i<=a;i++)
                {
                        temp=x;
                        x=x+y;
                        y=temp;
                }
                return x;
        }
}                                                                                                  //fab function ends


int fact(int a)                                                                                    //fact function starts
{
        int fact=1;
        if(a==0)
        {
                fact=1;
                return fact;
        }
        else
        {
                for( int i=1;i<=a;i++)
                {
                        fact=fact*i;
                }
                return fact;
        }
}                                                                                                //fact function ends

int GCD(int a, int b)                                                                             //GCD function starts
{
        int temp;
        if(a<b)
        {
                temp=b;
                b=a;
                a=temp;
        }

        if(b==0)
        {
                return a;       
        }
        else
        {
                while (b!=0)
                {
                        temp=b;
                        b=a%b;
                        a=temp;
                        if(b==0)
                        {
                                return a;
                        }
                }       
        }
}                                                                                                    //GCD function ends