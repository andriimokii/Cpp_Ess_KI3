#include <iostream>
#include <ctime>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today( void ) {
	time_t t = time( NULL );
	tm t1 = *localtime( &t );
	return {1900 + t1.tm_year, t1.tm_mon + 1, t1.tm_mday};
	
}

int main( void ) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}
