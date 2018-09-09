#include <iostream>
/*  
	멤버함수에 사용되는 const의 의미 
	=> 멤버 변수의 값의 변경 허용 않고 그 기회도 없다 
*/

/* 
	**** const 위치에 따른 의미 ****

	const int* p1 : p1이 참조하는 값 변경 불가능  // p1이 참조하는 주소의 멤버 변경 불가능 

	int* const p1 : p1이 참조하는 주소값 변경 불가능 / p1이 참고하는 주소의 멤버들은 변경 가능 

	const int* const p1 : p1이 참조하는 값/주소값 변경 불가능 // p1이 참조하는 주소값 및 멤버 변경 불가능 

	**** const Obj *ptr 선언 **** 
	객체에서 const로 선언된 멤버함수만 호출 가능 
*/

using namespace	std;

class Circle {
private :
	int radius;
public :
	Circle() : radius{ 10 } {}
	~Circle() {
		cout << " 소멸자 호출 " << endl;
	}
	void setRadius(int rad) { this->radius = rad; }

	int getRadius() const { 
		// radius = 3; error 
		// const를 지울 시 변경 가능 
		return this->radius; 		
	}
};

int main() {
	Circle *p1 = new Circle();
	const Circle *p2 = new Circle();
	// const 로 객체 선언시 참조하는 객체(값) 변경 불가능 
	Circle * const p3 = new Circle();

	cout << p1->getRadius() << endl;
	cout << p2->getRadius() << endl;
	cout << p3->getRadius() << endl;

	p1->setRadius(200);

	// p2->setRadius(20);
	// p2가 참조하는 객체"값" 변경 불가능 
	// p2는 const로 선언된 멤버함수밖에 호출 불가능 

	p3->setRadius(500);
	// p3 = p1;
	// p3가 참조하는 주소"값" 변경 불가능 
	// p3가 참조하는 객체의 멤버 변수들은 변경 가능 

	cout << p1->getRadius() << endl;
	cout << p2->getRadius() << endl;
	cout << p3->getRadius() << endl;

	p1 = p3;
	cout << p1->getRadius() << endl;

	system("pause");
}
