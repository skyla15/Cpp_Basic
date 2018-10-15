/*
	괄호 연산자 오버로딩 
	1) 객체를 함수처럼 사용이 가능 
*/

#include <iostream>

using namespace std;

class Accumulator
{
private : 
	int m_counter;

public :
	Accumulator(int i = 0)
		: m_counter(i)
	{
		cout << "Tada~ I am a Constructor! " << endl;
	}

	int operator()(int i) {
		cout << "Tada~ I Overloaded Func! " << endl;
		return (m_counter += i);
	}	
};

int main()
{
	Accumulator acc(20); // 생성 

	cout << acc(30) << endl; // 괄호 오버로딩 

	system("pause");
}