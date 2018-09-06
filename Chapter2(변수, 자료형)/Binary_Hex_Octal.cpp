#include <iostream>
/*
 * Binary Literal 
 * C++ 14 추가 내용 
 */

 /*
 * 2진수 표기법 : 0bNNNN   << C++ 14 추가 >> 
 * 8진수 표기법 : 0NNNN
 * 16진수 표기법 : 0xNNNN
 * 2진수 1010 1111 1111 1111
 * 중간 중간 ' 삽입하여도 컴파일시 무시됨
 * 10진수 8진수 모든 진수에 통함
 */


int main() {
	using namespace std;

	int x3 = 0b1010; // 2진수 1010
	int x4 = 0b1010'1111'1111'1111;

	cout << x3 << endl; // 10 
	cout << x4 << endl; // 45055

	int x1 = 012; // 10 8진수 12
	int x2 = 0xF; // 15 16진수 F

	cout << x1 << endl; // 10
	cout << x2 << endl; // 15


	
	system("pause");

}
