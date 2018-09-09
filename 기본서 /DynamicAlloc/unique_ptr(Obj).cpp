/* 
	스마트 포인터를 이용한 동적 객체 생성 
  pDog 의 경우 delete 안해줄 경우 종료되어도 소멸자 호출 안됨 
  pDog2 의 경우 자동으로 소멸자 
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

	void setAge(int a) { *(this->pAge) = a; }
	void setName(string n) { *(this->pName) = n; }
	int getAge(){ return *(this->pAge); }
	string getName() { return *(this->pName); }
};




int main() {

	Dog *pDog = new Dog(1, "똥개");
	cout << pDog->getAge() << endl;
	cout << pDog->getName() << endl;
	delete pDog;

	
	unique_ptr<Dog> pDog2(new Dog);
	cout << pDog2->getAge() << endl;
	cout << pDog2->getName() << endl;

	
}
