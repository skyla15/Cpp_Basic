/* 
	클래스 및 멤버변수 동적 생성 
	소멸자에 멤버변수도 메모리 해제 필요
	멤버 변수가 가변적일 경우 => 동적할당
	
	this 포인터 
	현재 객체를 가르키는 포인터 

*/

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Dog {
private:
	int *pAge;
	string *pName;

public:
	Dog() {
		pAge = new int(1);
		pName = new string("바둑이");
	}

	Dog(int a, string n) {
		pAge = new int(a);
		pName = new string(n);
	}
	
	~Dog() {
		cout << "소멸자 호출 \n" << endl;
		delete pAge;
		delete pName;
	}

	void setAge(int a) { *pAge = a; }
	void setName(string n) { *pName = n; }
	int getAge(){ return *pAge; }
	string getName() { return *pName; }
	
	/** this poitner **/
	/*
		void setAge(int a) { *(this->pAge) = a; }
		void setName(string n) { *(this->pName) = n; }
		int getAge(){ return *(this->pAge); }
		string getName() { return *(this->pName); }
	*/
};


int main() {

	Dog *pDog = new Dog(1, "똥개");
	cout << pDog->getAge() << endl;
	cout << pDog->getName() << endl;

	cout << "이름 나이 변경\n " << endl;
	
	pDog->setAge(20);
	pDog->setName("똥오오옹개");
	cout << pDog->getAge() << endl;
	cout << pDog->getName() << endl;
	delete pDog;

	Dog *pDog2 = new Dog;
	cout << pDog2->getAge() << endl;
	cout << pDog2->getName() << endl;
	delete pDog2;
	system("pause");
	
}
