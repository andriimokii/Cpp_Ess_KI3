#include <iostream>

using namespace std;

int main()
{
    int year, a, b, c, d, e;
    while(1){
    cin >> year;
    a = year%19;
    b = year%4;
    c = year%7;
    d = (a*19 + 24) % 30;
    e = (2*b + 4*c + 6*d + 5)%7;
    if(d + e < 10)
        cout << "March " << d + e + 22;
    else
        cout << "April " << d + e - 9;
    }
    return 0;
}
