// 멤버함수에 const 선언을 붙일 경우 멤버 변수를 변경하지 못하도록 선언하는 것
// Const 인스턴스는 Const 멤버 변수 혹은 멤버 함수만을 사용 가능 

/***********         사용 방법 알고있기       *******/
// 멤버 함수를 const로 할경우 리턴 타입도 const로 선언

#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// const 를 이용하여 오버로딩 

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
	// return 값이 non-const reference => 변경 가능 

	const Something something2;
	something2.getValue();
	// return 값이 const reference => 변경 불가능 
	return 0;
}

