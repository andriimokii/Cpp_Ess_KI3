#include <iostream>
#include <string>
using namespace std;
int main( void ) {
	string from, to, sent;
	getline(cin, from);
	getline(cin, to);
	getline(cin, sent);
	if(sent.find(from) != string::npos) {
		int pos = sent.find(from);
		int size = from.size();
		sent.replace(pos,size,to);
		cout << sent << endl;
	}
	return 0;
}
