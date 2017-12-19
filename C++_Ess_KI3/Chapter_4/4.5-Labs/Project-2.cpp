#include <iostream>
#include <string> 
using namespace std;

int main( void ) {
	string sentence;
	bool Flag = false;
	getline(cin, sentence);
	for( int i = sentence.size() ; i > 0 ; i-- ) {
		if( sentence[i] == ' ' && Flag == false ) {
			Flag = true;
			continue;
		}
		else if(Flag == true && sentence[i] == ' ') {
			sentence.erase(i,1);
			Flag = true;
		}
		else
			Flag = false;
	}
	cout << sentence << endl;
	return 0;
}
