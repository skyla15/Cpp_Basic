/* 
	<< ������ �����ε� >> 
	   => �������� �͵鸸 ��� 
	1) ���� ������ = ? : 
	2) sizeof
	3) .  ��� ���� ������
	4) .* ��� ������ ������ 
	5) :: ���� ���� ������ 
	6) ^ �� ������ �����ε��� ����� ��� 
	     ��ȣ�� �����־� ����Ѵ� 
	7) ������ �����ε��� ��쿡�� ������ �켱������ ������ �ʴ´� 

	<< ��� �Լ��θ� ������ �����ε� >>
	1) = 
	2) [...] : �迭 
	3) (.parameters.) function call 
	4) -> 
*/

#include <iostream>
using namespace std;

class Cents
{
private :
	int m_cents;

public :
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	// ������� ���� 
	friend Cents operator + (const Cents &c1, const Cents &c2);

	// ����Լ��� ������ �����ε� 
	Cents operator + (const Cents& c2)
	{
		return (this->m_cents + c2.m_cents);
	}
};


Cents operator + (const Cents &c1, const Cents &c2)
{
	return Cents(c1.m_cents + c2.m_cents);
}


int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;

	cout << (cents1 + cents2 + Cents(4)).getCents() << endl;
	// ������ �����ε� 
	// �͸�ü ��� 

	
	system("pause");

	return 0;
}