/*
	explicit  :: 자동형변환을 막아줌 
	delete
*/
#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	
	Fraction(char) = delete;

	explicit Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << " COPYT CONSTRUCTOR " << endl;
	}

	friend std::ostream & operator << (std::ostream& out, const Fraction &f)
	{
		out << f.m_numerator << " / " << f.m_denominator;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	/* 
	   << Explicit 선언을 안하였을 경우 : Converting Constructor 가능  >>

		Fraction frac = (2, 3); 
			 변환해서 Fraction 생성자로 들어감
			 <=> frac(2,3)과 같게됨 
	*/
	
	// Explicit 선언 시 명시적으로 생성자 호출 혹은 기본 생성자 호출 필요
	doSomething(Fraction(5,2));

	
	/* << delete로 막는 방법 >> 	
		Fraction frac('a');
	*/

	system("pause");
	return 0;
}