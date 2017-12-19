#include <iostream>
using namespace std;

int main( void ) {
	unsigned val = 0, x1 = 1, x2 = 5, x3 = 5;
	cout << "Enter value: ";
	cin >> val;
	for( int c = 3 ; c < val  ; c+=2 ) {
		x3 = 2 * x2 - x1 + 8;
		x1 = x2;
		x2 = x3;
	}
	cout << x3 << endl;
	return 0;
}
