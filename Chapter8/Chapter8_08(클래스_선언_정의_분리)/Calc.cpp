

#include "Calc.h"

inline Calc::Calc(int init_value)
	: m_value(init_value)
{}
// ���Ǳ��� ���� �̵� 

Calc& Calc::add(int value) {
	m_value += value; return *this;
}

Calc & Calc::sub(int value) {
	m_value -= value; 
	return *this; 
}

Calc & Calc::mult(int value) {
	m_value *= value; 
	return *this; 
}

inline void Calc::print()
{
	using namespace std;
	cout << m_value << endl;
}

