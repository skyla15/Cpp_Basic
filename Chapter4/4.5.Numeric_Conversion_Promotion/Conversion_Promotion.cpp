// #4.5 Type Conversion 
// 핵심 : numeric conversion ( 큰형 -> 작은 형 ) & numeric promotion ( 작은 형 -> 큰 형 ) 차이 
/*	
	형변환 시 우선순위 존재!!!!!!!!!!!!!!!!!!!!!!!!!!!
	int, unsigned int, long, unsigned long, 
	long long, unsigned long long
	float, double, long double

	=> 따라서 unsigned int와 int간의 계산시 우선순위를 고려해야한다 !!!!!!!!!!!!



	typeid(변수명).name() 
	1) 변수의 형을 보여줌 
	2) 암시적 형변환 시
	   ex) int a = 123.0
    2-1) numeric promotion ( 작은 자료형 -> 큰 자료형, float -> double ) 
	2-2) numeric conversion 
	     ex) double d = 3;
		     short s = 2;
	3) auto를 사용할 경우 필요 
  

	static_cast<변환할 자료형>(변수명) 
	=> 명시적 형변환
	=> 컴파일시 캐스팅 오류를 잡아줌 
*/

#include <iostream>
#include <typeinfo> // typeid(변수명).name()
#include <limits>
#include <iomanip> // << std::setprecision(소수점갯수) <<


using namespace std;

int main()
{

	//numeric conversion 
	cout << 5u - 10 << endl;  // 5u : unsigned, 10 : signed
	cout << typeid(5u - 10).name() << endl; // unsigned int // 언더플로우 발생. 


	// numeric conversion : 큰 자료형 -> 작은 자료형으로 변환시 문제 발생	
	int i = 30000;
	char c = i;
	cout << static_cast<int> (c) << endl; // 완전히 이상한 숫자(48)이 나옴 
	cout << static_cast<int>(numeric_limits<char>::max()) << endl; // char의 최댓값 : 127 
	cout << typeid(c).name() << endl;



	// numeric conversion : 큰 자료형 -> 작은 자료형으로 변환시 문제 발생	
	double d = 0.123456789;
	float f = d;
	cout << std::setprecision(12) << d << endl;  // 0.123456789
	cout << std::setprecision(12) << f << endl;  // 데이터 손실 경고 메세지 발생 


	// numeric promotion ( int -> float )
	int i2 = 1234;
	float f2 = i2;
	cout << std::setprecision(12) << f2 << endl;  // float형 1234 ,문제발생 

	
	


	system("pause");

}
