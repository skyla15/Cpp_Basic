#include <iostream>
#include <array>

/* 
	  < 동적 배열 vs 정적 배열 >
	동적 배열 
	  => 런타임 중에 배열의 크기 설정 가능 
	정적 배열 
	  => 컴파일타임에 이미 크기 결정, 크기 변경 불가능  
*/

using namespace std;


int main() {

	// 동적 배열 예제 
	int *p = nullptr;
	p = new int[10];

	int x;
	cin >> x;
	p = new int[x];

	// 정적 배열 예제 
	/*
		int a[10];
		int x2;
		cin >> x2;
		int a[x]; // 에러 
	*/
	
	system("pause");
}
