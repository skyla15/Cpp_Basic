#include <iostream>


using namespace std;

void doSomething(int x) {
	x = 123;
	cout << x << endl; // #2
}

int main() {
	int x = 0;
	cout << x << endl; // #1

	doSomething(x);
	// doSomething이라는 로컬 영역 이후 해당 변수 해제 ( #2 )

	cout << x << endl; // #3 

	return 0;
}

