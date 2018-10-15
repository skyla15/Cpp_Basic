// ����Լ��� const ������ ���� ��� ��� ������ �������� ���ϵ��� �����ϴ� ��
// Const �ν��Ͻ��� Const ��� ���� Ȥ�� ��� �Լ����� ��� ���� 

/***********         ��� ��� �˰��ֱ�       *******/
// ��� �Լ��� const�� �Ұ�� ���� Ÿ�Ե� const�� ����

#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// const �� �̿��Ͽ� �����ε� 

	const string& getValue() const
	{
		cout << "Const Version" << endl;
		return m_value;
	}

	string& getValue()
	{
		cout << "Non Const Version" << endl;
		return m_value;
	}
};


int main()
{
	Something something;
	something.getValue();
	// return ���� non-const reference => ���� ���� 

	const Something something2;
	something2.getValue();
	// return ���� const reference => ���� �Ұ��� 
	return 0;
}

