/*
	��ȣ ������ �����ε� 
	1) ��ü�� �Լ�ó�� ����� ���� 
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
	Accumulator acc(20); // ���� 

	cout << acc(30) << endl; // ��ȣ �����ε� 

	system("pause");
}