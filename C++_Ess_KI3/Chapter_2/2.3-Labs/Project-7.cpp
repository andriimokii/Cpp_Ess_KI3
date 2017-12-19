#include <iostream>
using namespace std;

int main( void ) {
	int n = 0;
	long val1 = 0, val2 = 1, res = 1;
	cout << "Enter \'n\': ";
	cin >> n;
	for( int c = 1 ; c < n ; c++ ) {
		res = val1 + val2;
		val1 = val2;
		val2 = res;
	}
	cout << res << endl;
	return 0;
}


