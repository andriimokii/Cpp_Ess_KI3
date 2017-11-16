#include <iostream>
using namespace std;

int main( void ) {
	int N = 0; 
	long res = 0;
	cin >> N;
	for( int i = 1 ; i <= N ; i++ ) 
		res+=(long)i;
	cout << res << endl;
	return 0;
}
