#include <iostream>
#include <string>
#include <array>
using namespace std;

/* 함수 포인터 
	
	retruntype (*FunctionPtr)(parameters) = 함수 
  
  FunctionPtr : 함수 포인터 형 
  typedef 로 선언시 FunctionPtr fctptr; 선언 가능 
*/

typedef bool(*check_t)(const int&);

bool isTrue(const int& number) {
	if (number % 2 == 0)
		return true;
	else
		return false;
}

bool isOdd(const int& number) {
	if (number % 2 != 0)
		return true;
	else
		return false;
}

//void print(const array<int, 5> &myArray, bool(*check)(const int&) = isTrue)
void print(const array<int, 5> &myArray, check_t check = isTrue)
{
	for (auto element : myArray)
	{
		if (check(element) == true)
			cout << element;
	}

	cout << endl;
}

int main() {
	std::array<int, 5> myArray{0, 1, 2, 3, 4};

	print(myArray, isTrue);
	print(myArray, isOdd);

	system("pause");
}
