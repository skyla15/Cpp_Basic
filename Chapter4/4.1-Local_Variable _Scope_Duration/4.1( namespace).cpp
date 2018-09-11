#include <iostream>

using namespace std;

namespace space1
{
	void doSomething() {
		cout << "space 1" << endl;
	}
}

namespace space2
{
	void doSomething() {
		cout << "space 2" << endl;
	}
}



int main()
{
	space1::doSomething;
	space2::doSomething;
	
	return 0;
}

