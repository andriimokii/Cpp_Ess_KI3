#include <iostream>
using namespace std;

int main( void ) {
	int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13}, *ptr = vector, min = 99999;
	int size = sizeof(vector) / sizeof(vector[0]);
	for( int c = 0 ; c < size ; c++ ) {
		if( *(ptr + c) < min )
			min = *(ptr + c);
	}
	cout << "Min value is: " << min << endl;
	return 0;
}
	
