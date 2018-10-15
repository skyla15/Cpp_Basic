// 위임 생성자
/*
	주의 :
		기능 1개당 1개의 메소드를 사용하는 것이 좋음 
		따라서 초기화하는 코드도 하나만 사용할 것 

	위임생성자 ( 2 ) 사용하는 것이 더 좋음 
*/
#include <iostream>
#include <string>

using namespace std;

class Student
{
private :
	int			m_id;
	string		m_name;

public :

	// 위임 생성자 ( 1 ) 
	Student(const string& name_in)
		// : m_id(0), m_name(name_in)
		: Student(0, name_in)
	{};

	Student(const int& id_in, const string& name_in) 
		//: m_id(id_in), m_name(name_in) 
	{
		init(id_in, name_in);
	};

	// 위임 생성자 ( 2 ) : 초기화 코드 분리 후 생성자에서 호출!!!!
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "jack jack");
}