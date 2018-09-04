#include <iostream>

int main() {
	using namespace std;
	
	// void my_void; 
	// 메모리를 차지하지 않기때문에 선언 불가

	int i = 123;
	float f = 123.456f;

	void *my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	// void형 포인터로 각 변수가 갖는 주솟값을 가져옴 
	 
	system("pause");

}
