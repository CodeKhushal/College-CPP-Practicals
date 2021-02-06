#include<iostream>
using namespace std;
int choice();
int tchoice();

class matrix
{
        private:
        int row,col;
        int Matrix[100][100];
        public:
        matrix(int, int);
        void input();
        void display();
        void sum(matrix);
        void difference(matrix);
        void multiply(matrix);
        void transpose();
};

matrix::matrix(int r=3, int c=3)
{
        row=r;
        col=c;
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        Matrix[i][j]=0;
                }
        }

        cout<<"Matrix of size "<<row<<" x "<<col<<" has been created"<<endl;
}

void matrix::input()
{
        cout<<"Now enter values of matrix..........."<<endl;
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        cout<<"a["<<i+1<<"]["<<j+1<<"] --> ";
                        cin>>Matrix[i][j];
                }
        }
        return;
}

void matrix::display()
{
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        cout<<Matrix[i][j]<<"        ";
                }
                cout<<endl;
        }
        return;
}

void matrix::sum(matrix a)
{
        if(row!=a.row||col!=a.col)
        {
                cout<<"Sum is not possible due to unequal dimensions.";
                return;
        }

        matrix temp(a.row,a.col);
        for(int i=0;i<a.row;i++)
        {
                for(int j=0;j<a.col;j++)
                {
                        temp.Matrix[i][j] = Matrix[i][j] + a.Matrix[i][j];
                }
        }
        cout<<"Sum of two matrix are:"<<endl;
        temp.display();
        return;
}

void matrix::difference(matrix a)
{
        if(row!=a.row||col!=a.col)
        {
                cout<<"Difference is not possible due to unequal dimensions.";
                return;
        }

        matrix temp(a.row,a.col);
        for(int i=0;i<a.row;i++)
        {
                for(int j=0;j<a.col;j++)
                {
                        temp.Matrix[i][j] = Matrix[i][j] - a.Matrix[i][j];
                }
        }
        cout<<"Difference of two matrix are:"<<endl;
        temp.display();
        return;
}

void matrix::multiply(matrix a)
{
        if(col!=a.row)
        {
                cout<<"Multiplication not possible."<<endl;
                return;
        }

        matrix temp(row,a.col);
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<a.col;j++)
                {
                        int msum=0;
                        for(int k=0;k<a.row;k++)
                        {
                                msum = msum + Matrix[i][k] * a.Matrix[k][j];
                        }
                        temp.Matrix[i][j]=msum;
                }
        }
        cout<<"Product of two matrix:"<<endl;
        temp.display();
        return;
}

void matrix::transpose()
{
        for(int i=0;i<col;i++)
        {
                for(int j=0;j<row;j++)
                {
                        cout<<Matrix[j][i]<<"        ";
                }
                cout<<endl;
        }
        return;
}

int choice()
{
        int choic;
        cout<<endl<<endl;
        cout<<"1. Sum of two matrix                           2. Difference of two matrix"<<endl;
        cout<<"3. Multiply of two matrix                      4. Transpose of matrix"<<endl;
        cout<<"0. QUIT"<<endl;
        cout<<"Enter your choice:   ";
        cin>>choic;
        return choic;
}

int tchoice()
{
        int tchoic;
        cout<<endl<<endl;
        cout<<"1. Transpose of matrix 1                      2. Transpose of matrix 2"<<endl;
        cout<<"0. QUIT from transpose choices"<<endl;
        cout<<"Enter your choice:   ";
        cin>>tchoic;
        return tchoic;
}

int main()
{
        int r1,r2,c1,c2,choic,tchoic;
        cout<<"Enter the number of rows and column of first matrix:  ";
        cin>>r1>>c1;
        matrix a(r1,c1);
        a.input();

        cout<<"Enter the number of rows and column of second matrix:  ";
        cin>>r2>>c2;
        matrix b(r2,c2);
        b.input();

        cout<<"Matrix 1:"<<endl;
        a.display();
        cout<<endl<<endl;
        cout<<"Matrix 2:"<<endl;
        b.display();
        cout<<endl<<endl;

        while (choic!=0)
        {
                choic=choice();
                switch (choic)
                {
                case 1:
                {
                        a.sum(b);
                        break;
                }

                case 2:
                {
                        a.difference(b);
                        break;
                }

                case 3:
                {
                        a.multiply(b);
                        break;
                }

                case 4:
                {
                        tchoic=tchoice();
                        switch (tchoic)
                        {
                        case 1:
                        {
                                cout<<endl<<endl<<"Transpose of first matrix"<<endl;
                                a.transpose();
                                break;
                        }

                        case 2:
                        {
                                cout<<endl<<endl<<"Transpose of second matrix"<<endl;
                                b.transpose();
                                break;
                        }
                        default:
                        {
                                cout<<"Back to main menu."<<endl;
                                break;
                        }
                        }
                        break;
                }
                default:
                {
                        if(choic<0||choic>4)
                        {
                                cout<<"Invalid choice. Please try again."<<endl;
                        }
                        else if(choic==0)
                        {
                                cout<<"Program terminated........."<<endl;
                        }
                        break;
                }
                }
        }

        return 0;
}