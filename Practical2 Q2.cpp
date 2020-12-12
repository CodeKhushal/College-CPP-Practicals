//Q2:- To print first four lines of inventory report.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setprecision(2);
    cout<<"\tPart Number\tQty on Hand\tQty on Order\tPrice"<<endl;
    cout<<"\t "<<setw(6)<<setfill('0')<<31235<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<22<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<86<<"\t        $"<<setw(6)<<setfill(' ')<<"45.62"<<endl;
    cout<<"\t "<<setw(6)<<setfill('0')<<321<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<55<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<21<<"\t        $"<<setw(6)<<setfill(' ')<<"122.00"<<endl;
    cout<<"\t "<<setw(6)<<setfill('0')<<28764<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<0<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<24<<"\t        $"<<setw(6)<<setfill(' ')<<"0.75"<<endl;
    cout<<"\t "<<setw(6)<<setfill('0')<<3232<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<12<<"\t"<<"\t"<<setw(6)<<setfill(' ')<<0<<"\t        $"<<setw(6)<<setfill(' ')<<"10.91"<<endl;
    cout<<" "<<endl;
    cout<<"\tEnd of Report";
    return 0;
}
