#include <iostream>
using namespace std;

bool isPrime( int val ) {
	bool res = true;
	if( val > 1 ) {
		for( int i = 2 ; i < val ; i++ ) {
			if(val%i == 0 && val != i)
				return res = false;
		}
		return res;
	}
	else
		return res = false;
}

int main( void ) {
	for( int i = 0 ; i <= 21 ; i++ ) {
		if( isPrime(i) )
			cout << i << " ";
	}
	cout << endl;
	return 0;
}
 
