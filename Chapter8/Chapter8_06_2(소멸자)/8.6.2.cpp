/*
	소멸자의 사용 
	- 객체 내에서 동적할당 사용하여 힙 메모리를 사용하여 
	  메모리 해제가 필요한 경우 

	- 클래스에서 동적할당 사용 시 
	  동일 클래스 안에서 소멸자에 delete를 선언하여 메모리 해제하면 됨 
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