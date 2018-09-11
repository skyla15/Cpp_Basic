// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


/*
	Static과 전역변수의 차이점
	- Static int a = 1;
	  1) 메모리가 정적으로 선언, 한번만 선언이 되고 계속 사용. ( 같은 메모리 계속하여 사용 ) 
	  2) Static 선언 시 반드시 초기화가 되어야 함 
	  3) 디버그시 함수 호출 횟수 확인하기 위하여 사용!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!			

	- int a = 1 
	  호출될때마다 새롭게 선언, 새로운 메모리 할당.
	

	- 전역변수 사용시
	  1) 값을 관리하기가 어려움 
	  2) 전역변수 선언시 global 임을 명시적으로 표현 
	  3) 전역변수대신 객체지향을 사용하는 것이 더 좋음 
*/

void doSomething() {
	int a = 1;
	++a;
	cout << a << endl;
}

void doSomething2() {
	static int a = 1;
	++a;
	cout << a << endl;
}

int main() {
	doSomething(); // 2
	doSomething(); // 2
	doSomething(); // 2

	doSomething2(); // 2
	doSomething2(); // 3
	doSomething2(); //4 
}

