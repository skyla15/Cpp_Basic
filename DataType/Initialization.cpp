#include <iostream>
#include <bitset>

/*
 * Charater 
	char / char16_t / char32_t / wchar_t
 * Integer 
	char 4 / short 8 / int 16 / long 32 / long long 64  

 * Floating-point 
	float / double / long double 

 * Boolean 
	bool

 * Void 
	void 
 */
int main() {
	using namespace std;

	bool bValue = false;

	char chValue = 'A';
	char chValue2 = 65;

	float fValue = 3.141592f;
	double dValue = 3.141592;
	// 숫자끝에 f를 붙이지 않을 경우 double형으로 인식 
	// 따라서 에러가 발생 

	auto aValue = 3.141592;
	// 자동으로 double형으로 저장 
	auto aValue2 = 3.141592f;
	// 자동으로 float형으로 저장 



	/*			  
	 * 초기화 방법 *
	 */
	int c = 3.1415; // Copy Initialization : 맞는 형으로 캐스팅하여 저장이 됨
	int a(123); // Direct Initialization 
	int b{ 123 };  // Uniform Initialization : 다른 형의 수를 입력할 경우 에러 

	cout << (bValue ? 1 : 0) << endl;
	cout << chValue << endl;
	cout << chValue2 << endl;

	cout << "aValue : " << aValue << endl;
	cout << "aValue2 : " << aValue2 << endl;

	cout << "aValue size : " << sizeof(aValue) << endl;
	cout << "aValue2 size : " << sizeof(aValue2) << endl;


	system("pause");

}
