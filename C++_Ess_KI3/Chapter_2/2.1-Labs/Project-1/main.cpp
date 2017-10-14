#include <iostream>

using namespace std;

int main()
{
    int year;
    while(1){
    cout << "Enter a year: ";
    cin >> year;
    if(year >= 1582){
        if(year%4 != 0)
            cout << "Its a Common year\n";
        else if(year%100 != 0)
            cout << "Its a Leap year\n";
        else if(year%400 != 0)
            cout << "Its a Common year\n";
        else
            cout << "Its a Leap year\n";
    }
    else
        cout << "Its not Gregorian calendar\n";
    }


    return 0;
}
