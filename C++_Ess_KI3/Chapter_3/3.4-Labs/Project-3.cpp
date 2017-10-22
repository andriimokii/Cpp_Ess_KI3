#include <iostream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap( int year ) {
        if(year%4 != 0)
                return false;
        else if(year%100 != 0)
                return true;
        else if(year%400 != 0)
                return false;
        else
                return true;

}

int monthLength( int year, int month ) {
        if( isLeap( year ) ) {
                int mlen[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
                return mlen[month - 1];
        }
        else {
                int mlen[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
                return mlen[month - 1];
        }
}

int dayOfYear( Date date ) {
	int days  = 0, months = date.month - 1;
	while( months >= 1 ) {
		days += monthLength( date.year, months );
		months--;
	}
	days+=date.day;
	return days;
	
		
}

int main( void ) {
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}
