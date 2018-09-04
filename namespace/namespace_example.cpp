#include <iostream>



// namespace
// 같은 함수명들을 사용할 때 namespace를 이용 
namespace MySpace
{
	int doSomething(int a, int b) {
		return a + b;
	}
}

namespace MySpace2{
	int doSomething(int a, int b) {
		return a * b;
	}
}

namespace OutterSpace {
	namespace InnerSpace {
		int doSomething(int a, int b) {
			return (a - b) > 0 ? 1 : 0;
		}
	}
}

//int doSomething(int a, int b) {
//	return a * b;
//}

using namespace std;

int main() {
	cout << MySpace::doSomething(3, 4) << endl;
	cout << MySpace::doSomething(3, 4) << endl;

	using namespace MySpace;
	cout << doSomething(3, 4) << endl;

	cout << OutterSpace::InnerSpace::doSomething(4, 3) << endl;
}

// using namespace의 doSomthing과 doSomething 2개의 함수가 중복되어 오류
// 오류 안나도록 하기 위해서는 동일 명의 함수를 서로 다른 namespace에 넣거나 
// ::을 이용하여야함.
