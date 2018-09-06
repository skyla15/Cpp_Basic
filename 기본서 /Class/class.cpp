#include <iostream>
#include <string>
#include <windows.h>
#include <limits>
/* 
 클래스 외부에 함수선언 가능 ( 인터페이스 )
 함수 선언, 구현하는 방법은 일반 함수 선언과 동일 
 */

/* 멤버함수의 클래스 내부, 외부 선언의 차이점 
1) 내부 선언 시 : 멤버함수가 자동으로 inline 함수로 저장 
2) 외부 선언 시 : 일반함수와 동일한 함수로 작용 

=> 멤버함수의 크기가 클 경우 내부에 선언 시 코드가 여러번 복사되어 실행 파일의 크기 커짐 
=> 멤버함수의 크기가 작을 경우 실행속도가 빠르기때문에 클래스 내부에 선언 
*/



using namespace std;

class Circle {
public:
	int x, y, radius;
	string color;
	double calcArea();

	/*double calcArea() {
		return 3.14*radius*radius;
	}*/

	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
	}
};


double Circle::calcArea() { 
	return 3.14 * radius * radius;
}

int main() {
	Circle c;

	c.x = 100;
	c.y = 100;

	c.radius = 50;
	c.draw();

	system("pause");
	
}
