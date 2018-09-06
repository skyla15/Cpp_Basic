#include <iostream>

void doSomething() {

	using namespace std;

#ifdef LIKE_APPLE
	cout << "apple" << endl;
#endif


#ifndef LIKE_APPLE
	cout << "orange" << endl;
#endif
}
