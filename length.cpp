#include<iostream>
using namespace std;

class length
{
        private:
        float feet;
        float inch;
        public:
        length();
        length(float, float);
        ~length(){}

        void input();
        void display();
        
        length operator+(length &);
        length operator-(length &);
};

length::length()
{
        feet=inch=0;
}

length::length(float x, float y)
{
        feet=x;
        inch=y;
        while(inch>=12)
        {
                inch-=12;
                feet++;
        }
}

void length::input()
{
        cout<<"Enter the value of feet:  ";
        cin>>feet;
        cout<<"Enter the value of inches:  ";
        cin>>inch;
        while(inch>=12)
        {
                inch-=12;
                feet++;
        }
        return;
}

void length::display()
{
        cout<<"Length:  "<<feet<<"\'"<<inch<<"\""<<endl;
}

length length::operator+(length &o)
{
        length temp;
        temp.feet=feet+o.feet;
        temp.inch=inch+o.inch;
        while(temp.inch>=12)
        {
                temp.inch-=12;
                temp.feet++;
        }
        return temp;
}

length length::operator-(length &o)
{
        length temp;
        temp.feet=feet-o.feet;
        temp.inch=inch-o.inch;
        temp.feet=abs(temp.feet);
        temp.inch=abs(temp.inch);
        if(temp.inch>=12)
        {
                temp.inch-=12;
                temp.feet++;
        }
        return temp;
}

int main()
{
        length A,B,sum,diff;
        A.input();
        B.input();
        system("cls");
        cout<<"Length 1......................."<<endl;
        A.display();
        cout<<"Length 2......................."<<endl;
        B.display();
        sum=A+B;
        cout<<"Sum of both length............."<<endl;
        sum.display();
        diff=A-B;
        cout<<"Difference of both length......"<<endl;
        diff.display();
        return 0;
}