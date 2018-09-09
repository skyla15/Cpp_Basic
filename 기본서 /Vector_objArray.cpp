#include <iostream>
#include <vector>
/* 벡터와 객체 배열 */

using namespace std;

class Circle {
private :
	int x, y, radius;
	
public :
	Circle() : x{ 0 }, y{ 0 }, radius{ 0 } {}
	Circle(int x, int y, int radius) : x{ x }, y{ y }, radius{ radius } {}

	void print() {
		cout << "반지름 : " << radius << "@(" << x << ", " << y << ")" << endl;
	}

};

int main() {
	vector<Circle> objArray;

	for (int i = 0; i < 10; i++) {
		Circle obj(rand() % 500, rand() % 300, rand() % 100);
		objArray.push_back(obj);
	}
	
	for (Circle c : objArray) {
		c.print();
	}

	system("pause");
}
