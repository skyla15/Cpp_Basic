/*
	구조체 초기화 방법
	1) Default Initialization
			struct Person {
				double height = 10;
				float weight = 20;
				int age = 30;
				string name = "mr.incredible"
			}

	2) Padding BIt 
	   32bit 컴퓨에서는 한번에 데이터를 읽을 시 4바이트씩 읽어온다 .
	   따라서 구조체로 저장할 시 short ( 2bytes ), char ( 1 bytes ) 등의 자료형은 
	   4바이트를 맞추기 위한 padding bit가 들어간다.
	   => 아래의 경우 id : 2bytes + (2bytes, padding) 
	   => sizeof(Employee) = 2 + (2) + 4 + 8 = 16bytes의 공간을 갖는다 
	struct Employee{
		short id;       // 2bytes
		int age;	    // 4bytes
		double wage;    // 8bytes
	}
	
*/

#include <iostream>
#include <string>

using namespace std;

struct Person {
	double height;
	float weight;
	int age;
	string name;

	void print() {
		cout << height << " " << weight << " " << age << " " << name << endl;
		cout << endl;
	}
};

void printPerson(Person ps) {
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << endl;
	cout << endl;
}


Person setPerson() {
	Person me{ 2.0, 100.0, 20, "Jack Jack" };
	return me;
}

int main() {	

	// 구조체 초기화
	Person me{ 2.0, 100.0, 20, "Jack Jack" }; 
	cout << "me :: 구조체 내부 함수" << endl;
	me.print();

	// 구조체를 함수의 매개변수
	cout << "me :: 함수호출" << endl;
	printPerson(me);

	// 구조체 복사
	Person me2 = me;
	cout << "me2 :: 구조체 내부 함수" << endl;
	me2.print();

	//구조체를 함수의 반환값으로 
	Person me3 = setPerson();
	cout << "me3 :: 구조체 내부 함수" << endl;
	me3.print();
	
	system("pause");
}
