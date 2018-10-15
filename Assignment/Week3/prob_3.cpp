#include <iostream>
#include <string>
using namespace std;

const string myName("정재엽");
const int myId = 2013112130;

bool login(const string name, int id)
{
	if ((name == myName) && (myId == id)) {
		// 학번, 이름 체크 
		return true;
	}
	return false;
}

int main()
{
	string name_In;
	int id_In;
	cout << "이름을 입력하세요 : ";
	getline(cin, name_In);
	cout << "학번을 입력하세요 : ";
	cin >> id_In;
	// 이름과 학번을 입력받고 login 함수의 인자로 넘겨줌 

	if (login(name_In, id_In))
	{
		cout << "로그인 성공" << endl;
		// 성공시
	}
	else
	{
		cout << "로그인 실패" << endl;
		// 실패시
	}
	
	return 0;
}

