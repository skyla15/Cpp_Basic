#include <iostream>

// 외부 파일의 전역 변수들에 접근을 시도
extern int global_number;
// extern int static_global_number;
   // 링크에러 


// 외부 파일의 전역 상수들에 접근을 시도
// extern const int global_constant;
   // 링크에러 
// extern const int static_global_constant;
   // 링크에러


// 외부 파일의 함수들에 접근을 시도
extern int foo(int x); // 일반함수 
extern int goo(int x); // 정적함수
extern int hoo(int x); // 인라인함수 
template<typename T> extern T ioo(T x); // 템플릿함수 



int main()

{

	int a, b, c, d, e, f;
	
	global_number = 100;
	//static_global_number = 200;

	//a = global_constant * 2;
	// b = static_global_constant * 4;
	
	c = foo(10);
	//d = goo(20);
	//e = hoo(30);
	//f = ioo(40);

	std::cout << global_number << " " << c << std::endl;

	system("pause")

		;


	return 0;

}
