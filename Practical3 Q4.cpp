//To calculate charges of parking.
#include<iostream>
using namespace std;
int main()
{
     int hr_en,hr_lv,min_en,min_lv,hrs_st,min_st;
    float charges;
    char veh;
    cout<<"Enter the type of vehicle(C-Car  T-Truck  B-Bus): \t";
    cin>>veh;
    cout<<"Enter the entering hour of vehicle(0-24): \t";
    cin>>hr_en;
    if(hr_en>24)
        cout<<"Hours must be between 0-24";
    else
        cout<<"Enter the entering minute of vehicle(0-60): \t";
    cin>>min_en;
    if(min_en>60)
        cout<<"Minutes enter must be between 0-60";
    else
        cout<<"Enter the leaving hours of vehicle(0-24): \t";
    cin>>hr_lv;
    if(hr_lv>24||hr_lv<hr_en)
        if(hr_lv>24)
            cout<<"Hours must be between 0-24";
        else
            cout<<"Leaving hours must be more than entering hours";
    else
        cout<<"Enter the leaving minutes(0-60): \t";
    cin>>min_lv;
    if(min_lv>60)
        cout<<"Minutes must be between 0-60"<<endl;
    hrs_st=hr_lv-hr_en;
    if(min_lv>min_en)
        hrs_st=hrs_st+1;
    if(veh=='C')
        if(min_lv>60)
               charges=0.00;
        else if(hrs_st>3)
            charges=(hrs_st-3)*1.50;
             else
                charges=0.00;
    else if(veh=='T')
        if(min_lv>60)
                   charges=0.00;
        else if(hrs_st>=2)
        charges=(2*1)+(hrs_st-2)*2.30;
        else
            charges=1.0;
    else if(veh=='B')
          if(min_lv>60)
                    charges=0.00;
            else if(hrs_st>=1)
                charges=(1*2)+(hrs_st-1)*3.70;
                    else
                    charges=2.0;
   cout<<"Hours of stay:"<<hrs_st<<endl;
   cout<<"Your bill is: \t"<<"$"<<charges<<endl;
   cout<<"  "<<endl;
   cout<<"================================Rate of Parking================================"<<endl;
   cout<<"==============================================================================="<<endl;
   cout<<"  "<<endl;
   cout<<"Vehicle \t          First rate         \t           Second rate"<<endl;
   cout<<"Car     \t $0.00/hr, for first 3 hours \t $1.50/hr, after first 3 hours"<<endl;
   cout<<"Truck   \t $1.00/hr, for first 3 hours \t $2.30/hr, after first 3 hours"<<endl;
   cout<<"Bus     \t $2.00/hr, for first 3 hours \t $3.70/hr, after first 3 hours"<<endl;
   cout<<"  "<<endl;
   cout<<"==============================================================================="<<endl;
   cout<<"  "<<endl;
   cout<<"NOTE:- NO VEHICLE IS ALLOWED TO STAY IN THE PARKING LOT LATER THAN MIDNIGHT."<<endl;
   cout<<"       ANY VEHICLE THAT REMAINS PAST MIDNIGHT WILL BE TOWED AWAY."<<endl;
   cout<<"THANK YOU FOR USING PARKING LOT";
   return 0;
}
