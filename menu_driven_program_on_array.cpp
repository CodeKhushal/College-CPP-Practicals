#include<iostream>
#include<iomanip>
using namespace std;
int menu(int &, int *);                               //function definition
void inputs(int &size,int *array);                            //function definition
void displayeven(int &, int *);                       //function definition
void displayodd(int &, int *);                        //function definition
void displaysumavg(int &, int *);                     //function definition
void minmax(int &, int *);                            //function definition
void remdup(int &, int *);                            //function definition
void revdis(int &, int *);                            //function definition
int main()                                                                      //main function start.
{
        int choice=0,size=0;

        cout<<"Enter the size of array:  ";
        cin>>size;

        int array[size]={0};

        inputs(size,array);

        for(int i=0;i<size;i++)                                                           //print array entered.
        {
                cout<<array[i]<<" ";
        }
        cout<<endl;

        do                                                                                 //do....while() loop start
        {
             choice=menu(size,array);
             switch(choice)                                                                 //switch cases start
             {
                     case 1:
                     {
                             displayeven(size,array);
                             break;
                     }
                     case 2:
                     {
                             displayodd(size,array);
                             break;
                     }
                     case 3:
                     {
                             displaysumavg(size,array);
                             break;
                     }
                     case 4:
                     {
                             minmax(size,array);
                             break;
                     }
                     case 5:
                     {
                             remdup(size,array);
                             break;
                     }
                     case 6:
                     {
                             revdis(size,array);
                             break;
                     }
                     default:
                     {
                             break;
                     }
             }
        } while (choice!=0);                                                            //do....while() loop ends
        cout<<endl;
        return 0;
}                                                                                         //main function ends.


int menu(int &size, int *array)                                                        //menu function start
{
        int c;
        cout<<"1: Print even valued elements."<<endl;
        cout<<"2: Print odd valued elements."<<endl;
        cout<<"3: Print sum and average valued elements."<<endl;
        cout<<"4: Print minimum and maximum valued elements."<<endl;
        cout<<"5: Print elements with duplicates removed."<<endl;
        cout<<"6: Print reverse array."<<endl;
        cout<<"Enter choice:  ";
        cin>>c;
        return c;
}                                                                                          //menu function ends.

void inputs(int &size,int *array)                                                        //inputs function start.
{
        
        cout<<"Enter elements: ";
        for(int i=0;i<size;i++)
        {
                cin>>array[i];
        }
        return;
}                                                                                          //inputs function ends.

void displayeven(int &size, int *array)                                                        //displayeven function start
{
        cout<<"Even valued elements are:"<<endl;
        for(int i=0;i<size;i++)
        {
                if(array[i]%2==0)
                {
                        cout<<array[i]<<" ";
                }
        }
        cout<<endl;
        return;
}                                                                                                   //displayeven function ends

void displayodd(int &size, int *array)                                                        //displayodd function start
{
        cout<<"Odd valued elements are:"<<endl;
        for(int i=0;i<size;i++)
        {
                if(array[i]%2!=0)
                {
                        cout<<array[i]<<" ";
                }
        }
        cout<<endl;
        return;
}                                                                                                   //displayodd function ends


void minmax(int &size, int *array)                                                                  //minmax function start.
{
        int min=array[0],max=array[0];
        for(int i=0;i<size;i++)
        {
                if(array[i]<min)
                {
                        min=array[i];
                }
                if(array[i]>max)
                {
                        max=array[i];
                }
        }
        cout<<"Minimum: "<<min<<endl;
        cout<<"Maximum: "<<max<<endl;
        cout<<endl;
        return;
}                                                                                             //minmax function ends

void displaysumavg(int &size, int *array)                                                     //displaysumavg function start.
{
        float sum=0;
        for(int i=0;i<size;i++)
        {
                sum=sum+array[i];
        }
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<(sum/size)<<endl;
        cout<<endl;
        return;
}                                                                                                //displaysumavg function ends.

void remdup(int &size, int *array)                                                                //remdup function start.
{
        int sizecopy=size;
        int arraycopy[size]= {0};

        for(int i=0;i<sizecopy;i++)
        {
                arraycopy[i]=array[i];
        }

        for(int i=0;i<sizecopy;i++)
        {
                for(int j=i+1;j<sizecopy;j++)
                {
                        if(arraycopy[i]==arraycopy[j])
                        {
                                for(int k=j;k<sizecopy;k++)
                                {
                                        arraycopy[k]=arraycopy[k+1];
                                }
                                sizecopy--;
                                j--;
                        }
                }
        }

        for(int i=0;i<sizecopy;i++)
        {
                cout<<arraycopy[i]<<" ";
        }
        cout<<endl;
        return;
}                                                                                                    //displaysumavg function ends.

void revdis(int &size, int *array)                                                                   //revdis function start.
{
        for(int i=size-1;i>=0;i--)
        {
                cout<<array[i]<<" ";
        }
        cout<<endl;
        return;
}                                                                                                      //revdis function ends.