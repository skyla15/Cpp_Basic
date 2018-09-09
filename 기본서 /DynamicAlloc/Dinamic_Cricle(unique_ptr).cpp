/* 
	스마트 포인터를 이용한 동적 객체 생성 
*/
#include <iostream>
#include <memory>
#include <string>
#include <windows.h>

using namespace std;

class Circle {
private:
	int x, y, radius;
public:
	Circle() {
		x = 0;
		y = 0;
		radius = 1;
	}
	Circle(int x, int y, int rad) : x{ x }, y{ y }, radius{ rad } {}
	string color;

	void setX(int xVal) { x = xVal; }
	void setY(int yVal) { y = yVal; }
	void setRad(int rad) { radius = rad; }
	void draw();

	~Circle(){
		cout << "소멸자가 호출됨 " << endl;
		system("pause");
	}
  // 소멸자 n
};

void Circle::draw() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}


int main() {
	int n;
	cout << "몇 개의 원을 그릴까요?" << endl;
	cin >> n;
	unique_ptr<Circle[]> p(new Circle[n]);
	
	
	for (int i = 0; i < n; i++) {
		p[i].setX(100 + rand() % 300);
		p[i].setY(100 + rand() % 200);
		p[i].setRad(rand() % 100);
		p[i].draw();
	}
}
