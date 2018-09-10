/*
	RVO, 객체를 반환시킬 때, 객체를 반환하는 대신 인자를 직접 반환하여 반환되는 값을 받는
	객체에 인자로 직접 넣어주는 방법 	
*/

#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std; 

class Fraction {
private :
	int m_numerator;
	int m_denominator;

public :
	Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den) {
		assert(den != 0);
		// den != 0 인경우 true, 0일 경우 프로그램 종료 
	}

	Fraction(const Fraction &fraction) // copy constructor 
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator) {
		cout << "Copy Constructor Called" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Fraction & f) {
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

	~Fraction() {
		cout << "소멸자 호출" << endl;
	}
};

Fraction doSomething() {
	Fraction temp(1, 2);
	cout << "&temp : " << &temp << endl;
	return temp;
}

int main() {

	Fraction result = doSomething();
	cout << "&result : " << &result << endl;
	cout << "result : " << result << endl;

	// result의 복제 생성자가 실행이 되며 temp에서 넘어온 값들이 temp에 저장이 됨 
	// 디버그 모드에서는 temp 와 result의 주소값이 다르기 때문에 복제생성자 호출 
	// 이후 doSomething에서 
	/*
		릴리즈 모드에서는 두 값이 같도록 나옴 => Return Value Optimization ( RVO ) 
		=> result 자체를 temp가 되도록 함 
		=> 컴파일러가 최적화 하기위해 복제생성자 실행을 생략할 수도 있음 
	*/

	cout << endl;

	Fraction fr_copy(Fraction(3, 10)); 
	cout << fr_copy << endl;
	/*
		컴파일러에 의하여 복사생성자가 필요없을 경우 생략 시킴 
		복사생성자를 컴파일러가 자동으로 생략시킴

	*/

	Fraction fr_copy2(fr_copy);
	cout << fr_copy2 << endl;
	// 복제생성자 호출되어 fr_copy의 멤버변수들이 fr_copy2의 멤버변수로 복사가 되어 들어옴 

}

