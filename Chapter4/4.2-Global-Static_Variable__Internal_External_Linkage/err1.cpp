#include <iostream>


using namespace std;

static int g_a = 1;

	// forward declaration 
	// extern void doSomething(); // = extern doSomething();
	extern int a;


int main() {

	cout << a << endl;
	/*
		fatal error LNK1120: 1개의 확인할 수 없는 외부 참조입니다.
		=> 컴파일 이상없음 
		=> 출력을 하기위해 링킹과정에서 다른 오브젝트 파일들을 따라 
		   extern int a를 찾는 중에 a가 할당이 안되었기에 링킹에러가 발생 
		=> 즉 a의 메모리 공간이 할당이 안되어 링킹에러
	*/
	system("pause");
}
