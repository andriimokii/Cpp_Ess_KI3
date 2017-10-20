#include <iostream>
using namespace std;

int main( void ) {
	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];
	for( int c = 0 ; c < 7 ; c++ ) {
		if( c == 0 ) {
			vector2[c] = vector1[6];
		}
		else {
			vector2[c] = vector1[c - 1];
		}
	}
	for( int c = 0 ; c < 7 ; c++ ) {
		cout << vector2[c] << ' ';
	}
	cout << endl;
	return 0;
}
		
