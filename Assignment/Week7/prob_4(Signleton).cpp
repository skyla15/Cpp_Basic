#include <iostream>
using namespace std;

class Single
{
private:
	static Single* instance; // 객체 포인터 
	Single(){}
	~Single(){}

public :
	static Single* getInstance();
	// 클래스 객체 생성하기 위한 멤버 함수 
};

Single* Single::instance = nullptr; // 객체 포인터의 초기값은 null

Single* Single::getInstance()
{
	// instance가 가르키는 객체가 있다면 이미 해당 클래스로 만들어진 객체 존재 
	if (!instance) 
	{
		instance = new Single(); // 새로운 객체 
		return instance;
	}
	else
	{
		return instance; // 이미 이전의 객체가 있다면 이전 객체를 반환 
	}
}
int main()
{
	Single *a = Single::getInstance();
	Single *b = Single::getInstance();
	Single *c = Single::getInstance();

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;

	return 0;

}
