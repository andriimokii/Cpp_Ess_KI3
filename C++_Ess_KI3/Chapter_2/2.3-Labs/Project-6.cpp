#include <iostream>
using namespace std;

int main ( void ) {
	short h = 0, wfull = 15;
	cout << "Enter heights: ";
	cin >> h;
	for( int hcount = 0 ; hcount < h ; hcount++ ) {
		for( int wcount = 0 ; wcount < wfull ; wcount++ ) {
			if( hcount == 0) {
				if( wcount == wfull/2) 
					cout << '*';
				else  
					cout << ' ';
			}
			else {
				if( hcount + 1 != h) {
					if( wcount == wfull/2 - hcount |  wcount == wfull/2 + hcount ) 
						cout << '*';
					else 
						cout << ' ';
				}
				else if( wcount >= wfull/2 - hcount && wcount <= wfull/2 + hcount )
					cout << '*';
				else
					cout << ' ';
		 	}
		}
		cout << '\n';
	}
	return 0;
}
					

				
			
