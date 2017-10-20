#include <iostream>
#include <cmath>
using namespace std;

int main( void ) {
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean, HarmonicMean, GeometricMean = 1., RootMeanSquare;
	for( int c = 0 ; c < n ; c++ ) {
		ArithmeticMean+=vector[c];
		HarmonicMean+=1/vector[c];
		GeometricMean*=vector[c];
		RootMeanSquare+=pow(vector[c], 2);
		if( c == n - 1 ) {
			ArithmeticMean/=n;
			HarmonicMean = n / HarmonicMean;
			GeometricMean = pow( GeometricMean, pow(n,-1));
			RootMeanSquare = sqrt(RootMeanSquare / n);
		}
	}
	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean = " << HarmonicMean << endl;
	cout << "Geometric Mean = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
	return 0;
}
	
