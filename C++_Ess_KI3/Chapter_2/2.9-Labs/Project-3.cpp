#include <iostream>
using namespace std;

int main( void ) {
	int vector[] = {2, 4, 6, 6, 4, 2};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
	for( int c = 0 ; c < n / 2 ; c++ ) {
		if( vector[c] != vector[n - c - 1] ) { 
			ispalindrome = false;
			break;
		}
	}
	if( ispalindrome ) 
		cout << "Its a palindrome\n";
	else
		cout << "Its not a palindrome\n";
	return 0;
}
