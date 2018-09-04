#include <iostream>
/*
 * 음수의 나눗셈 연산자 : 버림 
   -5 / 2 => -2
 * 나머지 연산자 : 왼쪽의 부호를 따라감 
   -5 % 2 => -1
 */
using namespace std; 

int main() {
	cout << -5 / 2 << endl; // 남은 부분 버림, -2.5 => -2 
	cout << -5 % 2 << endl; // 부호는 왼쪽의 것 따라갑 => -1
	system("pause");
}
