#include <iostream>
#include <bitset>

using namespace std;

int main() {
	bitset<8> bit = 0xFF;
	bitset<8> chk = 0x01; // 연산비트를 위한 chk

	cout << "0xFF : " << bit << endl;

	cout << ( bit & chk ) << endl;

	for (int i = 1; i < 8; i++) {
		cout << (bit & (chk << i)) << endl;
	}
	// 비트연산자를 이용하여 출력 

	return 0;
}
