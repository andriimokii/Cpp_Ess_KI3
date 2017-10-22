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

int daysBetween( Date d1, Date d2 ) {
	if( d2.year >= d1.year ) {
		if( d2.year > d1.year ) {
			int days = 0;
			if( d2.year - d1.year > 1 ) {
				int startyear = d1.year + 1, endyear = d2.year - 1;
				for( startyear ; startyear <= endyear ; startyear++ ) {
					if(isLeap(startyear))
						days+=366;
					else
						days+=365;
				}
			}
			int endyear = d2.year, startyear = d1.year;
                        
                        	if(isLeap(startyear))
                                	days+=366 - dayOfYear(d1);
                                else
                                       	days+=365 - dayOfYear(d1);
		                days+=dayOfYear(d2);
                                return days;
                                  

                        

					
		}
		else
			if( d2.month >= d1.month ) {
				if( d2.month > d1.month ) {
					return dayOfYear(d2) - dayOfYear(d1);
				}
				else
					if( d2.day >= d1.day) {
						if(d2.day > d1.day) {
							return d2.day - d1.day;
						}
						else
							return 0;
					}
					else
						return -1;
			}
			else
				return -1;

	}
	else
		return -1;				
	
}

int main( void ) {
	Date since, till;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> till.year >> till.month >> till.day;
	cout << daysBetween(since, till) << endl;
	return 0;
}
