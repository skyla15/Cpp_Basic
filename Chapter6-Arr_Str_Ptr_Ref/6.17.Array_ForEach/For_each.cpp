// For - Each 
#include <iostream>
#include <limits>
#include <vector>
/*
	for-each : 동적 배열 사용 불가능 => vector 사용 
*/
using namespace std;

int main()
{	
	int max_number = std::numeric_limits<int>::lowest();
	
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	for (const auto &n : fibonacci) {
		cout << n << endl;
	}

	vector<int> fi = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	for (int &a : fi) {
		cout << a << endl;
	}

	system("pause");
}
