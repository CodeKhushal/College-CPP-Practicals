#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;

int main(int argc, char *argv[])
{
        if(argc!=3)
        {
                cout<<"Invalid initialization."<<endl;
                cout<<"Usagae: ./programfile input-file_name output-file_name"<<endl;
                exit(0);
        }
        ifstream in;
        in.open(argv[1]);
        if(in.fail())
        {
                cout<<"Can't read file."<<endl;
                exit(0);
        }

        ofstream out;
        out.open(argv[2]);
        if(out.fail())
        {
                cout<<"Can't write to file."<<endl;
                exit(0);
        }

        char ch;
        in.get(ch);
        while(in.eof()==0)
        {
                in.get(ch);
                if(ch!=' ')
                {
                        out<<ch;
                }
        }

        cout<<"Process in progress. Please wait"<<endl;
        sleep(3);
        cout<<"Process complete."<<endl;

        in.close();
        out.close();
        return 0;
}