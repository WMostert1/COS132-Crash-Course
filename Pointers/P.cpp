#include <iostream>

using namespace std;

int main(){

	int* x = new int;

	//The "reference" or address of x
	cout << x << endl;

	//The actual variable at x
	cout << *x << endl;

	*x = 11;

		//The "reference" or address of x
	cout << x << endl;

	//The actual variable at x
	cout << *x << endl;

	//int* x = 5;


	return 0;
}