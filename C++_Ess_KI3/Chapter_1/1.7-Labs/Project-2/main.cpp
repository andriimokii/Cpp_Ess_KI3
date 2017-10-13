#include <iostream>

using namespace std;

int main()
{
    float v1, v2, eps = 0.000001;
    string result;
    cout << "[1]: ";
    cin >> v1;
    cout << "[2]: ";
    cin >> v2;

    v1/=1;
    v2/=1;

    result = abs(v1-v2) < eps ? "equal " : "not equal ";
    cout << "Results are " << result << "(by " << fixed << eps << " epsilon)" << endl;
    return 0;
}
