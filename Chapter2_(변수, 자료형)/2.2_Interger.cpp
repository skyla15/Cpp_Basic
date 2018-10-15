#include <iostream>
#include <cmath>
#include <limits.h>

int main() {
	using namespace std;

	short s = 1; 

	cout << pow(2, sizeof(short) * 8 - 1) - 1  << endl;
	// sizeof(short) * 8 - 1 
	// 2 ^ ( sizeof(short) * 8 - 1 ) - 1 ( 0 표현부분을 뺀 것 ) 
	// 16 bit - 1 bit ( 부호비트 ) 	
	// signed 정수표현일 경우 0111 1111 1111 1111 =  +0
	// 따라서 최댓값은 0111 1111 1111 1110
  
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;


	unsigned int i = -1; 
	// -1signed 형을 unsigned형으로 자동으로 컴파일, 위험 

	system("pause");

}



/************************************************************

		unsigned 형으로도 오버플로우 확인해보자~

*************************************************************/
