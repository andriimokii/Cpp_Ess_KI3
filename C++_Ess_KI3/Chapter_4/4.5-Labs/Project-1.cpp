#include <iostream>
#include <string>
using namespace std;

string isIP( string &IP );

int main( void ) {
	string IP;
	cin >> IP;
	cout << isIP(IP) << endl;
	return 0;
}

string isIP( string &IP ) {
	int dotc = 0;
	for( int i = 0 ; i < IP.size() ; i++ ) {
		if( IP[i] == '.' ) 
			dotc++;
		if( dotc > 3 && i + 1 == IP.size() )
                	return "Too many parts";
	}
	int start_sub = 0, start_find = 0;
	string arrdig = "0123456789";
	for( int j = 0 ; j <= dotc ; j++ ) {
		if( j != dotc ) { 
			if(IP.substr(start_sub,IP.find('.',start_find)-start_sub).size() > 3 ) {
				return "Too many characters in a part";
			}
			else {
				for( int i = 0 ; i < IP.substr(start_sub,IP.find('.',start_find)-start_sub).size() ; i++ ) {
					bool Flag = false;
					for( int k = 0 ; k < arrdig.size() ; k++ ) {
						if(IP.substr(start_sub,IP.find('.',start_find)-start_sub).compare(i,1,arrdig,k,1) == 0) {
							Flag = true;
							break;	
						}
					}
					if(Flag == false)
						return "Only digits and dots allowed";
					else if( stoi(IP.substr(start_sub,IP.find('.',start_find)-start_sub)) > 255 )
						return "Too big a value of a part"; 
				}
				start_sub = IP.find('.', start_find) + 1;
				start_find = start_sub;
				
			}
		}
		else {
			if(IP.size() - start_sub > 3 ){
				return "Too many characters in a part!";
			}
			else {
                                for( int i = 0 ; i < IP.substr(start_sub,IP.size()-start_sub).size() ; i++ ) {
                                        bool Flag = false;
                                        for( int k = 0 ; k < arrdig.size() ; k++ ) {
                                                if(IP.substr(start_sub,IP.size()-start_sub).compare(i,1,arrdig,k,1) == 0) {
                                                        Flag = true;
                                                        break;
                                                }
                                        }
                                        if(Flag == false)
                                                return "Only digits and dots allowed";
                                        else if( stoi(IP.substr(start_sub,IP.size()-start_sub)) > 255 )
                                                return "Too big a value of a part";
                                }
                                

                        }




		}	
	}
	return "Correct IP";
	
}
