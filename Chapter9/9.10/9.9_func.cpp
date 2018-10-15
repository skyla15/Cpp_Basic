#include "9.9_header.h"

// - 단항 연산자
Cents operator - (Cents& c1)
{
	return Cents(-c1.m_cents);
}

// - 이항 연산자 
Cents Cents::operator - (const Cents& c2)
{
	return ((*this).m_cents - c2.m_cents);
}

// ! 단항연산자 
bool Cents::operator ! ()
{
	return (m_cents == 0) ? true : false;
}

// int 형변환 
Cents::operator int()
{
	std::cout << "cast here" << std::endl;
	return m_cents;
}

// Dollar -> Cents 형변환 
Dollar::operator Cents()
{
	std::cout << "dollar -> cent" << std::endl;
	return Cents(m_dollars * 100);
}


// Cents ostream 중복 연산자
// out.operator<<(Cents& cents) 
std::ostream& operator << (std::ostream &out, const Cents& cents)
{
	out << "(" << cents.m_cents << ")";
	return out;
}

// in.operator>>(Cents& cents) 
std::istream& operator >> (std::istream &in, Cents& cents) {
	in >> cents.m_cents;
	return in;
}
