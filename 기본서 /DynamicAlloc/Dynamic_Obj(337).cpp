/* 클래스 동적 생성 */

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Dog {
private:
	int age;
	string name;

public:
	Dog() {
		age = 0;
		name = "바둑이";
	}
	Dog(int a , string n) : name{ n }, age{ a } {}	
	~Dog() {
		cout << "소멸자 호출 " << endl;
	}

	int getAge(){ return age; }
	string getName() { return name; }
};


int main() {

	Dog *pDog = new Dog(1, "똥개");
	cout << pDog->getAge() << endl;
	cout << pDog->getName() << endl;
	delete pDog;

	Dog *pDog2 = new Dog;
	cout << pDog2->getAge() << endl;
	cout << pDog2->getName() << endl;
	delete pDog2;
	system("pause");
	
}
