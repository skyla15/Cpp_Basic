/*
	�Ҹ����� ��� 
	- ��ü ������ �����Ҵ� ����Ͽ� �� �޸𸮸� ����Ͽ� 
	  �޸� ������ �ʿ��� ��� 

	- Ŭ�������� �����Ҵ� ��� �� 
	  ���� Ŭ���� �ȿ��� �Ҹ��ڿ� delete�� �����Ͽ� �޸� �����ϸ� �� 
*/

#include <iostream>
using namespace std;

class IntArray
{
private :
	int *m_arr = nullptr;
	int m_length = 0;

public :
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
		cout << "constructor" << endl;
	}

	int getLength()
	{
		return m_length;
	}

	~IntArray()
	{
		if(m_arr != nullptr)
			delete[] m_arr;

		cout << "destructor" << endl;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(100);
	}

	return 0;
}