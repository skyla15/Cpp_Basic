#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private :
	int m_numerator;
	int m_denominator;

public :
	Fraction(int num = 0, int den = 1)
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

Fraction doSomething()
{
	Fraction temp(1, 2);
	return temp;
}

int main()
{
	Fraction result = doSomething();
	// debug모드에서는 복사해서 사용 
	// release에서는 Return Value Optimization

	cout << result << endl;


	Fraction frac(3, 5);
	Fraction fr_copy(Fraction(3, 10)); // 복사 생성자 호출 X , 컴파일러에 의한 생략 
	Fraction fr_copy2(frac);

	system("pause");
}