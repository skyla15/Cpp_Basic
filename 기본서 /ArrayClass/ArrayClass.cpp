#include <iostream>
#include <array>

/* 
	Array 클래스 
	- 정적 배열 클래스 
	- .size()
	- .fill() : 동일한 값으로 배열을 채움 
	- .empty() 
	- .at() : 해당 위치 요소 접근 
	- .front(), .back()
*/

using namespace std;


int main() {
	array<int, 3> list = { 1,2,3 };
	for (int& element : list) {
		cout << element << " ";
	}
	cout << endl;

	cout << "list.at(1) : " << list.at(1) << endl;

	list.fill(1);
	cout << "fill(1) : ";
	for (int& element : list) {
		cout << element << " ";
	}
	cout << endl;

	
	
	system("pause");
}
