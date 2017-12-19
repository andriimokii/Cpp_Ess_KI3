#include <iostream>
using namespace std;
int main( void ) {
	short val = 0;
	unsigned long res = 1;
	cout << "Enter \'n\': ";
	cin >> val;
	for( int c = 1 ; c <= val ; c++ ) {
		res *= c;  
	}
	cout << res << endl;
	return 0;
}
