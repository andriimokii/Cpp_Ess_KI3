#include <iostream>

using namespace std;

int main()
{
    int o1, o2, o3, o4;

    while(1){
        cin >> o1;
        if(o1 > 0 && o1 < 256){
            while(1){
            cin >> o2;
            if(o2 > 0 && o2 <256){
                while(1){
                cin >> o3;
                if(o3 > 0 && o3 < 256){
                    while(1){
                    cin >> o4;
                    if(o4 > 0 && o4 < 256){
                        cout << o1 << "." << o2 << "." << o3 << "." << o4 << endl;
                        return 0;
                    }
                    cout << "Try more time" << endl;}
                }
                cout << "Try more time" << endl;}
            }
            cout << "Try more time" << endl;}
        }
        cout << "Try more time" << endl;
   }

}
