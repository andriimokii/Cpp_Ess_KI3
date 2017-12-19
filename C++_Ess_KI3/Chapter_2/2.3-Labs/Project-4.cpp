#include <iostream>
using namespace std;

int main( void ) {
        int pwr = 0;
        double res = 1.;
        cout << "Enter n-th power: ";
        cin >> pwr;
        for( int cnt = 1 ; cnt <= pwr ; cnt++ )
                res/= 2.;
	cout.precision(20);
        cout << res << endl;
        return 0;
}



