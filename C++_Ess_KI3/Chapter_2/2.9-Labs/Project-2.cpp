#include <iostream>
using namespace std;

int main( void ) {
	unsigned short sum = 0;
	unsigned short banknotes[5] = {0, 0, 0, 0, 0};
	cin >> sum;
	do {
		if( sum >= 50 ) {
			sum-=50;
			banknotes[0]++;
		}
		else if( sum >= 20 ) {
			sum-=20;
			banknotes[1]++;
		}
		else if( sum >= 10 ) {
			sum-=10;
			banknotes[2]++;
		}
		else if( sum >= 5 ) {
			sum-=5;
			banknotes[3]++;
		}
		else if( sum >= 1 ) {
			sum--;
			banknotes[4]++;
		}
	}
	while( sum );
	for( int c = 0 ; c < 5 ; c++ ) {
		while( banknotes[c] ) {
			switch( c ) {
				case 0: cout << "50 "; break;
				case 1: cout << "20 "; break;
				case 2: cout << "10 "; break;
				case 3: cout << "5 "; break;
				case 4: cout << "1 "; 
			}
			banknotes[c]--;
		}
	}
	cout << endl;
	return 0;
}
