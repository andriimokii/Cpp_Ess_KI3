#include <iostream>

using namespace std;

int main()
{
    int sys;
    float m, ft, in;
    while(1){
    cout << "Enter 0 for metric, Enter 1 for imperial: ";
    cin >> sys;
    if(sys == 0){
        cout << "Enter meters: ";
        cin >> m;
        cout << (int)(m/0.3048) << "\'" << (m/0.3048 - (int)(m/0.3048))*12 << "\"\n";
    }
    else if(sys == 1){
        cout << "Enter feet: ";
        cin >> ft;
        cout << "Enter inches: ";
        cin >> in;
        cout << ft * 0.3048 + in * 0.0254 << "m\n";
    }

    }


    return 0;
}
