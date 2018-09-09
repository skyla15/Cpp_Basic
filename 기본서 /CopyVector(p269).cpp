#include <iostream>
#include <vector>
/* 하나의 벡터를 다른 벡터로 복사하기 */

using namespace std;

int main() {
	vector<int> v1 = { 1, 2, 3, 4, 5 };
	vector<int> v2 = v1;
	vector<int> v3(v1);
	
	cout << "v1 : ";
	for (int& e : v1) {
		cout << e << " ";
	}
	cout << endl;

	cout << "v2 : ";
	for (int& e : v2) {
		cout << e << " ";
	}
	cout << endl;

	cout << "v3 : ";
	for (int& e : v3) {
		cout << e << " ";
	}
	cout << endl;

	system("pause");

}
