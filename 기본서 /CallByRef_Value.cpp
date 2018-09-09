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
// 따라서 여기서의 cbr1과 main에 선언된 cbr은 서로 다른 객체를 참조하는 것 
// 매개 변수의 객체 생성자는 호출이 안되나 소멸자는 호출이 됨
// 즉 MakeDouble이 종료될 때 매개 변수 객체 cbr1 소멸됨.
void MakeDouble(CallByRef cbr1) {
	cbr1.size *= 2;
}

// main에 선언된 cbr을 참조하는 참조자 cbr2을 통하여 원본 객체의 값에 접근 
void MakeDoubleCallByValue(CallByRef& cbr2) {
	cbr2.size *= 2;
}


// cbr3 와 cbr4는 서로 다른 객체. cbr4로 cbr3의 값들이 복사되는 것. 
// createClass가 종료될 때 cbr3객체는 사라지고 cbr4로 값들이 복사되는 것 
CallByRef createClass() {
	CallByRef cbr3(100);
	return cbr3;
}


int main() {
	CallByRef cbr;
	
	MakeDouble(cbr);
	cout << "Make Double : " <<  cbr.size << endl; // 10

	MakeDoubleCallByValue(cbr);
	cout << "Make Double Call By Value : " << cbr.size << endl;  // 20 

	CallByRef cbr4 = createClass();
	cout << "cbr 4 : " << cbr4.size << endl; // 100

	system("pause");
}
