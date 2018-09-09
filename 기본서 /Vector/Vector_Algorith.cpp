#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/* 벡터와 객체 배열 */
/* 사용방법 : 알고리즘 헤더와 같이 사용 */

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person(string n, int a) {
		name = n;
		age = a;
	}
	
	string getName() { return name; }	
	int getAge() { return age; }

	void print() {
		cout << age << " " << name << endl;
	}
};

bool compare(Person &a, Person &b) {
	return a.getAge() < b.getAge(); 
	// 나이를 기준으로 오름차순 정렬 
}


int main() {
	vector<Person> list;
	list.push_back(Person("Kim", 26));
	list.push_back(Person("Chung", 20));
	list.push_back(Person("Lee", 29));

	sort(list.begin(), list.end(), compare);
  // sort(시작, 끝, 정렬 기준) 

	vector<Person>::iterator iter = list.begin();
	for (iter; iter != list.end(); iter++) {
		(*iter).print();
	}
	

	system("pause");
}
