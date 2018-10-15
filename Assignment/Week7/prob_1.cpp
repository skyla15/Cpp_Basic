#include <iostream>
using namespace std;

static const double pie = 3.0;

class Circle
{
private :
	int radius;

public :

	Circle(int rad)
		: radius(rad)
	{}

	double getArea() // 너비 반환 
	{
		return pie * radius*radius;
	}

	double getCircumference() // 둘레 반환 
	{
		return pie * radius * 2;
	}

	friend void compareCircle(Circle c1, Circle c2); 
	// 비교함수를 프렌드로 선언함으로써 같은 클래스의 서로 다른 객체의 멤버변수에 접근 가능하도록 설정 
};

void compareCircle(Circle c1, Circle c2)
{
	// c1이 더클 경우 c1 출력, 같을 경우 둘 중 하나의 정보 출력, c2가 클경우 c2 정보 출력 
	if (c1.radius > c2.radius)
	{
		cout << "반지름이 더 큰 원의 면적은 : " << c1.getArea() << endl;
		cout << "반지름이 더 큰 원의 둘레는 : " << c1.getCircumference() << endl;
	}
	else if(c1.radius == c2.radius)
	{
		cout << "두 원의 면적은 : " << c1.getArea() << endl;
		cout << "두 원의 둘레는 : " << c1.getCircumference() << endl;
	}
	else
	{
		cout << "반지름이 더 큰 원의 면적은 : " << c2.getArea() << endl;
		cout << "반지름이 더 큰 원의 둘레는 : " << c2.getCircumference() << endl;
	}
}

int main()
{
	// circle1, 2 생성 
	Circle circle1(4);
	Circle circle2(2);

	//비교
	compareCircle(circle1, circle2);

	return 0;
}
