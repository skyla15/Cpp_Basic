#include <iostream>
#include <memory>
#include <vector>

/* 
	스마트포인터 사용 
	unique_ptr<자료형> 변수명(new 자료형 초기화)
	ex)
	unique_ptr<int> p(new int);
*/

using namespace std;


int main() {

	unique_ptr<int[]> p(new int[10]);

	for (int i = 0; i < 10; i++){
		p[i] = i;
		cout << p[i] << " ";
	}
	cout << endl;

	unique_ptr<vector<int>> p2(new vector<int>);
	(*p2).push_back(1);

	system("pause");
}
