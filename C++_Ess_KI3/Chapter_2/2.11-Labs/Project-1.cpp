#include <iostream>
using namespace std;

int main( void ) {
	struct TIME {
        unsigned short hours;
        unsigned short minutes;
}time;

	unsigned mpassed = 0;
	cout << "Enter hours: ";
	cin >> time.hours;
	cout << "Enter minutes: ";
	cin >> time.minutes;
	cout << "Enter minutes passed: ";
	cin >> mpassed;
	if( (time.hours >= 0 && time.hours < 24) && (time.minutes >= 0 && 
time.minutes < 60) && (mpassed >= 0)) {
		time.minutes += mpassed;
		while( time.minutes >= 60 ) {
			time.minutes-=60;
			if(time.hours++ >= 24)
				time.hours-=24;
		}
		cout << time.hours << ':' << time.minutes << endl;	
	}
	else
		cout << "Not correct values\n";
	return 0;
}
			   
