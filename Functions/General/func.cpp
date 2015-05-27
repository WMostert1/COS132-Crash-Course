#include <iostream>

using namespace std;

void voidFunction1();
void voidFunction2(){ cout << "I just called voidFunction2" <<endl;}
void voidFunction3(int);
void voidFunction3(int someParamater,char someChar);

int returnFunc();
int returnFunc1(){
	return 1;
}

void voidFunction1(){
	cout << "I just called voidFunction1" << endl;
}

void voidFunction3(int x){
	cout << "I just implemented and called voidFunction3 without specifying the parameter name in the prototype" << endl;
}

void voidFunction3(int someParamater,char someChar){
	cout << someParamater << " was someParamater and -" << someChar << "- was someChar for voidFunction3 with 2 parameters" << endl;

}

int returnFunc(){
	return 0;
}

int returnFunc2(int x, int y){
	return x + y * 3/x+x*x*x*x*y;
}



int main(){
	voidFunction1();
	voidFunction2();
	voidFunction3(5);
	voidFunction3(15,'p');

	cout << "returnFunc returned " << returnFunc() << endl;
	cout << "returnFunc1 returned " << returnFunc1() << endl;
	cout << "returnFunc2 returned " << returnFunc2(3,2) << endl;

	return 0;
}
