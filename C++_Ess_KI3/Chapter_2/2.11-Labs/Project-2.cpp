#include <iostream>
using namespace std;

int main( void ) {
	struct TIME {
		short hours, minutes;
	}time1,time2;
	short hpassed, mpassed;
	cout << "Start hours: ";
	cin >> time1.hours;
	cout << "Start minutes: ";
	cin >> time1.minutes;
	cout << "End hours: ";
	cin >> time2.hours;
	cout << "End minutes: ";
	cin >> time2.minutes;
	if( (time1.hours >=0 && time1.hours < 24) && (time2.hours >=0 && time2.hours < 24) && 
(time1.minutes >=0 && time1.minutes < 60) && (time2.minutes >=0 && time2.minutes < 60) ) {
		if( time2.hours >= time1.hours ) {
			if( time2.hours > time1.hours ) {
				hpassed = time2.hours - time1.hours;
				if( time2.minutes < time1.minutes ) {
					mpassed = time2.minutes + 60 - time1.minutes;
					hpassed--;
				}
				else
					mpassed = time2.minutes - time1.minutes;

			}
			else if ( time2.minutes >= time1.minutes ) {
				hpassed = time2.hours - time1.hours;
				mpassed = time2.minutes - time1.minutes;
			}
			else
				cout << "Bad time\n";
		}
		else
			cout << "Bad time\n";
		cout << hpassed << ':' << mpassed << endl;
	}
	else
		cout << "Bad time\n";
	return 0;
}
				
				
			
			
