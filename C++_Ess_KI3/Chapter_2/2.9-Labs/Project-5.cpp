#include <iostream>
using namespace std;

int main( void ) {
	double matrix[][4] = { {2,1,2,3}, {1,2,7,9}, {2,7,2,8}, {3,9,8,2} };
	int upside = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	int downside = sizeof(matrix) / sizeof(matrix[0]);
	bool issymmetric = true;
	if( upside == downside ) {
		for( int row = 0 ; row < upside  - 1 ; row++ ) {
			for( int col = row ; col < upside - 1 ; col++ ) {
				if( matrix[row][col + 1] != matrix[col + 1][row] ) {
					issymmetric = false;
					break;
				}
			}
		}
	}
	else
		cout << "Matrix is not square matrix!\n";
	if(issymmetric) 
		cout << "Matrix is symmetric\n";
	else
		cout << "Metrix is not symmetric\n";
	return 0;
}
 
				 
