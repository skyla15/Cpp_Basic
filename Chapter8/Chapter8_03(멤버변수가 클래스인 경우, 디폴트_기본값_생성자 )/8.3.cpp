
// Constructor 
/*
	1) Default ������ : �����ڸ� ���� ����� �� ��� �ڵ����� ���� 	
	   Fraction(){ }
 
	2) �⺻�� ������ ��� : �Ű����� ���� ������ó�� ��� �����ϱ⿡ ���� �߻�
		        			�����ڸ� 2���� �ν�
	   Fraction() {	}
*

	3) Class ���� ��� ������ Class�� ����� ��� 
	   ��������� �ʱ�ȭ�� �����Ǳ⿡ 
	   ��� ������ ����� Class�� ���� �����ڸ� ȣ��
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
	// Fraction frac{ 0, 1 }; �������� public�� ��� �̷��� �ʱ�ȭ ���� 
	/* �����ڿ� �Ű������� ���� ��� ��ȣ�� ���� ����  
		Fraction frac;
		frac.print();  �����ڸ� ���� �ȸ���� ����� �����鿡 �����Ⱚ�� ����� �� 
	*/


	//Fraction frac{ 1.0, 2 }; 
	// ���������� �ʱ�ȭ �ÿ��� �����ڰ� ȣ���� �� => ����ȯ ������, ���� �߻� 

	Fraction frac(1.0, 2); // ����� 	
	frac.print();

	First first;
	system("pause");
}