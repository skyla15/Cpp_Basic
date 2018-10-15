#include <iostream>
#include <typeinfo>
#include <vector>
/*
	enum class 
	1) enum형으로 저장시 int형으로 저장이 되어 서로 다른 
	   열거형의 멤버임에도 같은 값으로 인식 가능 
	2) enum class 로 선언 시 namespace와 같은 역할을 하게 됨 
	   서로 다른 enum class 안의 멤버는 서로 다른 값을 갖는다.
*/

enum class Fruit1 {
	BANANA,
	APPLE,
};

enum class Color1 {
	RED,
	BLUE,
};

enum Fruit
{
	BANANA,
	APPLE,
};

enum COLOR
{
	RED,
	BLUE,
};


int main() {
	using namespace std;
	
	COLOR color1 = RED;
	Fruit fruit1 = BANANA;
	
	cout << std::boolalpha; // nobloolalpha
	cout << "RED == BANANA? : " << ( color1 == fruit1 )<< endl;
	cout << endl;


	// enum class 일 경우 scope 표시를 해줘야됨 
	// a 와 b의 자료형이 다르기때문에 비교 불가능 
	Color1 a = Color1::RED;
	Fruit1 b = Fruit1::BANANA;

	//casting to Int 
	cout << "RED == BANANA? : " << (int(color1) == int(fruit1)) << endl;


	system("pause");
	
}
