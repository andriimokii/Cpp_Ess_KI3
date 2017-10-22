#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main( void ) {
	int maxball = 0, ballsno = 0, *arrptr, rnd = 0;
	bool isBall = false;
	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	if( maxball < ballsno ) 
		return 1;

	arrptr = new int[ballsno];
	for( int i = 0 ; i < ballsno ; i++ ) {
		do {
			
			isBall = false;
			srand(time(NULL));
			rnd = rand() % maxball + 1;
			if( i == 0 ) {
				break;
			}
			for( int j = 0 ; j < i ; j++ ) {
				if( rnd == arrptr[j]) {
					isBall = true;
					break;
				}
			}
			
		}
		while(isBall);
		arrptr[i] = rnd;
	}
	for( int i = 0 ; i < ballsno ; i++ ) 
		cout << arrptr[i] << ' ';
	cout << endl;
	delete [] arrptr;
	return 0;
}
