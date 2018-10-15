/*
	- 클래스 선언과 헤더파일		
	- 클래스 안에 함수에 대한 Definition을 적어놨을 경우 
	  인라인으로 하고 싶은 의도로 간주
	- 클래스의 생성자까지 옮겨주는 것이 좋음 
*/


#include "stdafx.h"
#include "Calc.h"

int main()
{
	Calc cal(10);
	cal.add(10).sub(2).mult(3).print();
	return 0;
}
