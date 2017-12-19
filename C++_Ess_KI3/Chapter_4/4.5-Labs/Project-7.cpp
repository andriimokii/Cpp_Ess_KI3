#include <iostream>
#include <string>
using namespace std;
int main( void ) {
	string pattern, sentence, digit = "0123456789", alphabet = "qwertyuiopasdfghjklzxcvbnm", found_str, result = "";
	int found = 0, INFINIT = 99999999;
	getline(cin,pattern);
	getline(cin,sentence);
	/*if( pattern[0] == 'D' ) {
               for( int i = 0 ; i < digit.size() ; i++ ) {
                        if(sentence.find(digit[i],found) != string::npos) {
                                found = sentence.find(digit[i],found) + 1;
                                found_str = digit[i];
                                break;
                        }
                        else if(i == digit.size() - 1) {
                                goto finish;
                        }
                }
        }
        else {

                if(sentence.find(pattern[0],found) != string::npos) {
                        found = sentence.find(pattern[0],found) + 1;
                        found_str = pattern[0];
                }
                else
                        goto finish;
        }*/
	while( found < sentence.size() ) {
	
	if( pattern[0] == 'D' ) {
                for( int i = 0 ; i < digit.size() ; i++ ) {
                        if(sentence.find(digit[i],found) != string::npos) {
                                found = sentence.find(digit[i],found) + 1;
                                found_str = digit[i];
                                break;
                        }
                        else if(i == digit.size() - 1) {
                                goto finish;
                        }
                }
        }
        else {

                if(sentence.find(pattern[0],found) != string::npos) {
                        found = sentence.find(pattern[0],found) + 1;
                        found_str = pattern[0];
                }
                else
                        goto finish;
        }
	for( int i = 1 ; i < pattern.size() ; i++ ) {
		if(pattern[i] == 'D') {
			for( int j = 0 ; j < digit.size() ; j++ ) {
				 if(sentence.find(digit[j],found) != string::npos && sentence.find(digit[j],found) == found) {
                        		found = sentence.find(digit[j],found) + 1;
                        		found_str+=digit[j];
					break;
                		 }
				else {
                        		found_str+=digit[j];
                        		if(sentence.find(found_str,found) != string::npos) {
                                		found = sentence.find(found_str,found) + 1;
                        		}
                        		else {
                                		found = INFINIT;
                                		goto result;
                        		}
                		}

			}
		}
		else {
	
	
			if(sentence.find(pattern[i],found) != string::npos && sentence.find(pattern[i],found) == found) {
				found = sentence.find(pattern[i],found) + 1;
				found_str+=pattern[i];	
			}
			else {
				found_str+=pattern[i];
				if(sentence.find(found_str,found) != string::npos) {
					found = sentence.find(found_str,found) + 1;
				}
				else {
					found = INFINIT;
					break;
				}
			}
		}
	}
result:
	if( found_str.size() == pattern.size() ) {
		result +=found_str + " ";
	}
	}
finish:
	cout << result << endl;
	return 0;
}
		
