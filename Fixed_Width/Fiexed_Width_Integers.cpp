#include <iostream>

/*****************************************
		Fixed-width Integers 		
*****************************************/

int main() {
	using namespace std;

	std::int16_t i(5); // #typedef int16_t short 
	
	std::int8_t myint = 65; // #typedef int8_t char  

	cout << myint << endl; // 출력 : A 

	std::int_fast8_t fi(5); // 8비트 갖는 것중 가장 빠른 형을 갖음 
	std::int_least64_t fl(5); // 적어도 64비트를 갖는 형을 갖음 
	system("pause");

}
