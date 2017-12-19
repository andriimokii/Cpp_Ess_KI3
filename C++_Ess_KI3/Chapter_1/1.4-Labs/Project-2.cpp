#include <iostream>

using namespace std;

int main(void) {

float pi = 3.14159265359;
float x,y,xpi,xpl,xmi;

cout << "Enter value for x: ";
cin >> x;

xpi = x * x / (pi * pi);
xpl = x * x + 1./2;
xmi = x * x - 1./2;
y = xpi / xpl * (1. + xpi / (xmi * xmi));
// put your code here

cout << "y = " << y << endl;
return 0;
}
