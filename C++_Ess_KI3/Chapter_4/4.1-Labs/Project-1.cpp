#include <iostream>
#include <iomanip>
using namespace std;

int main( void ) {
	int cnum = 0, gnum = 0, **arrcour;
	float *avgcour, sum = 0.;
	cin >> cnum;
	if( cnum <= 0)
		return 1;
	arrcour = new int *[cnum];
	avgcour = new float[cnum];
	for( int i = 0 ; i < cnum ; i++ ) {
		cin >> gnum;
		if( gnum <=0 )
			return 1;
		arrcour[i] = new int[gnum+1];
		arrcour[i][0] = gnum; 
		for( int j = 1 ; j <= gnum ; j++ ) { 
			cin >> arrcour[i][j];
			if( arrcour[i][j] < 1 || arrcour[i][j] > 5 )
				return 1;
			if( j ) 
				avgcour[i]+=arrcour[i][j];
		}
		avgcour[i]/=gnum;
		cout << endl;
	}
	cout.precision(2);
	for( int i = 0 ; i < cnum ; i++ ) {
		cout << "Course " << i + 1 << ": final " <<fixed<< avgcour[i] << ", grades: ";
		for(int j = 1 ; j <= arrcour[i][0] ; j++ ) {
			cout << arrcour[i][j] << ' ';
		}
		cout << endl;
	}
	for( int i = 0 ; i < cnum ; i++ ) 
		sum+=avgcour[i];
	cout << "Overall final "<< fixed << sum/cnum << endl;
	
	for( int i = 0 ; i < cnum ; i++ )
		delete[] arrcour[i];
	delete[] arrcour;
	return 0;
} 
	
