/*
	std::Array, Vector ȣ�� �� []�� �̿��Ͽ� ���� �����ϰų� �Ͽ��� 
	=> []�� �����Ҵ��ϴ� ���� ���� ����Ϸ����ϴ� �� 
	   ���� if �������� �������� ���� assert�� �̿��ؼ� �ڵ带 ����ϰ� ���� �� 

	***** cassert ��� �� �� !!!!
*/

#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private :
	int m_list[10];

public :
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int& getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}

	// []�� ���� �����ε� 
	int& operator [](const int index)
	{
		assert(index >= 0); // die if index is negative
		assert(index < 10); // die if index is greater than 10
		return m_list[index];
	}

	// ���� ��ü�� const�� ���Ǿ����� ��� ������ �Ұ����ϰ� �� ��� 
	const int& operator [](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}
};

int main()
{

	// ��ü�� �������� �Ҵ��Ͽ� 
	// [] �����ε��� ����Ϸ��� �ϴ� ��� !
	IntList *list = new IntList;
	(*list)[3] = 10; // OK, ��ü�� ���� 

	// list[3] = 10; ����  

	IntList my_list;
	
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;

	my_list.getList()[3] = 10;
	cout << my_list.getList()[3] << endl;

	my_list[3] = 12;
	cout << my_list[3] << endl;

	delete list;

	system("pause");
}