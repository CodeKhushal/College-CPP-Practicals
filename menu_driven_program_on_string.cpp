#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

int showmenu();
void showaddress(char []);
int stringlength(char []);
int countvowels(char []);
int countconsonants(char []);
char *lowercase(char [], char []);
char *uppercase(char [], char []);
char *concatwithstrcat(char [], char [], char[]);
char *concatwithoutstrcat(char [], char [], char []);
char *reversestring(char [], char []);
void compare(char [], char []);

int main()
{
        char string1[255], string2[255];
        int choice=1;
        cout<<"Enter first string: ";
        cin>>string1;
        cout<<"Enter second string: ";
        cin>>string2;
        while(choice!=0)
        {
                choice=showmenu();
                switch(choice)
                {
                        case 1:
                        {
                                cout<<"Address of first string:   "<<endl;
                                showaddress(string1);
                                cout<<"Address of second string:  "<<endl;
                                showaddress(string2);
                                break;
                        }

                        case 2:
                        {

                                cout<<"String length of first string:   "<<stringlength(string1)<<endl;
                                cout<<"String length of second string:  "<<stringlength(string2)<<endl;
                                break;
                        }

                        case 3:
                        {
                                cout<<"Number of vowels in first string is   "<<countvowels(string1)<<endl;
                                cout<<"Number of vowels in second string is  "<<countvowels(string2)<<endl;
                                break;
                        }

                        case 4:
                        {
                                cout<<"Number of consonants in first string is   "<<countconsonants(string1)<<endl;
                                cout<<"Number of consonants in second string is  "<<countconsonants(string2)<<endl;
                                break;
                        }

                        case 5:
                        {
                                char t[255];
                                cout<<"Lower alternative of first string is   "<<lowercase(string1, t)<<endl;
                                cout<<"Lower alternative of second string is  "<<lowercase(string2, t)<<endl;
                                break;
                        }

                        case 6:
                        {
                                char t[255];
                                cout<<"Upper alternative of first string is   "<<uppercase(string1, t)<<endl;
                                cout<<"Upper alternative of second string is  "<<uppercase(string2, t)<<endl;
                                break;
                        }

                        case 7:
                        {
                                char t[255];
                                cout<<"Concatination of first and second string is "<<concatwithstrcat(string1,string2,t)<<endl;
                                break;
                        }

                        case 8:
                        {
                                char t[255];
                                cout<<"Concatination of first and second string is "<<concatwithoutstrcat(string1,string2,t)<<endl;
                                break;
                        }

                        case 9:
                        {
                                compare(string1,string2);
                                break;
                        }

                        case 10:
                        {
                                char t[255];
                                cout<<"Reverse of first string is   "<<reversestring(string1, t)<<endl;
                                cout<<"Reverse of second string is  "<<reversestring(string2, t)<<endl;
                                break;
                        }

                        default:
                        {
                                int count=0;
                                if(choice<0||choice>10)
                                {
                                        cout<<"Invalid choice. Please try again........"<<endl;
                                        count++;
                                }
                                else if(choice==0)
                                {
                                        cout<<"Program terminated."<<endl;
                                }
                                break;
                        }
                }
        }
        return 0;
}

int showmenu()
{
        int choice;
        cout<<"\t1. Show address of each character of strings.              2. Show length of both strings."<<endl;
        cout<<"\t3. To count number of vowels in each string.               4. To count number of consonants in each string."<<endl;
        cout<<"\t5. To convert whole string in lower case.                  6. To convert whole string in upper case."<<endl;
        cout<<"\t7. To concate both strings using strcat.                   8. To concate both strings without using strcat."<<endl;
        cout<<"\t9. To compare both strings.                               10. Reverse both strings."<<endl;
        cout<<"\t0. To QUIT this program."<<endl;
        cout<<"\tEnter your choice:       ";
        cin>>choice;
        cout<<endl<<endl;
        return choice;
}

void showaddress(char string[])
{
        int strl=stringlength(string);
        for(int i=0;i<strl;i++)
        {
                cout<<string[i]<<"->"<<(void *)&string[i]<<endl;
        }
        return;
}

int stringlength(char a[])
{
        int i=0;
        while(a[i]!='\0')
        {
                i++;
        }
        return i;
}

int countvowels(char string[])
{
        int count=0;
        char t[255];
        for(int i=0;i<stringlength(string);i++)
        {
                if(lowercase(string,t)[i]=='a'|| lowercase(string,t)[i]=='e'|| lowercase(string,t)[i]=='i'|| lowercase(string,t)[i]=='o'|| lowercase(string,t)[i]=='u')
                {
                        count++;
                }
        }
        return count;
}

int countconsonants(char string[])
{
        int count=0;
        char t[255];
        for(int i=0;i<stringlength(string);i++)
        {
                if(lowercase(string,t)[i]!='a'&& lowercase(string,t)[i]!='e'&& lowercase(string,t)[i]!='i'&& lowercase(string,t)[i]!='o'&& lowercase(string,t)[i]!='u')
                {
                        count++;
                }
        }
        return count;
}

char *lowercase(char string[], char t[])
{
        strcpy(t,string);
        for(int i=0;i<stringlength(t);i++)
        {
                if(t[i]>='A'&&t[i]<='Z')
                {
                        t[i]=t[i]+32;
                }
        }
        return t;
}

char *uppercase(char string[], char t[])
{
        strcpy(t,string);
        for(int i=0;i<stringlength(t);i++)
        {
                if(t[i]>='a'&&t[i]<+'z')
                {
                        t[i]=t[i]-32;
                }
        }
        return t;
}

char *concatwithstrcat(char string1[], char string2[], char t[])
{
        strcpy(t,string1);
        strcat(t,string2);
        return t;
}

char *concatwithoutstrcat(char string1[], char string2[], char t[])
{
        int i=stringlength(string1),j;
        strcpy(t,string1);
        for(j=0;j<stringlength(string2);i++,j++)
        {
                t[i]=string2[j];
        }
        t[i]='\0';
        return t;
}

void compare(char string1[], char string2[])
{
        int flag=0;
        if(stringlength(string1)>stringlength(string2))
        {
                cout<<"First string is larger than second string."<<endl;
        }
        else if(stringlength(string1)<stringlength(string2))
        {
                cout<<"First string is smaller than second string."<<endl;
        }
        else if(stringlength(string1)==stringlength(string2))
        {
                cout<<"Both strings have same length."<<endl<<endl;
                for(int i=0;i<stringlength(string1);i++)
                {
                        if(string1[i]==string2[i])
                        {
                                flag++;
                        }
                }

                if(flag==stringlength(string1))
                {
                        cout<<"Both strings are same."<<endl;
                }
        }
        return;
}

char *reversestring(char string[], char t[])
{
        int i=0,j=stringlength(string)-1;
        for(i,j;i<stringlength(string),j>=0;i++,j--)
        {
                t[i]=string[j];
                
        }
        t[i]='\0';
        return t;
}