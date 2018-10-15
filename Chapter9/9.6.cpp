/*
	std::Array, Vector 호출 시 []를 이용하여 값을 접근하거나 하였음 
	=> []를 동적할당하는 것은 많이 사용하려고하는 것 
	   따라서 if 문등으로 제어하지 말고 assert를 이용해서 코드를 깔끔하게 만들 것 

	***** cassert 사용 할 것 !!!!
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

	// []에 대한 오버로딩 
	int& operator [](const int index)
	{
		assert(index >= 0); // die if index is negative
		assert(index < 10); // die if index is greater than 10
		return m_list[index];
	}

	// 만약 객체가 const로 사용되어있을 경우 변경이 불가능하게 할 경우 
	const int& operator [](const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}
};

int main()
{

	// 객체를 동적으로 할당하여 
	// [] 오버로딩을 사용하려고 하는 경우 !
	IntList *list = new IntList;
	(*list)[3] = 10; // OK, 객체에 접근 

	// list[3] = 10; 에러  

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