#include <iostream>
#include <cmath>

using namespace std;

const double E = exp(1);

double sigmoid(double x){
	return 1.0/(1+ pow(E,-x));
}

int main(){

	for(double x = -sqrt(3); x < sqrt(3);x += 0.1){
		cout <<"f(" << x << ") = " << sigmoid(x) << endl;
	}

	return 0;
}