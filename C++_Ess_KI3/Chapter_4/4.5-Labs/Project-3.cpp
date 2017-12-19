#include <string>
#include <iostream>
using namespace std;
int main( void ) {
	string sentence, tofind, *ptr;
	int pos_found, counter = 0, start_find = 0;
	getline(cin, sentence);
	while(1) {
		if(sentence.find(' ', start_find) != string::npos) {
			counter++;
		}
		else
			break;
		start_find = sentence.find(' ', start_find) + 1;
	}
	ptr = new string[counter];
	start_find = 0;
	for( int i = 0 ; i < counter ; i++ ) {
		if(sentence.find(' ', start_find) != string::npos) {
                        ptr[i] = sentence.substr(start_find, sentence.find(' ',start_find)-start_find);
                }
		start_find = sentence.find(' ', start_find) + 1;
	}
	for(int i = 0 ; i < counter ; i++) {
		if(i == counter - 1)
			break;
		for(int j = i + 1 ; j < counter ; j++ ) {
			if(ptr[i].compare(ptr[j]) == 0) {
				ptr[j] = "*";
			}
		}
	}
        for( int i = 0 ; i < counter ; i++ ) {
		if(ptr[i] != "*")
                	cout << ptr[i] << ' ';
        }
	cout << endl;

	 


	/*tofind = sentence.substr(start_sub, sentence.find(' ',start_find)-start_sub);
                if(sentence.find(' ', start_find + 1) != string::npos) {
                        pos_found = sentence.find(tofind, sentence.find(' ',start_find + 1));
                        sentence.erase(pos_found, sentence.find(' ',start_find)-start_sub);
                }
	
	cout << sentence << "\n";*/
	return 0;
}
