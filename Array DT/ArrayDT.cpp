#include <iostream>

using namespace std;

int main(){
	cout << "Data Type	: Size in bits" << endl;
	cout << "------------------------------" << endl;
	cout << "int    		: " << sizeof(int)*8 << endl;
	cout << "int [ ]		: " << sizeof(int[0])*8 <<endl;
	cout << "int [1]		: " << sizeof(int[1])*8 <<endl;
	cout << "int [10]	: " << sizeof(int[10])*8 <<endl;
	cout << "string*		: " << sizeof(string*) <<endl;
	cout << "int*		: " << sizeof(int*) <<endl;
	cout << "double*		: " << sizeof(double*) <<endl;

	return 0;
}