
/*
When to use 객체 포인터를 사용해야하는가
1)  어떤 객체 변수를 선언하되 해당 객체가 존재하거나 존재하지 않을 수도 있는 경우
	nullptr 설정을 할 수 있도록.
1-2 )
	아래의 예는 Lab 클래스에 student형 객체 chief가 있을수도 없을 수도 있는 경우
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	string name, telephone;
public:
	// 각 객체를 const로 받을 경우 상수화되어 값의 변경 위험이 없어짐 
	Student(const string n = "", const string t = "") : name{ n }, telephone{ t } {}

	// 멤버함수를 const로 선언함으로써 
	// 멤버함수 내의 멤버변수의 값이 변경되지 않도록 설정 
	string getTelephone() const { return telephone; }
	string getName() const { return name; }
	void setName(const string n) { name = n; }
	void setTelephone(const string t) { telephone = t; }
};

class Lab {
private :
	string name;
	Student *chief;
public :
	Lab(string n = "", Student *c = nullptr) :name{ n }, chief{ c } {}
	
	void setChief(Student *p) {	chief = p; }
	void setName(string n) { name = n; }

	void print() const {
		cout << name << "연구실" << endl;
		if (chief != nullptr) {
			cout << "실장 : " << chief->getName() << ", 전화번호 : " << chief->getTelephone() << endl;
		}
		else {
			cout << "실장이 존재하지 앖습니다" << endl;
		}
	}	
};

int main() {
	Lab lab("영상처리");
	Student *p = new Student("김철수", "010-1234-5678");
	lab.setChief(p);
	lab.print();

	Lab lab2("자연어처리");
	lab2.print();
	

	delete p;

	system("pause");
	return 0;
}
