#include <iostream>
#include <string>
#include <windows.h>
#include <limits>
/* 
 클래스 외부에 함수선언 가능 ( 인터페이스 )
 함수 선언, 구현하는 방법은 일반 함수 선언과 동일 
 */

/* 멤버함수의 클래스 내부, 외부 선언의 차이점 
1) 내부 선언 시 : 멤버함수가 자동으로 inline 함수로 저장 
2) 외부 선언 시 : 일반함수와 동일한 함수로 작용 

=> 멤버함수의 크기가 클 경우 내부에 선언 시 코드가 여러번 복사되어 실행 파일의 크기 커짐 
=> 멤버함수의 크기가 작을 경우 실행속도가 빠르기때문에 클래스 내부에 선언 
*/

/* 클래스의 선언과 정의 
1) 정의 : 멤버함수에 대한 정의가 포함되어있는 경우 
   => 클래스의 공간까지 할당

2) 선언 : 멤버함수에 대한 선언만 되어있는 경우 
   => 클래스 공간이 할당되지 않음 

=>> 따라서 클래스의 선언은 헤더파일, 정의는 소스 파일에 표현 

*/

/*****************
** double Circle::calcArea(); 
** Define.h 에 정의 
*******************/

using namespace std;

class Circle {
public:
	int x, y, radius;
	string color;
	double calcArea();
};


int main() {
	Circle c;

	c.x = 100;
	c.y = 100;

	c.radius = 50;

	system("pause");
	
}
