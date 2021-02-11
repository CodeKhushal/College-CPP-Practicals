#include<iostream>
#include<cstring>
using namespace std;

class person
{
        int age;
        char name[30];
        public:
        person()
        {
                strcpy(name,"");
                age=0;
        }
        ~person(){cout<<"Object destroyed.";}
        virtual void input();
        virtual void display();
};

void person::input()
{
        cout<<"Enter the name of person:  ";
        cin>>name;
        cout<<"Enter the age of person:  ";
        cin>>age;
        return;
}

void person::display()
{
        cout<<"Name:  "<<name<<endl;
        cout<<"Age:  "<<age<<endl;
        return;
}

class student : public person
{
        int roll;
        float marks;
        char course[50];
        public:
        student()
        {
                strcpy(course,"");
                roll=0;
                marks=0.0;
        }
        ~student(){cout<<"Object destroyed.";}
        void input();
        void display();
};

void student::input()
{
        person::input();
        cout<<"Enter the roll number of student:  ";
        cin>>roll;
        cout<<"Enter the marks of student:  ";
        cin>>marks;
        cout<<"Enter the course of student:  ";
        cin>>course;
        return;
}

void student::display()
{
        person::display();
        cout<<"Roll No.:  "<<roll<<endl;
        cout<<"Course:  "<<course<<endl;
        cout<<"Marks:  "<<marks<<endl;
        return;
}

class teacher : public person
{
        int em_id;
        float salary;
        char depart[40];
        public:
        teacher()
        {
                strcpy(depart,"");
                em_id=0;
                salary=0.0;
        }
        ~teacher(){cout<<"Object destroyed.";}
        void input();
        void display();
};

void teacher::input()
{
        person::input();
        cout<<"Enter the employee ID:  ";
        cin>>em_id;
        cout<<"Enter the salary of employee:  ";
        cin>>salary;
        cout<<"Enter the department of employee:  ";
        cin>>depart;
        return;
}

void teacher::display()
{
        person::display();
        cout<<"Employee ID:  "<<em_id<<endl;
        cout<<"Department:  "<<depart<<endl;
        cout<<"Salary:  "<<salary;
        return;
}

int main()
{
        person *P1,*P2;
        cout<<"Initialising two instances of person.............."<<endl;
        P1=new person();
        P2=new person();
        cout<<"Converting person1 to student...................."<<endl;
        P1=new student();
        cout<<"Person 1 is now a student"<<endl;
        cout<<"Enter details of student"<<endl;
        P1->input();
        cout<<"Converting person 2 to teacher...................."<<endl;
        P2=new teacher();
        cout<<"Person 2 is now a teacher"<<endl;
        cout<<"Enter details of teacher"<<endl;
        P2->input();
        cout<<endl<<endl<<endl;
        system("cls");
        cout<<"Person 1............"<<endl;
        P1->display();
        cout<<endl<<endl<<endl;
        cout<<"Person 2............"<<endl;
        P2->display();
        cout<<endl<<endl;
        delete P1;
        cout<<endl;
        delete P2;
        return 0;
}