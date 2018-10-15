#include <iostream>
#include "MyConstants.h"

using namespace std;


// 함수 선언시 extern 안해도 암묵적으로 다른 obj파일에서 찾아줌 
extern void doSomething();

int main() {

	cout << "main : " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	/*
		doSomething에서의 pi와 main에서의 pi의 주솟값이 다름 
		즉, MyConstants를 include하였을 때 사본이 생기기때문에 메모리의 낭비 
	*/
	
	system("pause");
}
