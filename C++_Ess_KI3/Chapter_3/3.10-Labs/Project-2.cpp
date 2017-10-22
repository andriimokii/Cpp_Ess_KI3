#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Collection {
        int elno;
        int *elements;
};
void AddToCollection( Collection &col, int element );
void PrintCollection( Collection col );

int main( void ) {
	Collection collection = {0, NULL};
	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for( int i = 0 ; i < elems ; i++ )  
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete [] collection.elements;
	return 0;
}

void AddToCollection(Collection &col, int element) {
	if( col.elno == 0 ) {
		col.elements = new int[1];
		*col.elements = element;
		col.elno++;
	}
	else {
		int *ptr = new int[col.elno + 1];
		for( int i = 0 ; i < col.elno ; i++ ) 
			ptr[i] = col.elements[i]; 
		*(ptr + col.elno) = element;
		delete [] col.elements;
		col.elements = ptr;
		col.elno++;
	}
}

void PrintCollection( Collection col ) {
	cout << "[";
	for( int i = 0 ; i < col.elno ; i++ )
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}
