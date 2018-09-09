#include <iostream>
#include <vector>
/************ 벡터 요소 접근  *****************/
/*
	Using Iterator(반복자)
	반복자 : 일반화된 포인터.
	=> STL 컨테이너에 저장된 원소에 접근하는 일반적인 포인터

	* 벡터 요소 접근 방법 
		vector.begin(), back() : 각 처음과 끝 요소를 가르키는 포인터 
	* 벡터 요소 삽입 삭제 방법 
		vector.push_back(), .pop_ back() : 요소를 끝에 삽입 및 삭제, 값 반환 x 
	* 임의의 위치 접근 방법 
		i번째 요소 접근 : vector.begin() + i 
	
	
*/

using namespace std;

int main() {
	vector<int> v;


	// push_back(삽입요소) 
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	cout << "vector.beign : " << *v.begin() << endl;


	/* 벡터 요소 접근 */
	// 1) 반복자 접근 
	cout << " iterator : " << endl;
	vector<int>::iterator iter = v.begin();
	for (iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << endl;


	// 2) 참조자 접근 
	cout << " reference : " << endl;
	for (int& e : v) {
		cout << e << " ";
	}
	cout << endl;


	/* 중간 요소 접근 삭제 */
	cout << "4번째 요소 삭제 " << *(v.begin() + 3) << endl;
	v.erase(v.begin() + 3);


	/* 벡터 요소 삭제 */
	// pop_back()
	cout << " pop back " << endl;
	while (v.empty() != true){
		cout << v.back() << " ";
		v.pop_back();
	}
	
	system("pause");


}
