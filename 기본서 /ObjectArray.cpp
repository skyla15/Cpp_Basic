#include <iostream>
#include <windows.h>

/*  Using ObjectArray 
  배열에 객체들을 저장하여 사용 
  
* 기본 생성자를 지정해야 사용 가능 !!!!!!!!!!!!!!!!!!!
*/


using namespace std;

class Circle {
private:
	int x, y, radius;

public:
	Circle();
	Circle(int x, int y, int rad);
	void draw();

	int getX() { return x; }
	int getY() { return y; }
	int getRad() { return radius; }

	void setX(int xVal) { x = xVal; }
	void setY(int yVal) { y = yVal; }
	void setRad(int radVal) { radius = radVal; }
};


// 객체배열 사용을 위한 기본 생성자 선언 
Circle::Circle() :x{ 0 }, y{ 0 }, radius{ 1 } {}
Circle::Circle(int x, int y, int rad) : x{ x }, y{ y }, radius{ rad } {}


void Circle::draw() {
	int r = radius / 2;
 	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - r, y - r, x + r, y + r);
}


int main() {
	Circle objArray[10];

	while (true) {
		for (Circle& c : objArray) {
			c.setX(rand() % 500);
			c.setY(rand() % 300);
			c.setRad(rand() % 100);
			c.draw();
		}
	}

	system("pause");

	return 0;
}
