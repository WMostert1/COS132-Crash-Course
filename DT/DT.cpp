#include <iostream>

using namespace std;

int main(){
	cout << "Data Type	: Size in bits" << endl;
	cout << "------------------------------" << endl;
	cout << "int    		: " << sizeof(int)*8 << endl;
	cout << "unsigned int	: " << sizeof(unsigned int)*8 << endl;
	cout << "char   		: " << sizeof(char)*8 << endl;
	cout << "unsigned char	: " << sizeof(unsigned char)*8 << endl;
	cout << "string 		: " << sizeof(string)*8 << endl;
	cout << "double 		: " << sizeof(double)*8 << endl;
	cout << "float  		: " << sizeof(float)*8 << endl;
	return 0;
}