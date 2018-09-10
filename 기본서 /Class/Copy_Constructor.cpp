#include <iostream>
#include <string>


using namespace std;

class MyClass {
private : 
	std::string name;

public :
	MyClass(string n = "NoName"): name{ n } {
		cout << name << "생성되었습니다" << endl;
		cout << endl;
	}
	
	// Default Copy Constructor 
	MyClass(const MyClass& mc) {
		name = mc.name; 
		cout << name << "복사되었습니다" << endl;
		cout << endl;
	}

	~MyClass() {
		cout << name << "의 소멸자 호출" << endl;
		cout << endl;
	}

};

void update(MyClass mc) {
	cout << "update 호출" << endl;
	cout << endl;
}

// NRVO : MyClass객체 temp를 생성후 반환 
// Release모드에서만 최대최적화
MyClass doSomething() {
	MyClass temp("테엠프");
	//3 테엠프 생성 
	return temp;
	//4 테엠프 복사 <== myClass3(temp)
	//5 테엠프 소멸
	/*
		Release 모드 컴파일시 4,5번 생략되면서 컴파일됨 ( NRVO ) 
		릴리즈 모드로 컴파일 할경우 temp를 객체로 넘기는 것이 아니라  인자를 바로 넘겨줌
		따라서 myClass3(temp)가 아닌 myClass3("테엠프") 로 값이 들어가게됨
	*/
}

// RVO : 이름없는 반환값 최적화 
// Debug모드에서도 작동을 함
MyClass doSomething2() {
	return MyClass("이름없는 테엠프");
	//7 이름없는 테엠프 생성 
}

int main() {
	MyClass myClass1("정재엽");
	//1 정재엽 생성
	MyClass myClass2(myClass1);
	//2 정재엽 복사 
	MyClass myClass3 = doSomething();

	MyClass myClass4(MyClass("왓업"));
	//6 왓업 생성	

	MyClass myClass5 = doSomething2();
	// myClass4와 같은 식으로 컴파일됨
	// myClass5(MyClass("이름없는 테엠프"))
	// 컴파일러가 복사생성자가 아닌 바로 생성자 호출 
	

	//8 이름없는 테엠프 소멸 
	//9 왓업 소멸 
	//10 => myClass3으로 복사된 테엠프 소멸 
	//11 => myClass2로 복사된 정재엽 소멸 
	//12 myClass1 정재엽 소멸 소멸 
}
