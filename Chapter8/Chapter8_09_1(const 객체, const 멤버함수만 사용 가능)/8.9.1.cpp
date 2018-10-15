// const 인스턴스는 const 멤버함수만 사용이 가능 
/*
void print(const Something& st)
클래스를 멤버로 보낼 경우에는 위와 같은 방법으로 보내줄 경우
복사 생성자 호출 없이 바로 이전에 만든 것 그대로 사용
*/

#include <iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	};

	void setValue(int value) { m_value = value; }
	int  getValue() const
	{
		return m_value;
	}
};

// 클래스를 보낼 경우 이렇게 보내기 
void print(const Something& st)
{
	cout << st.getValue() << endl;
}


int main()
{
	Something something;
	print(something);
	something.setValue(2);


	const Something something2;
	// something2.setValue(3);  에러 
	something2.getValue();
	// 멤버 function을 const 로 변환하지 않을 경우 컴파일러가 멤버변수가 const인지 아닌지를 판단하여 받음.
	// const는 const끼리만 사용하기로 할 것 !
	return 0;
}

