// Void Pointer
/*
	1) 어떤 자료형의 주소를 저장할 수 있음 
	2) 참조연산자 *를 사용할 경우 casting 없이는 오류 
	3) 포인터 연산 불가능 ptr + 1 등 

	4) 깔끔하게 사용하는 방법 => enum으로 타입 선언 후 사용 시 타입 선언 
     => 현재는 
*/

#include <iostream>

enum Type
{
	INT, 
	FLOAT,
	DOUBLE,
};
using namespace std;

int main() 
{

	float f = 3.0;
	void *ptr = nullptr;
	ptr = &f;

	// cout << *ptr << endl;
	// 에러 : ptr 형이 불완전 
	cout << *(float*)ptr << endl;

}
