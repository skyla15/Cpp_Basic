
#include <iostream>

using namespace std;

int value = 123;

int main() {
	cout << value << endl; // 123

	int value = 1; 
	// shadowing, 전역으로 선언된 value를 main블록안에서 재선언함으로 
	// value = 1로 들어가게 됨 
	// 같은 이름이 전역 변수를 사용하기 위하여 
	// Global Scope 연산자 :: 를 사용 

	cout << value << endl; // 1

	// Global Scope 연산자 " :: " 
	cout << " ::value " <<::value << endl; // 123

}

