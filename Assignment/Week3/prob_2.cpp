#include <iostream>
using namespace std;

int sqr3(int num) { // 3번 제곱하여 준다
	int result = 1;
	for (int i = 0; i < 3; i++) {
		result *= num;
	}
	return result;
}

int sqr4(int num) { // 4번 제곱한 값 반환
	int result = 1;
	for (int i = 0; i < 4; i++) {
		result *= num;
	}
	return result;
	}

int sqr5(int num) { // 5번 제곱한 값 반환
	int result = 1;
	for (int i = 0; i < 5; i++) {
		result *= num;
	}
	return result;
}

int main() {
	int a, b, c;

	cout << "숫자 입력(3제곱) :";
	cin >> a;

	cout << "숫자 입력(4제곱) :";
	cin >> b;

	cout << "숫자 입력(5제곱) :";
	cin >> c;

	cout << endl;

	cout << a << "의 3제곱 은 : " << sqr3(a) << endl;
	// 3제곱 출력
	cout << b << "의 4제곱 은 : " << sqr4(b) << endl;
	// 4제곱 출력
	cout << c << "의 5제곱 은 : " << sqr5(c) << endl;
	// 5제곱 출력

	return 0;
}
