// Chapter8_11_1(내부 클래스_생성자_정적변수_초기화).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


class Something
{

public:
	// 내부 클래스 선언 
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private :
	static int s_value;
	int m_value;
	static _init s_initializer;

public:
	static int getValue() // 객체 선언없이 사용 가능 
	{
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer; // 9876으로 초기화 됨 .

/*
	내부 클래스를 선언 후 
	외부 클래스에서 정적 내부클래스를 선언 할 경우 
	내부 클래스에서 해당 정적 변수를 초기화하도록 만들어 
	초기화 가능 
*/

int main()
{
	Something s1;
	cout << s1.temp() << endl;
	cout << Something::getValue() << endl;
	cout << Something::getValue() << endl;
    return 0;

}

