#include <iostream>

using namespace std; 


/** default functionse **/
/*
 * 가장 우측부터 기본값이 왼쪽방향으로 순차적으로 들어가야됨  
 *
 * default 값이 들어가는 함수의 선언은 1회만 해야함.
 * 
 * 디폴트값이 없는 인자수만큼 매개변수를 받아야함.
 * 
 * 디폴트 값이 없는 함수와 디폴트 값이 있는 함수로 오버로딩 불가능 
 * => Ambiguous Error 
 */

void default_1(int p1 = 10, int p2 = 20, int p3 = 30) {
	
	cout << "default_1 : " << p1 << " " << p2 << " " << p3 << endl;
}

void default_2(int p1, int p2 = 20, int p3 = 30) {
	cout << "default_2 : " << p1 << " " << p2 << " " << p3 << endl;
}

// void default_3(int p1 = 1, int p2, int p3 = 3) {} 에러 


/** overlaod functions **/
void print(int a) {
	cout << " 정수 " << a << endl; // 정수 출력 
}

void print(double a) {
	cout << " 실수 " << a << endl; // 더블형 출력 
}


/* inline fucntions 
 * 짧은 함수일 경우 레지스터의 올리지 않고 코드를 복사하여 사용 
 * 클래스 내부에 선언되는 함수들은 implicit하게 inline 함수로 
 */ 

inline int inlineFunc(int a) {
	return a * a;
 }

int main() {

	print(1);  // 오버로딩 
	print(2.0); 

	// void default_1(int p1 = 10, int p2 = 20, int p3 = 30) 
	default_1(); // 10 20 30
	default_1(100); // 100, 20, 30
	default_1(100, 200); // 100, 200 ,30
	default_1(100, 200, 300); // 100, 200, 300

	// void default_2(int p1, int p2 = 20, int p3 = 30) 
	default_2(100); // 100, 20, 30
	default_2(100, 200); // 100, 200, 30
	default_2(100, 200 , 300); // 100, 200, 300 

	cout << inlineFunc(1) << endl; // inline 함수 

	system("pause");
}
