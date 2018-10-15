/*
단항 연산자 오버로딩
+ - !
*/

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
		: m_cents(cents)
	{}

	int getCents() const
	{
		return m_cents;
	}

	int& getCnets()
	{
		return m_cents;
	}

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	Cents operator - (const Cents& c2) const
	{
		return (this->m_cents - c2.m_cents);
	}

	bool operator ! () const
	{
		// !Cents() => true 로 
		// 리턴값은 문맥 따라 설정 
		// 돈이 없을 경우 true 반환 
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(3);
	Cents cents3(0);

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;
	cout << cents1 - cents2 << endl;


	cout << boolalpha << !cents1 << " " << !cents2 << " " << !cents3 << endl;

	system("pause");

}
