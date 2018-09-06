#include <iostream>



int main() {
	using namespace std;

	bool b1 = true; // copy initailization 
	bool b2(false); // direct ..
	bool b3{ true }; // uniform ..
	/*
	 * 자료형 엄격
	 * copy < direct < uniform 
	 */

	b3 = false;

	cout << b1 << endl; // 1
	cout << b2 << endl; // 0

	cout << std::boolalpha;
	cout << b1 << endl; // true
	cout << b2 << endl; // false

	cout << std::noboolalpha;
	cout << b1 << endl; // 1
	cout << b2 << endl; // 0

	cout << std::boolalpha;
	cout << "b3 : " << b3 << endl; // false
	cout << std::noboolalpha;
	cout << "b3 : " << b3 << endl; // 0	

	cout << endl;


	bool inBool;
	cout << "입력 : ";
	cin >> inBool;
	cout << std::boolalpha;
	cout << "your input : " << inBool << endl; 
	// inBool != 0 일경우 제외 1
	
	system("pause");

}
