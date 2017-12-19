#include <iostream>
using namespace std;
int main() {
	int c0, count = 0;
	cout << "Enter integer: ";
	cin >> c0;
	do {
		if( c0 % 2 == 0 ) 
			c0/=2;
		else
			c0 = 3 * c0 + 1;
		cout << c0 << endl;
		count++;
	}
	while( c0 != 1 );
	cout << "steps = " << count << endl;
	return 0;
}
