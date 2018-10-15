#include <iostream>
#include <string>

using namespace std;


typedef struct Person {
	int age;
	string name;
	int id;
}Person;
// Person 구조체 정의 

Person& setPerson(Person& person) {
	person.age = 20;
	person.name = "정재엽";
	person.id = 2013112130;
	return person;
	// person 구조체를 참조자로 받아 자료를 세팅합니다.
}

int main() {
	Person person;
	person = setPerson(person);

	cout << "나이 : " << person.age << endl;
	cout << "이름 : " << person.name << endl;
	cout << "학번 : " << person.id << endl;
	// set Person에서 정의된 정보를 출력 
	
	return 0;
}
