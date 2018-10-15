#include <iostream>



int main() {
	using namespace std;

	// \n 등은 하나의 문자, 아스키코드 10
	cout << int('\n') << endl; 


	// \n과 endl 차이 
	// \n : 줄바꿈 
	// endl : 줄바꿈 과 동시에 버퍼에 들어간 것(cout)을 출력하고 줄을 바꾼다
	// std::flush   : 줄바꿈을 안하고 버퍼에 있는 것을 모두 출력해라.
	// ", '등 출력을 하고자 하는 경우 \", \' 
	// \a : 오디오 시그널, 띠용 소리 출력 

	/*****************************************************************************************
	* cin 사용 시 버퍼에 저장되어서 출력
	* ab 2개 입력후 3번 출력 할 경우 마지막 버퍼에 남아 있던 b 계속 출력 
	*/

	char input;

	cout << "입력 : ";
	cin >> input; // ab
	cout << input << " " << static_cast<int>(input) << endl; // a, 97 

	cin >> input;  // 버퍼에 b 계속 남아있음
	cout << input << " " << static_cast<int>(input) << endl; // b, 98
	cout << input << " " << static_cast<int>(input) << std::flush << endl; // b, 98
	cout << input << " " << static_cast<int>(input) << endl; // b, 98

	/****************************************************************************************/

	
	char c1(65);
	char c2('A'); // c2 = c1 = A 출력 

	// C - style casting 
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65

	// Cpp style casting 
	cout << char(65) << endl; // A
	cout << int('A') << endl; // 65

	/*
	 * Static Cast & Dinamic Cast 
	 * 캐스팅 시 분제 없는 지 확인후 캐스팅
	 */
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65 
	

	char ch(97);
	cout << ch << endl; // 97
	cout << static_cast<char>(ch) << endl; // a
	cout << static_cast<int>(ch) << endl; // 97


	
	system("pause");

}
