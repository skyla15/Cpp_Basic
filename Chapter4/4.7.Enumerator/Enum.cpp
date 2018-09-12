#include <iostream>
#include <typeinfo>
#include <vector>
/*
	열거형 
		=> 헤더에 넣어두고 사용하는 것 권장

	1) 서로 다른 열거형의 멤버변수의 이름이 같을 경우 오류 
	2) 열거형의 멤버의 초깃값 0,1,2.. 로 저장이 됨 
	   멤버의 초깃값의 값을 원하는 값으로 설정시 순서대로 값이 나옴
	3) 열거형의 멤버변수의 값을 할당시 같은 값을 할당하는 것은 지양하여야함
	   enum Color{
			Red = 5,
			Sky = 5, // 지양할 것 
		}
	4) cin으로 받을 수 없음
	5) casting 가능 
	   
*/


enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	BLUE,
	// 끝에 콤마가 있어도 오류가 아님 
};

enum Feeling
{
	HAPPY,
	JOY,
	// BLUE, 
	// 중복 선언 오류 
};

int main() {
	using namespace std;

	Color my_color = static_cast<Color>(3);
	Color my_apple{ COLOR_RED };

	cout << "my_color  :  " << my_color << "my_apple  :  " << my_apple << endl;


	
	// enum을 반복자를 이용하여 출력하는 방법 
	enum Num {
		ZERO,
		ONE,
		TWO,
		THREE,
	};

	vector<Num> a;
	for (int i = 0; i < 4; i++) {
		a.push_back(static_cast<Num>(i));
	}

	vector<Num>::iterator iter;
	int i;
	for (iter = a.begin(), i = 0 ; iter != a.end(); iter++, i++) {
		cout << " iter : " << *iter << endl;
		cout << " vector<Num> a[" << i << "] :" << a[i] << endl;	
	}

	system("pause");
	
}
