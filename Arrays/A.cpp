#include <iostream>

using namespace std;

int main(){
	const int arraySize = 10;
	int loveMeLikeYouDo[arraySize];
	//Arrays are indexed 0 to array.length-1
	for(int i = 0; i < arraySize; i++){
		loveMeLikeYouDo[i] = i+1*2;
	}

	//The value located at 5
	cout << loveMeLikeYouDo[5] << endl;

	cout << loveMeLikeYouDo[0] << endl;

	//What if I forgot the [ ]?
	cout << loveMeLikeYouDo << endl;

	cout << *loveMeLikeYouDo << endl;

	return 0;
}