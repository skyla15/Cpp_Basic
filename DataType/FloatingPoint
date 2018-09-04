#include <iostream>
#include <limits>
#include <iomanip> // 출력 값의 크기 조작 


int main() {
	using namespace std;
	
	/* FLAOTING 숫자 표현방법 

	   sign(1) + exponent(8) + mantisa(23) 
	   0          00000111     11000000000000000000000
	   +              7               2^(-1) + 2(-1) 
	  
	   + ( 1 + 0.75 ) * 2^(7-127) 
	     < bias : 127 이용 > 	   

	   float 형 숫자 정수부 및 소수부 -> 2진수 변환후 정수부.소수부 표현 
	   이후 정수부의 첫 자리수 바로 뒤에 소수점 추가 
	   올려진 소수점 만큼의 소수점 수를 exponent 부분에 표현 
	   소수점 앞의 1을 제외한 부분을 mantisa 부분에 저장 
	   이 방식으로 플로팅 포인트 방식으로 부동소수점 수 저장
	   => 저장될 때 오차 발생 가능 
	*/


	double fTest(123456789.0); // 10 significant digits (유효숫자 10개)
	cout << setprecision(fTest);
	cout << "fTest : " << fTest << endl;  // 1.23457e+08 
	cout << setprecision(9);
	cout << "fTest : " <<  fTest << endl; // 1234567892 
	cout << endl;

	// 실수형 변수 특히 float의 경우 오차는 double형보다 크기때문에 
	// 실수형 변수 사용시 double 형을 사용하는 것을 추천.


	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);		
	cout << setprecision(d2);
	cout << "d2 : " << d2 << " ( not precision set ) "<< endl; // 1
	cout << setprecision(17);
	cout << "d1 : " << d1 << endl; // 1	
	cout << "d2 : " << d2 << " ( precision set ) " << endl; // 0.99999....989 
	cout << endl;


	double dTest(0.1); 
	cout << setprecision(dTest); 
	cout << "dTest : " << dTest << endl; // 0.1 
	cout << std::setprecision(17);
	cout << "dTest : " << dTest << " precision set " << endl; // 0.1000...001
	cout << endl;
	



	float f;
	double d;
	long double ld;	
	cout <<"float size : " << sizeof(f) << endl;
	cout << "double size : " << sizeof(d) << endl;
	cout << "long double size : " << sizeof(ld) << endl;
	cout << endl;


	cout << "float max : " << numeric_limits<float>::max() << endl;
	cout <<  "double max : " << numeric_limits<double>::max() << endl;
	cout <<  "long double max : " << numeric_limits<long double>::max() << endl;
	cout << endl;

	cout << "float min : " << numeric_limits<float>::min() << endl;
	cout << "double min : " << numeric_limits<double>::min() << endl;
	cout << "long double min : " << numeric_limits<long double>::min() << endl;
	// min : 표현할 수 있는 가장 작은 값의 "" 절댓값 ""
	cout << endl;

	cout << "float lowest : " << numeric_limits<float>::lowest() << endl;
	cout << "double lowest : " << numeric_limits<double>::lowest() << endl;
	cout << "long double lowest : " << numeric_limits<long double>::lowest() << endl;



	system("pause");

}
