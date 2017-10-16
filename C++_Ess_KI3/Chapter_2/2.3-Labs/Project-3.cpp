#include <iostream>
using namespace std;

int main( void ) {
	int pwr = 0;
	unsigned long res = 1;
	cout << "Enter n-th power: ";
	cin >> pwr;
	for( int cnt = 1 ; cnt <= pwr ; cnt++ ) 
		res*= 2;
	cout << res << endl;
	return 0;
}
