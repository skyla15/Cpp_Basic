// const �ν��Ͻ��� const ����Լ��� ����� ���� 
/*
void print(const Something& st)
Ŭ������ ����� ���� ��쿡�� ���� ���� ������� ������ ���
���� ������ ȣ�� ���� �ٷ� ������ ���� �� �״�� ���
*/

#include <iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	};

	void setValue(int value) { m_value = value; }
	int  getValue() const
	{
		return m_value;
	}
};

// Ŭ������ ���� ��� �̷��� ������ 
void print(const Something& st)
{
	cout << st.getValue() << endl;
}


int main()
{
	Something something;
	print(something);
	something.setValue(2);


	const Something something2;
	// something2.setValue(3);  ���� 
	something2.getValue();
	// ��� function�� const �� ��ȯ���� ���� ��� �����Ϸ��� ��������� const���� �ƴ����� �Ǵ��Ͽ� ����.
	// const�� const������ ����ϱ�� �� �� !
	return 0;
}

