#include <iostream>
#include "MyConstants.h"

void doSomething() {
	using namespace std;
	cout << "test : " << Constants::pi << " " << &Constants::pi << endl;
}
