#include <iostream>
#include <string>
using namespace std;
int main( void ) {
	string stop, sent, *ptr, *ptr2;
	int count = 0, start_ = 0, count2 = 0;
	getline(cin,stop);
	getline(cin, sent);
	for( int i = 0 ; i < stop.size() ; i++ ) {
		if(stop[i] == ',' )
			count++;
	}
	for( int i = 0 ; i < sent.size() ; i++ ) {
                if(sent[i] == ' ' )
                        count2++;
        }
	ptr = new string[count+1];
	for( int i = 0 ; i <= count ; i++ ) {
		if(i != count) {
			*(ptr + i) =  stop.substr(start_,stop.find(",",start_)-start_);
			start_ = stop.find(",",start_) + 1;
		}
		else
			*(ptr + i) = stop.substr(start_,stop.size()-start_);
	}
	start_ = 0;
	ptr2 = new string[count2+1];
	for( int i = 0 ; i <= count2 ; i++ ) {
                if(i != count2) {
                        *(ptr2 + i) =  sent.substr(start_,sent.find(" ",start_)-start_);
                        start_ = sent.find(" ",start_) + 1;
                }
                else
                        *(ptr2 + i) = sent.substr(start_,sent.size()-start_);
        }
/*
	for( int i = 0 ; i <= count ; i++ ) {
		if(sent.find(ptr[i].append(1,' ')) != string::npos) {			
			sent.erase(sent.find(ptr[i]),ptr[i].size());
		}
	}*/
	for( int i = 0 ; i <= count ; i++ ) {
                for( int j = 0 ; j <= count2 ; j++ ) {
			if( ptr[i].size() != ptr2[j].size() ) {
				continue;
			}
			for( int l = 0 ; l < ptr[i].size() ; l++ ) {
					if( (ptr[i][l] != ptr2[j][l]) && (ptr[i][l] - 'a' + 'A' != ptr2[j][l]) ) {
						break;
					}
					if( l == ptr[i].size() - 1 ) {
						ptr2[j] = "*";
					}
			}
		}
						
					
						
	}
	for( int j = 0 ; j <= count2 ; j++ ) {
		if( ptr2[j] != "*")
			cout << ptr2[j] << ' ';
	}
	cout << endl;

	return 0;
}
