#include <iostream>
using namespace std;

int main( void ) {
	double pi4 = 0.;
	long n, down = 1;
	cout << "Number of iterations? ";
	cin >> n;
	for( long cnt = 0 ; cnt < n ; cnt++, down+=2 ) {
		if( cnt % 2 ) 
			pi4-=1./down;
		else
			pi4+=1./down;
	}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}
			
