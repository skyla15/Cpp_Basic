#include <iostream>
#include <initializer_list>
#include <cassert>
// 이니셜라이즈
// 사용자 자료 정의할 때 생성자나 대입 연산자 만들 때 편하게 사용 
// 숙제 : 대입연산자 추가 

using namespace std;

class IntArray
{
private :
	unsigned m_length = 0;
	int *m_data = nullptr;
	
public:
	IntArray(unsigned length = 0)
		: m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list)
		: IntArray(list.size())
	{
		cout << "initailze_list constructor" << endl;
		int count = 0;
		for (auto& e :list)
		{
			m_data[count] = e;
			count++;
		}

		//for(unsigned count = 0 ; count < list.size() ; count++)
		//	m_data[count] = list[count]; // error;
		// initializer 은 iterator 사용 
		// 따라서 list[#] 안됨 
		// list.size()를 이용해서 iterator 써야됨 
	}

	~IntArray()
	{
		delete[] m_data;
	}

	// to Do : 대입연산자 
	IntArray& operator = (const IntArray& arr2)
	{
		cout << "Assignment Operator" << endl;
		delete[] m_data;
		m_length = arr2.m_length;
		if (arr2.m_data != nullptr)
		{
			for (unsigned int i = 0; i < m_length; i++)
				m_data[i] = arr2.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	friend ostream& operator << (ostream& out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; i++)
		{
			out << arr.m_data[i] << " ";
		}

		out << endl;

		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10, 20, 30 }; 
	// initialize_list
	// initialize_list 안 쓸 경우 에러 발생 
	
	cout << "example1" << endl;
	IntArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl << endl;

	cout << "example2" << endl;
	IntArray int_array2{ 1,2,3,4,5,6,7,8,9,10 }; 
	cout << int_array2 << endl << endl;

	cout << "example3" << endl;
	IntArray int_array3;
	int_array3 = int_array2;
	cout << int_array3 << endl;

	system("pause");
}