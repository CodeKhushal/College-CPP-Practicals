#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;
void menu(int &);
class triangle
{
        private:
        int base,height;
        public:
        triangle();
        triangle(int, int);
        void display();
        void calculateArea();
        void calculateArea(float, float);
        void operator=(triangle &);
        void operator==(triangle &);
};

triangle::triangle()
{
        base=height=0;
}
triangle::triangle(int x, int y)
{
        base=x;
        height=y;
}


void triangle::display()
{
        cout<<"Base:   "<<base<<endl;
        cout<<"Height: "<<height<<endl;
}

void triangle::calculateArea()
{
        float area=(1.0/2)*base*height;
        cout<<"Area of triangle: "<<area<<endl;
        return;
}

void triangle::calculateArea(float a, float b)
{
        float area=(1.0/2)*a*b;
        cout<<"Area of triangle: "<<area<<endl;
        return;
}

void triangle::operator=(triangle &o)
{
        base=o.base;
        height=o.height;
        
        cout<<"A new triangle has been created"<<endl;
        return;
}

void triangle::operator==(triangle &o)
{
        if(base==o.base && height==o.height)
        {
                cout<<"Both triangles are equal"<<endl;
        }
        else
        {
                cout<<"Both triangles are not equal"<<endl;
        }
        return;
}

void menu(int &choice)
{
        cout<<"1. Display dimensions of all triangles                             2. Calculate area of first triangle"<<endl;
        cout<<"3. Calculate area of second triangle                               4. Calculate area(Overloaded function)"<<endl;
        cout<<"5. Assignment operator                                             6. Equality of A and B"<<endl;
        cout<<"7. Equality of A and C                                             0. QUIT"<<endl;
        cout<<"Enter your choice:  ";
        cin>>choice;
        return;
}

int main()
{
        int b,h,choice;
        cout<<"Enter the base of first triangle:  ";
        cin>>b;
        cout<<"Enter the height of first triangle:  ";
        cin>>h;
        triangle A(b,h);
        cout<<"Enter the base of second triangle:  ";
        cin>>b;
        cout<<"Enter the height of second triangle:  ";
        cin>>h;
        triangle B(b,h);
        triangle C;

        while(choice!=0)
        {
                menu(choice);
                system("cls");
                switch(choice)
                {
                        case 1:
                        {
                                A.display();
                                B.display();
                                break;
                        }
                        case 2:
                        {
                                A.calculateArea();
                                break;
                        }
                        case 3:
                        {
                                B.calculateArea();
                                break;
                        }
                        case 4:
                        {
                                cout<<"Enter base:  ";
                                cin>>b;
                                cout<<"Enter height:  ";
                                cin>>h;
                                A.calculateArea(b,h);
                                break;
                        }
                        case 5:
                        {
                                C=A;
                                break;
                        }
                        case 6:
                        {
                                A==B;
                                break;
                        }
                        case 7:
                        {
                                A==C;
                                break;
                        }
                        default:
                        {
                                if(choice>7)
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