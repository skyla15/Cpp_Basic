#include <iostream> 

// switch 문에서 변수 선언 및 Scope설정과 Enum사용법
// 열거형 변수를 입력받는 방법

/*
switch case 주의 사항
=> switch 문안에서 변수선언 가능, 정의는 case에서만 가능

switch (x)
  {
  int a // 변수 선언
  // a = 1  에러 ( a에 메모리 공간 할당 x )

  case 0:
       a = 0;
       break;
  case 1:
       coute << a << endl;
       // x == 1인경우 0을 안거치고 들어오기때문에 
       // a에 할당된 값 존재 X
  }
*/


using namespace std;

enum class Color
{
	BLACK,
	WHITE,
};

void printColorName(Color color)
{

	// case문에서만 사용하고 싶은 변수가 있는 경우 
	// scope( 중괄호 )를 사용하여 사용하고 싶은 변수영역에서만 사용
	cout << " x 입력 : ";
	int x;
	cin >> x;
	switch (x)
	{
		case 0:
		{
			int y = 5; // y 영역 Scope 
			y = y + x;
			cout << y << endl;
		}
		case 1:
		{
			int y = 1;
			y = y + x;
			cout << y << endl;
		}
	}

	cout << endl;
	

	// 열거형 사용 시 식을 줄이는 방법 
	cout << "Enum color, CASTING" << endl;
	switch (static_cast<int>(color)) {
	case 0:
		cout << "black" << endl;
		break;
	case 1:
		cout << "white" << endl;
		break;
	}

	cout << endl;

	// 열거형 기본 사용 방법 
	cout << "Enum color" << endl;
	switch (color)
	{
		// case BLACK: 에러 
	case Color::BLACK:
		cout << "Black" << endl;
		break;
	case Color::WHITE:
		cout << "White" << endl;
		break;
	}

}

int main() {
	Color color;
	int x;
	cin >> x;
	color = static_cast<Color>(x); 
	printColorName(color);
	system("pause");
}
