#include <iostream>

using namespace std;

int main()
{
    int year, month, daym;
    while(1){
    cout << "Year: ";
    cin >> year;
    cout << "Month of Year: ";
    cin >> month;
    cout << "Day of Month: ";
    cin >> daym;
    month-=2;
    if(month <= 0){
        month+=12;
        year--;
    }
    month*=83;
    month/=32;
    month+=daym;
    month+=year;
    month+=year/4;
    month-=year/100;
    month+=year/400;
    cout << month%7<<endl;
    }

    return 0;
}
