#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        float e_id,basic_pay,TA,DA,HRA,other_perks,ex_facilities,salary,f_salary;
        cout<<"Enter the ID of employee:  ";
        cin>>e_id;
        cout<<"Enter the basic pay of employee:  ";
        cin>>basic_pay;
        cout<<"Enter the travelling allowance(TA){in %} to be paid:  ";
        cin>>TA;
        cout<<"Enter the daily allowance(DA){in %} to be paid:  ";
        cin>>DA;
        cout<<"Enter the home rent allowance(HRA){in %} to be paid:  ";
        cin>>HRA;
        cout<<"Enter other perks to be paid:  ";
        cin>>other_perks;
        cout<<"Enter amount expended by organisation on other facilities:  ";
        cin>>ex_facilities;
        cout<<endl<<endl;

        salary=basic_pay+TA/100*(basic_pay)+DA/100*(basic_pay)+HRA/100*(basic_pay)+other_perks;
        f_salary=basic_pay+TA/100*(basic_pay)+DA/100*(basic_pay)+HRA/100*(basic_pay)+other_perks-ex_facilities;
        
        cout<<"Emplpoyee ID :- "<<e_id<<endl<<endl;
        cout<<"Basic pay of employee:                                 "<<setw(15)<<"$"<<setw(7)<<basic_pay<<endl;
        cout<<"Travelling allowance(TA) to be paid:                   "<<setw(15)<<"$"<<setw(7)<<TA/100*(basic_pay)<<endl;
        cout<<"Daily allowance(DA) to be paid:                        "<<setw(15)<<"$"<<setw(7)<<DA/100*(basic_pay)<<endl;
        cout<<"Home rent allowance(HRA) to be paid:                   "<<setw(15)<<"$"<<setw(7)<<HRA/100*(basic_pay)<<endl;
        cout<<"Other perks to be paid:                                "<<setw(15)<<"$"<<setw(7)<<other_perks<<endl;
        cout<<"............................................................................................................................................................................................"<<endl;
        cout<<"Salary of employee:                                    "<<setw(15)<<"$"<<setw(7)<<salary<<endl<<endl;
        cout<<"Amount expended by organisation on other facilities:   "<<setw(15)<<"-$"<<setw(7)<<ex_facilities<<endl;
        cout<<"............................................................................................................................................................................................"<<endl;
        cout<<"Final salary to be paid:                               "<<setw(15)<<"$"<<setw(7)<<f_salary<<endl<<endl;
        cout<<"Note :-  Amount expended by organisation on other facilities on employee will be reduced from the salary of employee."<<endl;
        cout<<"         Final salary is the salary payable by the organisation to the employee in the given month."<<endl;
        cout<<"         For any query, contact HR Manager."<<endl;
        cout<<"                                           Thank You                                                   "<<endl;
        return 0;
}