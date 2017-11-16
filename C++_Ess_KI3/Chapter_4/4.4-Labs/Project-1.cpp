#include <iostream>
#include <string>
using namespace std;

int main( void ) {
	string line, alph = "abcdefghijklmnopqrstuvwxyz";
	short clet[26] = { };
	bool isPangram = true;
	getline(cin, line);
	for( int i = 0 ; i < line.size() ; i++ ) {
		for( int j = 0 ; j < alph.size() ; j++ ) {
			if( line[i] == alph[j] || line[i] == alph[j] - 'a' + 'A' ) 
				clet[j]++;
		}
	}
	for( int i = 0 ; i < alph.size() ; i++ ) {
		if(clet[i] == 0) {
			isPangram = false;
			break;		
		}
	}
	if(isPangram)
		cout << "Pangram\n";
	else
		cout << "Not pangram\n";
	for( int i = 0 ; i < alph.size() ; i++ ) {
		cout << alph[i] << '-' << clet[i] << endl;
	}
	return 0;
}
