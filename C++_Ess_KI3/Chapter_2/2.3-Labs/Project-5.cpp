#include <iostream>
using namespace std;
int main ( void ) {
	int side;
	cout << "Enter side: ";
	cin >> side;
	if( side > 1 && side < 100 ) {
		cout << '+';
		for( int w = 0 ; w < side - 2 ; w++ ) 
			cout << '-';
		cout << '+' << endl;
		for( int h = 0 ; h < side -2 ; h++ ) {
			cout << '|';
			for( int w = 0 ; w < side - 2 ; w++ )  
                        	cout << ' ';
			cout << '|' << endl;
		}
		cout << '+';
                for( int w = 0 ; w < side - 2 ; w++ )
                        cout << '-';
                cout << '+' << endl;

	}
	else
		cout << "Not good value!\n";
}
			
			 
		
	
