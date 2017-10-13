#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float v1, v2, v3, v4, v5;
    cout << "Put these values into your code:" << endl;
    cin >> v1 >> v2 >> v3 >> v4 >> v5;
    cout << v1 << endl << v2 << "0\n" << fixed << v3 << endl << setprecision(2) << v4 << endl << (int)v5 << endl;
    return 0;
}
