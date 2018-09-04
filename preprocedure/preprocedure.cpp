#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9
#define MY_NUMBER2 "hello world"

#define MAX(a,b) ( (a>b) ? a : b )
// std::max(a,b)

// 메크로 
// 1) 하드코딩식으로 빠르게 사용하기 위한 용도였음 
//    현재는 빨라졌기때문에 잘 사용 안함 
//    에러 발생시 그냥 괄호로 묶어버려 


#define LIKE_APPLE

 /*
  * #ifdef, #endif 를 사용하는 경우 
  * 멀티 플랫폼 ( 윈도우로 들어갈 지 맥으로 들어가는 지 등 ) 
  * Conditional Compilation 
  * 

  * 전처기(#ifdef #endif 등에서 위의 정의 된 메크로는 다른 것으로 교체 안됨 

  * #define LIKE_APPLE 은 현재의 파일에서만 효력이 있음
  * 따라서 다른 헤더파일에서는 해당 LIKE_APPLE이 정의가 안되어있기때문에 오렌지 출력 
  * 같은 파일안에 존재할 경우 APPLE 출력 

  */


int main() {
	cout << MY_NUMBER << endl;
	cout << MAX(1, 2) << endl;
	cout << std::max(3, 2) << endl; // algorithm 




	return 0;
}
