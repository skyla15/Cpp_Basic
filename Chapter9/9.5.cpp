/*
	증감 연산자 오버로딩 
	++ , -- 
*/
#include <iostream>
using namespace std;

class Digit
{
private :
	int m_digit;

public :
	Digit(int digit = 0)
		: m_digit(digit)
	{}

	// 전위 연산자 
	Digit& operator ++()
	{
		++m_digit;
		return *this; // 자기 자신을 반환 
	}

	// 후위 연산자 : Dummy형으로 아무거나 넣어주면 후위 연산자로 인식 
	Digit operator ++(int)
	{
		Digit temp(m_digit); // 현재 값 저장 
		++(*this);
		return temp; // dummy를 return, 실제값은 ++(*this)에서 증가 
	}

	friend ostream& operator << (ostream& out, const Digit& digit)
	{
		out << digit.m_digit;
		return out;
	}

};

int main()
{
	Digit d(5);
	
	cout << ++(++d) << endl;
	cout << d << endl;
	cout << d++ << endl;
	cout << (d++)++<< endl;
	// 1) ++ 1번 후 반환시 temp.m_digit = 6
	// 2) 다시 ++해봤자 temp.m_digit = 6 
	cout << d << endl;

	system("pause");

}