#include <iostream>
using namespace std;

int main( void ) {
	short var = 0;
	double x1 = 0., x2 = 0.;
	while( 1 ){
		cout << "Menu:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice: ";
		cin >> var;
		switch( var ) {
			case 0: return 0;
			case 1: cin >> x1 >> x2; cout << x1 + x2 << endl; break;
			case 2: cin >> x1 >> x2; cout << x1 - x2 << endl; break;
			case 3: cin >> x1 >> x2; cout << x1 * x2 << endl; break;
			case 4: if( x2 ) {
					cin >> x1 >> x2; cout << x1 / x2 << endl; break;
				}
				else {
					puts( "Division by 0!\n" ); break;
				}
			default: puts( "No such varient\n" ); 
		}
	}
	return 0;
}
	
	
