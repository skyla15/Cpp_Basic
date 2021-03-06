/*
	익명 객체 
	1) r-value처럼 사용이 됨
	2) 오버로딩에서 자주 사용이됨 

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

class Cents
{
private :
	int m_cents;

public :

	Cents()
	{
		cout << "Constructor" << endl;
	}

	Cents(int cents)
	{
		m_cents = cents;
		cout << "Constructor : " << m_cents << endl;
	}

	int getCents() const
	{
		return m_cents;
	}

	~Cents()
	{
		cout << "Destructor : " << m_cents << endl;
	}
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	// 각자 다른 곳에서 생성, 멤버함수 호출 후 소멸자 호출 
	// 객체 생성할 시 소멸자는 프로그램이 종료해야 호출 됨.

	add(Cents(6),Cents(8)).getCents();
	// 6 생성자, 8생성자, 14 생성자, 14 소멸, 8소멸, 6소멸 

	Cents c1(100);
	c1.getCents(); // 생성자 호출 -> 프로그램 종료시 -> 소멸자 호출
	Cents(5).getCents(); // 생성자 호출 -> 소멸자 호출, 각자 다른 위치에 생성 됨.
	Cents(6).getCents(); 
    return 0;
}

