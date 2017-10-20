#include <iostream>
using namespace std;

int main( void ) {
	unsigned long val = 0;
	short res = 0;
	cout << "Enter value: ";
	cin >> val;
	for( int c = 0 ; c < 64 ; c++ ) {
		
		if( val & 1 ) {
			res++;
		}
		if( c != 63 ) {
			val >>= 1;
		}
	}
	cout << "Sum 1s: " << res << endl;	
	return 0;
}	
