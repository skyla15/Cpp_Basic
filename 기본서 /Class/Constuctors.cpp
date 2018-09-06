/*
  클래스 선언 방식
  1) 초기화 리스트를 사용하지 않는 경우 
  - 기본생성자 / 디폴트 생성자 / private 생성자
  - private 생성자 : 클래스 내부에서만 객체의 생성을 허용하려고 하는 경우 
  2) 초기화 리스트를 사용하는 경우 
******************* 소 괄 호 ***********************
     Class class {
		public:
			int x, y;
			class(int a, int b) : x(a), x(b) {
			}
	 }
******************* 중 괄 호 ***********************
	 Class class {
		public:
			int x, y;
			 class(int a, int b) : x{a}, x{b} {
			}
	 }
************ 디폴트 인수 + 초기화 리스트 **************
	Class class {
		public:
			int x, y;
			class(int a, int b) : x{a}, x{b} {
			}
	}
*******************************************************
*/
/* 
 생성자 
 1) default 생성자 
 2) 일반 생성자
 3) Overloading 생성자 
 4) C++ 생성자 
 */
#include <iostream>

using namespace std;

// 초기화 리스트를 사용하지 않는 경우 
class Time {
public:
	int hour, minute;
	void print();
	/*
	Time() { // 일반 생성자 
		hour = 0;
		minute = 0;
	}

	
	Time(int h, int m) { // Overloading 생성자 
		hour = h;
		minute = m;
	}

	time(int h = 0, int m = 0) { // default 생성자 
		hour = h;
		minute = m;
	}	

	// 초기화 리스트 이용 
	Time(int h, int m ) : hour{ h }, minute{ m } {}	
	*/
	
	// private 생성자 
	private:
	Time(int h, int m) : hour{h}, minute{m} {}
};

void Time::print() {
	cout << hour << " " << minute << endl;
}

int main() {
	Time t1(10, 20); // 초기화 
	cout << " t1 : " << endl;
	t1.print();

	Time t2;
	cout << " t2 : " << endl;
	t2.print();
	

	system("pause");
	
}
