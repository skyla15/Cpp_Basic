#include <iostream>

using namespace std;


/*

	C++17
	namespace work1::work2::work3{
	}
	
	C++14
	namespace work1{
		namespace work2{
			namespace work3{
			}
		}
	}
	
*/

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

