
// Constructor 
/*
	1) Default 생성자 : 생성자를 따로 선언안 할 경우 자동으로 생성 	
	   Fraction(){ }
 
	2) 기본값 생성자 사용 : 매개변수 없는 생성자처럼 사용 가능하기에 오류 발생
		        			생성자를 2개로 인식
	   Fraction() {	}
*

	3) Class 안의 멤버 변수로 Class를 사용할 경우 
	   멤버변수의 초기화가 먼저되기에 
	   멤버 변수로 선언된 Class가 먼저 생성자를 호출
*/

#include <iostream>

using namespace std;

class Fraction
{
private :
	int m_numerator;
	int m_denominator;

public :
	Fraction(const int& num_in=1, const int& den_in = 1)
	{
		cout << "constructor" << endl;
		m_numerator = num_in;
		m_denominator = den_in;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "Second" << endl;
	}
};

class First
{
	Second sec;

public :
	First()
	{
		cout << "First" << endl;
	}
};



int main()
{
	// Fraction frac{ 0, 1 }; 변수들이 public일 경우 이렇게 초기화 가능 
	/* 생성자에 매개변수가 없을 경우 괄호를 빼고 선언  
		Fraction frac;
		frac.print();  생성자를 따로 안만들고 실행시 변수들에 쓰레기값이 출력이 됨 
	*/


	//Fraction frac{ 1.0, 2 }; 
	// 유니폼으로 초기화 시에도 생성자가 호출이 됨 => 형변환 엄격함, 에러 발생 

	Fraction frac(1.0, 2); // 실행됨 	
	frac.print();

	First first;
	system("pause");
}