#include <iostream>

using namespace std;
int main() {
	int sum = 0; // 출력하기 위한 sum 
	int getSum = 1; // 각 횟수마다 1씩 증가하여 더해주기 위한 수
	for (int i = 0; i < 10;  i++) {
		sum += getSum;
		getSum++;
	}

	cout << "1에서 10까지의 합은 : " << sum << endl;

	return 0;
	
}
