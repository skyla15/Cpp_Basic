/* 
	<< 연산자 오버로딩 >> 
	   => 직관적인 것들만 사용 
	1) 삼항 연산자 = ? : 
	2) sizeof
	3) .  멤버 선택 연산자
	4) .* 멤버 포인터 연산자 
	5) :: 범위 조건 지정자 
	6) ^ 의 연산자 오버로딩을 사용할 경우 
	     괄호로 감싸주어 사용한다 
	7) 연산자 오버로딩의 경우에는 연산자 우선순위는 변하지 않는다 

	<< 멤버 함수로만 연산자 오버로딩 >>
	1) = 
	2) [...] : 배열 
	3) (.parameters.) function call 
	4) -> 
*/

#include <iostream>
using namespace std;

class Cents
{
private :
	int m_cents;

public :
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	// 프렌드로 선언 
	friend Cents operator + (const Cents &c1, const Cents &c2);

	// 멤버함수로 연산자 오버로딩 
	Cents operator + (const Cents& c2)
	{
		return (this->m_cents + c2.m_cents);
	}
};


Cents operator + (const Cents &c1, const Cents &c2)
{
	return Cents(c1.m_cents + c2.m_cents);
}


int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;

	cout << (cents1 + cents2 + Cents(4)).getCents() << endl;
	// 연산자 오버로딩 
	// 익명객체 사용 

	
	system("pause");

	return 0;
}