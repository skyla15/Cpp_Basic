#include <cassert>
#include <iostream>

using namespace std;

class MyString
{
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char * source = " ")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\0';
	}


	//복사 막기
	//	MyString(const MyString& copy) = delete;



	// 얕은 복사 
	/*
		MyString(const MyString& copy)
		: m_data(copy.m_data)
		, m_length(copy.m_length)
	{	}
	*/

	// 깊은 복사 
	MyString(const MyString& copy)
	{
		cout << "Deep Copy" << endl;

		m_length = copy.m_length;

		if (copy.m_data != nullptr)
		{
			// 주소를 새로 할당 받아서 대입을 받음
			// ★★★★★★★★★★★★★★★★★
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = copy.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString & copy)
	{
		//shallow copy

		cout << "Assignment Operator" << endl;

		// ★★★★★★★★★★★★★★★★★★★★
		if (this == &copy) // prevent self-assignment 
			return *this;

		// 대입 받는 곳에서 갖고있던 것을 지우고 
		delete[] m_data;
		
		m_length = copy.m_length;

		if (copy.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = copy.m_data[i];
		}
		else
			m_data = nullptr;
			
	}

	~MyString()
	{
		delete[] m_data;
	}

	char*getString()
	{
		return m_data;
	}

	int getLength()
	{
		return m_length;
	}
};



int main()
{
	MyString hello("hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
		//소멸자 호출 
	}

	MyString str = hello; // copy

	MyString str2; 

	str2 = str; // Assignment

	

	cout << hello.getString();

	system("pause");

	
}

