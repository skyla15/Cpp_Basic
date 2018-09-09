#include <iostream>
#include <windows.h>


using namespace std;

class CallByRef {
	public :
		int size;
		CallByRef();
		CallByRef(int size);
};

CallByRef::CallByRef() {
	size = 10;
}

CallByRef::CallByRef(int size) :size{ size } {}

// 객체에 저장된 값을 복사하여 매개 변수 cbr로 전달됨 
// 따라서 여기서의 cbr과 main에 선언된 cbr은 서로 다른 객체를 참조하는 것 
// 매개 변수의 객체 생성자는 호출이 안되나 소멸자는 호출이 됨
// 즉 MakeDouble이 종료될 때 매개 변수 객체 cbr 소멸됨.
void MakeDouble(CallByRef cbr) {
	cbr.size *= 2;
}

// main에 선언된 cbr을 참조하는 참조자 cbr을 통하여 원본 객체의 값에 접근 
void MakeDoubleCallByValue(CallByRef& cbr) {
	cbr.size *= 2;
}

int main() {
	CallByRef cbr;
	MakeDouble(cbr);
	cout << "Make Double : " <<  cbr.size << endl; // 10

	MakeDoubleCallByValue(cbr);
	cout << "Make Double Call By Value : " << cbr.size << endl;  // 20 

	system("pause");
}
