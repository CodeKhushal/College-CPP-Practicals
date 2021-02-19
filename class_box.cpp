#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;
void menu(int &);

class box
{
        private:
        int length,breadth,height;
        public:
        box();
        box(int, int, int);
        void input();
        void display();
        void volume();
        void surfacearea();
        void totaledgelength();
        void iscube();

        void operator=(box &);
        void operator==(box &);
};

box::box()
{
        length=breadth=height=0;
}

box::box(int l, int b, int h)
{
        length=l;
        breadth=b;
        height=h;
}

void box::input()
{
        cout<<"Enter the length of box:  ";
        cin>>length;
        cout<<"Enter the breadth of box:  ";
        cin>>breadth;
        cout<<"Enter the height of box:  ";
        cin>>height;
        return;
}

void box::display()
{
        cout<<"Length:  "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height:  "<<height<<endl;
        return;
}

void box::volume()
{
        int volume=0;
        volume=length*breadth*height;
        cout<<volume<<endl;
        return;
}

void box::surfacearea()
{
        int SA=0;
        SA=2*(length*breadth+breadth*height+height*length);
        cout<<SA<<endl;
        return;
}

void box::totaledgelength()
{
        int EL=0;
        EL=4*(length+breadth+height);
        cout<<EL<<endl;
        return;
}

void box::operator=(box &o)
{
        length=o.length;
        breadth=o.breadth;
        height=o.height;
        cout<<"A new box has been created"<<endl;
        return;
}

void box::operator==(box &o)
{
        if(length==o.length && breadth==o.breadth && height==o.height)
        {
                cout<<"Both the boxes have equal dimensions"<<endl;
        }
        else
        {
                cout<<"Both the boxes have unequal dimensions"<<endl;
        }
        return;
}

void box::iscube()
{
        if(length==breadth && breadth==height)
        {
                cout<<" is cube."<<endl;
        }
        else
        {
                cout<<" is not a cube"<<endl;
        }
        return;
}

void menu(int &choice)
{
        cout<<"1. Display dimensions of all boxes                                 2. Calculate volume of first box"<<endl;
        cout<<"3. Calculate volume of second box                                  4. Calculate surface area of first box"<<endl;
        cout<<"5. Calculate the area of second box                                6. Calculate total edge length of first box"<<endl;
        cout<<"7. Calculate total edge length of second box                       8. Assignment of dimensions is box A to a brand new box"<<endl;
        cout<<"9. Check equality of box A & B                                    10. Check equlity of box A and new box C"<<endl;
        cout<<"11.Check if box A is cube                                         12. Check if box B is cube"<<endl;
        cout<<"0. QUIT"<<endl;
        cout<<"Enter your choice:  ";
        cin>>choice;
        return;
}

int main()
{
        system("cls");
        int choice=1;
        box A,B,C;
        cout<<"Enter dimensions of box A.........."<<endl;
        A.input();
        cout<<"Enter dimensions of box B.........."<<endl;
        B.input();
        while(choice!=0)
        {
                menu(choice);
                system("cls");
                switch(choice)
                {
                        case 1:
                        {
                                cout<<"Dimensions of box A....."<<endl;
                                A.display();
                                cout<<"Dimensions of box B....."<<endl;
                                B.display();
                                break;
                        }
                        case 2:
                        {
                                cout<<"Volume of box A: ";
                                A.volume();
                                break;
                        }
                        case 3:
                        {
                                cout<<"Volume of box B: ";
                                B.volume();
                                break;
                        }
                        case 4:
                        {
                                cout<<"Surface area of box A: ";
                                A.surfacearea();
                                break;
                        }
                        case 5:
                        {
                                cout<<"Surface area of box A: ";
                                B.surfacearea();
                                break;
                        }
                        case 6:
                        {
                                cout<<"Total edge length of box A: ";
                                A.totaledgelength();
                                break;
                        }
                        case 7:
                        {
                                cout<<"Total edge length of box A: ";
                                B.totaledgelength();
                                break;
                        }
                        case 8:
                        {
                                C=A;
                                break;
                        }
                        case 9:
                        {
                                A==B;
                                break;
                        }
                        case 10:
                        {
                                A==C;
                                break;
                        }
                        case 11:
                        {
                                cout<<"Box A";
                                A.iscube();
                                break;
                        }
                        case 12:
                        {
                                cout<<"Box B";
                                B.iscube();
                                break;
                        }
                        default:
                        {
                                if(choice>12)
                                {
                                        cout<<"Invalid choice. Please try again."<<endl;
                                }
                                else
                                {
                                        cout<<"Program terminating........."<<endl;
                                        sleep(3);
                                        cout<<"Program terminated.";
                                        break;
                                }
                        }
                }
        }
        return 0;
}