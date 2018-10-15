/* *********** *********** *********** *********** *********** ***********
 * const 사용 방법
 * 함수의 파라미터로 사용 ( 가독성을 위한 변경 방지 ) 
 * 런타임 상수시 사용 
 * 반본되는 상수 사용시 헤더파일에 몰아넣고 사용 ( namespace 이용 ) 
 * constexpr 사용하여 컴파일타임 상수 명확히 표현 
 * *********** *********** *********** *********** *********** ***********
 * constexpr
 * 컴파일타임 상수 선언시 사용 
 * 아래의 special_number 선언시 
 * constexpr int special_number(number); 오류 
 * *********** *********** *********** *********** *********** ***********
 * 메크로 이용 변수 선언보다 const 를 사용 
 * *********** *********** *********** *********** *********** ***********/
#include <iostream>
#include "MY_CONSTANTS"


using namespace std; 

void pritnNumber(const int my_number) {
	//using constant   " my_number " 
}

int main() {
	
	int my_number = 10*constants::const1;

	int number;
	cin >> number;
	const int special_number(number);
	// 런타임 상수 
	
	system("pause");


}
