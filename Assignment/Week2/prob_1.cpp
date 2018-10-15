#include <iostream>
#include <string>

using namespace std;
int main() {
	string name = "";
	string id = "";
	string maj = "";

	cout << " 이름 : ";
	getline(cin, name); // string 을 받기 위하여 getline을 이용 
	cout << " 학번 : ";
	getline(cin, id);
	cout << " 학과 : ";
	getline(cin, maj);

	cout << endl; 

	// 입력란과 출력란을 분리 
	cout << " 이름 : " << name << endl;
	cout << " 학번 : " << id << endl;
	cout << " 학과 : " << maj << endl;

	
	return 0;
}
