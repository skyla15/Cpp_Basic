/*
	���� ������ �����ε� 
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

	// ���� ������ 
	Digit& operator ++()
	{
		++m_digit;
		return *this; // �ڱ� �ڽ��� ��ȯ 
	}

	// ���� ������ : Dummy������ �ƹ��ų� �־��ָ� ���� �����ڷ� �ν� 
	Digit operator ++(int)
	{
		Digit temp(m_digit); // ���� �� ���� 
		++(*this);
		return temp; // dummy�� return, �������� ++(*this)���� ���� 
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
	// 1) ++ 1�� �� ��ȯ�� temp.m_digit = 6
	// 2) �ٽ� ++�غ��� temp.m_digit = 6 
	cout << d << endl;

	system("pause");

}