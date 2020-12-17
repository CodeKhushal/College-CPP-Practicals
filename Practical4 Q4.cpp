//To display season using name of month.
#include<iostream>
using namespace std;
int main()
{
    int mon;
    cout<<" 1. January \n 2. February \n 3. March \n 4. April \n 5. May \n 6. June \n 7. July \n 8. August \n 9. September \n 10. October \n 11. November \n 12. December"<<endl;
    cout<<" Enter month code to know the season:  ";
    cin>>mon;
    switch(mon)
    {
    case 11:

    case 12:

    case 1:
        cout<<" The season is Winter";
        break;
    case 2:

    case 3:

    case 4:
        cout<<" The season is Spring";
        break;
    case 5:

    case 6:

    case 7:
        cout<<" The season is Summer";
        break;
    case 8:

    case 9:

    case 10:
        cout<<" The season is Autumn";
        break;
    default:
        cout<<" Enter a valid choice as shown above";
    }
    return 0;
}
