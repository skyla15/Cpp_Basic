// #4.4.  auto 자동형추론 

/*
	함수에서 사용시
	1) 반환형으로 사용가능 
	2) auto형으로 매개변수를 받을 수 없음 
	   => 대신 템플릿으로 사용하면 됨 
	3) trailing return type, 보기 편하게 출력형을 " -> 자료형 " 으로 표시
	   ex)
	   auto add(int a, int b) -> int;
	   auto add(int a, int b) -> double;
	   ...

	* 참고 
	  템플릿을 사용시 : 여러개의 리턴값 반환 가능 

	
*/

#include <iostream>


auto add(int a, int b) -> int;
auto add(int a, int b) -> double;

int main() 
{
	using namespace std;

	auto a = 123; 
	
	auto result = add(1, 2);
}

auto add(int a, int b) 
{
	return a + b;
}

auto add(int a, int b)
{
	return (double)(a + b);
}
