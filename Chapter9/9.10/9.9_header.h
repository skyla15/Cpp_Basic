#pragma once

#include <iostream>
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

	inline void setCents(int cents)
	{
		m_cents = cents;
	}

	// 단항 연산자 - 오버로딩 
	friend Cents operator - (Cents& c1);

	// 이항 연산자 - 오버로딩 
	Cents operator - (const Cents& c2);

	// ! 오버로딩 
	bool operator ! ();

	// 형변환 
	operator int();

	friend std::ostream& operator << (std::ostream &out, const Cents& cents);

	friend std::istream& operator >> (std::istream &in, Cents& cents);

};



class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input)
		: m_dollars(input)
	{}

	// Dollar <-> Cents 형변환 
	operator Cents();

};