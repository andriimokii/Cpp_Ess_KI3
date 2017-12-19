#include <iostream>
#include <cmath>
using namespace std;

inline void increment( int &intvar, int expr = 1 ) {
        intvar+=expr;
}
inline void increment( float &floatvar, float expr = 1. ) {
	floatvar+=expr;
}


int main( void) {
	int intvar = 0;
	float floatvar = 1.5;
	for( int i = 0 ; i < 10 ; i++ ) {
		if( i % 2 ) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar, i);
			increment(floatvar);
		}
	}
	cout << intvar * floatvar << endl;
	return 0;
}

