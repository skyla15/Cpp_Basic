// ���� ������
/*
	���� :
		��� 1���� 1���� �޼ҵ带 ����ϴ� ���� ���� 
		���� �ʱ�ȭ�ϴ� �ڵ嵵 �ϳ��� ����� �� 

	���ӻ����� ( 2 ) ����ϴ� ���� �� ���� 
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

	// ���� ������ ( 1 ) 
	Student(const string& name_in)
		// : m_id(0), m_name(name_in)
		: Student(0, name_in)
	{};

	Student(const int& id_in, const string& name_in) 
		//: m_id(id_in), m_name(name_in) 
	{
		init(id_in, name_in);
	};

	// ���� ������ ( 2 ) : �ʱ�ȭ �ڵ� �и� �� �����ڿ��� ȣ��!!!!
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