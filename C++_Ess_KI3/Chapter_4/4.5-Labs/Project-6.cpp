#include <iostream>
#include <string>
using namespace std;

int main( void ) {
	string words;
	int find_sp = 0;
	bool isLetter = false;
	getline(cin,words);
	if(words.find(' ') != string::npos) {
		find_sp = words.find(' ');
		for( int i = 0 ; i < find_sp ; i++ ) {
			for( int j = 1 ; j <= find_sp ; j++ ) {
				if(words[i] == words[find_sp + j]) {
					isLetter = true;
					break;
				}
			}
			if(isLetter == false) {
				cout << "not anagrams\n";
				return 0;
			}
			isLetter = false;
		}
		cout << "is anagrams\n";
	}
	return 0;
}
			
