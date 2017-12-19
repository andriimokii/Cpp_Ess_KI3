#include <iostream>

using namespace std;

int main()
{
    float grossprice, taxrate, netprice, taxvalue;
    while(1){
    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;
    taxrate/=100;
    if(taxrate > 0){
        if(taxrate < 100){
            if(grossprice > 0){
                netprice = grossprice / (1 + taxrate);
                taxvalue = grossprice - netprice;
                cout << "Net price: " << netprice << endl;
                cout << "Tax value: " << taxvalue << endl;
            }
            else
                cout << "grossprice is 0 or lower\n";


        }
        else
            cout << "Taxrate is more or = 100\n";


    }
    else
        cout << "Taxrate is below 0\n";
    }
    return 0;
}
