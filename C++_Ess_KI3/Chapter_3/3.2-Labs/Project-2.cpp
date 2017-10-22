#include <iostream>
using namespace std;

int main( void ) {
	int matrix[10][10] = { }, *ptr, iter;
	int size = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	for( int i = 0 ; i < size ; i++ ) {
		iter = 0;
		ptr = &matrix[i][0];
		for( int j = 0 ; j < size ; j++ ) {
			iter += i + 1;
			*( ptr + j ) = iter;
		}
	}
	for( int i = 0 ; i < size ; i++ ) {
		for( int j = 0 ; j < size ; j++ ) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}
		 
